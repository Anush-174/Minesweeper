# Minesweeper Game

A terminal-based implementation of the classic Minesweeper game, developed in C++.

## Features

- Multiple difficulty levels:
  - Easy: 9x9 board with 10 mines.
  - Medium: 16x16 board with 40 mines.
  - Hard: 16x30 board with 99 mines.
- Interactive terminal interface.
- Dynamic mine placement and automatic hint generation.
- **Mark suspected bombs:** Highlight cells in color by pressing `E`.
- Real-time navigation and cell selection using keyboard inputs.
- Win and lose detection with feedback.

## Gameplay Instructions

1. **Select Difficulty:**
   At the start of the game, choose a difficulty level by entering:
   - `E` or `e` for Easy.
   - `M` or `m` for Medium.
   - `H` or `h` for Hard.
2. **Navigation:**
   - Use the following keys to move the cursor on the board:
     - `W`: Move up.
     - `A`: Move left.
     - `S`: Move down.
     - `D`: Move right.
   - Press `Enter` to open the selected cell.
3. **Mark Suspected Bombs:**
   - Use the `E` key to highlight a cell in color if you suspect it contains a bomb.
   - Pressing `E` again will remove the highlight.
4. **Objective:**
   - Open all cells that are not mines.
   - Avoid cells containing mines (`*`).
5. **Winning:**
   - Open all safe cells without triggering any mines.
