# Rock-Paper-Scissors Showdown Project

## Project Overview

This project is a **Rock-Paper-Scissors** game implemented in C++. It is designed to be simple, interactive, and fun. The game allows a player to compete against the computer for a specified number of rounds. After each round, the results are displayed, including the choices made by both the player and the computer, and who won the round. Once all rounds are completed, the overall winner is announced based on the total number of wins. The player can also choose to play multiple games.

## Features

- **Rounds**: The player can choose how many rounds to play.
- **Random Computer Moves**: The computer randomly selects Rock, Paper, or Scissors for each round.
- **Game Results**: After each round, results are displayed, showing who won and the choices made by both the player and the computer.
- **Color Feedback**: The terminal background color changes based on the round's outcome:
  - Green for player wins.
  - Red for computer wins.
  - Yellow for a draw.
- **Final Results**: At the end of the game, the program announces the overall winner based on the total number of wins.

## Getting Started

### Prerequisites

- You will need a C++ compiler installed on your system (e.g., `g++`).
### Gameplay Instructions

1. When you start the game, you will be prompted to enter the number of rounds you want to play.
2. For each round, select your move:
   - Press `[1]` for Rock
   - Press `[2]` for Paper
   - Press `[3]` for Scissors
3. The computer will randomly choose its move.
4. After each round, the game will display the winner of that round.
5. At the end of all rounds, the program will display the final results, including the number of rounds won by the player, won by the computer, and any draws.
6. You will then be asked if you want to play another game:
   - Enter `Y` or `y` to play again.
   - Enter `N` or `n` to exit the game.

---

## Code Explanation

1. **enum eChoices**: Defines the possible moves: Rock, Paper, and Scissors.
2. **randomNumber(int From, int To)**: Generates a random number between `From` and `To`, simulating the computer's choice.
3. **numberOfRounds()**: Asks the player how many rounds they would like to play.
4. **playerChoice()**: Prompts the player to make their selection (Rock, Paper, or Scissors).
5. **computerChoice()**: Generates the computer's random move.
6. **plAndCompChoices()**: Converts the player's and computer's numeric choices to their respective string values (Rock, Paper, Scissors).
7. **printRoundResults()**: Prints the results of each round, showing both the player and computer's choices and who won the round.
8. **createGame()**: The core function that controls the game flow. It manages multiple rounds, keeps track of scores, and determines the overall winner.
9. **playAnotherGame()**: Asks the player if they want to play another game after the current one ends.

---

## Design Philosophy

The game is designed with simplicity and user interaction in mind. It uses basic terminal input and output, along with random number generation to simulate the computer's moves. The color feedback enhances the gameplay experience, giving visual cues for wins, losses, and draws. Additionally, it supports playing multiple games in one session, making it a fun and flexible program.

---

## License

This project is open-source and available for personal or educational use. Feel free to modify or improve the game as you see fit!

