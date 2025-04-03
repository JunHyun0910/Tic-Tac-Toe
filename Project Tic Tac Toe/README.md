# Tic-Tac-Toe in C

A simple **Tic-Tac-Toe** game written in **C**, where a player competes against the computer.

## Features

- **Player vs. Computer Mode** 
- **Random AI Moves** for the computer 
- **Simple Console-Based UI** 
- **Win, Lose, or Tie Detection** 
- **Replay Prompt** after each game 

##  Installation & Compilation

To play the game, follow these steps:

1. **Clone this repository**:
   ```sh
   git clone https://github.com/yourusername/C-Tic-Tac-Toe.git
   cd C-Tic-Tac-Toe
   ```
2. **Compile the game using GCC**:
   ```sh
   gcc tic_tac_toe.c -o tic_tac_toe
   ```
3. **Run the game**:
   ```sh
   ./tic_tac_toe
   ```

##  How to Play

- The board is a **3x3 grid**, displayed in the console.
- You play as **'X'**, and the computer plays as **'O'**.
- Enter your move by choosing a **row (1-3)** and **column (1-3)**.
- The game continues until a **player wins or the board is full (tie)**.

##  Winning Conditions

- Three **'X'** or **'O'** in a row ✅
- Three **'X'** or **'O'** in a column ✅
- Three **'X'** or **'O'** diagonally ✅

##  Example Gameplay

```
Welcome To Tic Tac Toe Game

   Game 1
   |   |   
---|---|---
   |   |   
---|---|---
   |   |   

Enter row #(1-3): 1
Enter column #(1-3): 1

 X |   |   
---|---|---
   |   |   
---|---|---
   |   | O

>:3 Congrats You Win!...Do you wish to play again?
Yes or No (Y/N):
```

##  Future Improvements

- Add **Player vs. Player Mode** 
- Improve AI Strategy 
- GUI Version using **SDL or ncurses** 

##  License

This project is **open-source** under the MIT License.

---

Made with C Language.

