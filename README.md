# Tic Tac Toe Game

This is a simple console-based Tic Tac Toe game written in C. It’s a fun project where two players take turns to play the classic game, and the program keeps track of the board and determines the winner or if the game ends in a tie.

## Features

- Two-player mode.
- Easy-to-read console game board.
- Detects wins, ties, and invalid moves.
- Prompts players when they make a mistake.

## Requirements

Before you start, make sure you have:

- A C compiler (like GCC).
- A terminal or command prompt to run the program.

## How to Run

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/tic_tac_toe.git
   cd tic_tac_toe
   ```

2. Compile the code using GCC:
   ```bash
   gcc -o tic_tac_toe tic_tac_toe.c
   ```

3. Run the game:
   ```bash
   ./tic_tac_toe
   ```

## How to Play

- The game board has 9 cells numbered 1 to 9.
- Player 1 is **X**, and Player 2 is **O**.
- Players take turns choosing a cell by entering its number.
- The game checks for a win or a tie and displays the result.

### Controls

- Use the number keys (1-9) to select your move.
- If you pick an invalid cell (already taken or out of range), you’ll be asked to try again.

## Code Overview

### `main()`

The main function initializes the game, manages player turns, and checks for win or tie conditions.

### `grid()`

This function displays the game board and refreshes it after every move. It also shows a retry message if a player makes an invalid move.

### Optional Colors

To make the game more visually appealing, you can add colors for player symbols. Just define these macros in your code:

```c
#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"
```

## Example Output

```
|     |     |     |
|  X  |  2  |  3  |
|-----|-----|-----|
|     |     |     |
|  4  |  O  |  6  |
|-----|-----|-----|
|     |     |     |
|  7  |  8  |  9  |
|     |     |     |
***Player 2 turn***
```

## Contributing

Want to make this game even better? Fork this repository, make your changes, and submit a pull request. Feedback and suggestions are always welcome!



