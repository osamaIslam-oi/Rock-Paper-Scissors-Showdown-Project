#include <iostream>
using namespace std;

enum eChoices {
    Rock = 1,
    Paper = 2,
    Scissors = 3
};

int randomNumber(int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int numberOfRounds() {
    int num;
    cout << "How many rounds do you want to play: ";
    cin >> num;
    return num;
}

int playerChoice() {
    int playerChoice;
    do {
        cout << "\nYour Choice: [1]:Rock [2]:Paper [3]:Scissors: ";
        cin >> playerChoice;
    } while (playerChoice < 1 || playerChoice > 3);

    return playerChoice;

}

int computerChoice() {
    return randomNumber(1, 3);
}

string playAnotherGame() {
    string playGameChoice;
    cout << "Do you wnat to play another game(Y/N): ";
    cin >> playGameChoice;
    return playGameChoice;
}

string plAndCompChoices(int choice) {
        if (choice == eChoices::Rock) {
            return "Rock";
        }
        else if (choice == eChoices::Paper) {
            return "Paper";
        }
        else {
            return "Scissors";
        }
}

void printRoundResults(int counter, string msg, int plChoice, int compChoice) {
    cout << "\n-----------Round[" << counter << "]-----------\n";
                              
    cout << "\nRound Winner: [" << msg << "]\n";
    cout << "Player choise: " << plAndCompChoices(plChoice) << endl;
    cout << "Computer choise: " << plAndCompChoices(compChoice) << endl;

    cout << "\n------------------------------\n\n";
}


void createGame() {
    int i;
    int plChoice;
    int compChoice;
    int playerWons = 0;
    int computerWons = 0;
    int draw = 0;
    string whoWon;
    int plWonsArr[100] = {};
    int compWonsArr[100] = {};

    int numOfRounds = numberOfRounds();

  
    for (i = 1; i <= numOfRounds; i++) {

        cout << "\nRound [" << i << "] begins: ";
        plChoice = playerChoice();
        compChoice = computerChoice();

        
            if ((plChoice == 1 && compChoice == 3) || (plChoice == 2 && compChoice == 1) || (plChoice == 3 && compChoice == 2))
            {
                printRoundResults(i, "Player won", plChoice, compChoice);
                playerWons++;
                system("color 2F");
            }
            else if ((plChoice == 1 && compChoice == 1) || (plChoice == 2 && compChoice == 2) || (plChoice == 3 && compChoice == 3))
            {
                printRoundResults(i, "Draw", plChoice, compChoice);
                draw++;
                system("color 0E");
            }
            else
            {
                printRoundResults(i, "Computer won", plChoice, compChoice);
                computerWons++;
                system("color 4F");
                cout << "\a";
            }

        if (i >= numOfRounds)
        {
            if (playerWons > computerWons) {
                whoWon = "Player Won";
            } 
            else if (computerWons > playerWons)
            {
                whoWon = "Computer Won";

            }
            else
            {
                whoWon = "draw";
            }
            cout << "              ------------------------------------------------------------\n";
            cout << "                                +++   G a m e O v e r +++                 \n";
            cout << "              ------------------------------------------------------------\n";
            cout << "              ------------------------[ Game Results ]--------------------\n";
            cout << "              Game Rounds           :  " << i << endl;
            cout << "              Player Won times      :  " << playerWons << endl;
            cout << "              Computer won  times   :  " << computerWons << endl;
            cout << "              final Winner          :  " << whoWon << endl;
            cout << "              ------------------------------------------------------------\n\n";
          
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    string playAgain;

    do 
    {
        createGame();
       playAgain = playAnotherGame();
    } 
    while (playAgain == "Y" || playAgain == "y");

}

