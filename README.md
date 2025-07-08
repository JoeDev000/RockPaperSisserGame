# 🎮 Rock Paper Scissors Game

A classic **Rock Paper Scissors** game implemented in C++ with colorful console interface and multiple rounds support!

## 🎯 Game Overview

Challenge the computer in the timeless game of Rock Paper Scissors! Play multiple rounds, track your statistics, and see who comes out on top with visual feedback and color-coded results.

## 🚀 Features

- 🎲 **Multiple Rounds**: Play 1-10 rounds per game
- 🎨 **Visual Feedback**: Dynamic screen colors based on results
- 📊 **Statistics Tracking**: Keep track of wins, losses, and draws
- 🔄 **Replay Option**: Play as many games as you want
- ✅ **Input Validation**: Prevents invalid inputs
- 🎯 **Smart AI**: Computer makes random choices each round

## 🎮 How to Play

### Getting Started
1. **Compile and run** the program
2. **Choose rounds**: Select how many rounds to play (1-10)
3. **Make your choice** each round using the number keys

### Game Controls
```
[1] Stone (Rock) 🪨
[2] Paper 📄
[3] Scissors ✂️
```

### Game Rules
- **Stone beats Scissors** ✂️ 🪨
- **Paper beats Stone** 🪨 📄  
- **Scissors beats Paper** 📄 ✂️
- **Same choice = Draw** 🤝

## 🎨 Visual Features

The game provides immediate visual feedback through screen colors:

| Result | Color | Description |
|--------|-------|-------------|
| 🏆 **You Win** | 🟢 Green | Victory celebration! |
| 😔 **Computer Wins** | 🔴 Red | Better luck next round! |
| 🤝 **Draw** | 🟡 Yellow | It's a tie! |

## 📊 Game Statistics

After each game, you'll see comprehensive statistics:

- **Total Rounds Played**
- **Your Wins** 🏆
- **Computer Wins** 🤖
- **Number of Draws** 🤝
- **Overall Winner** 👑

## 🔄 Replay System

- After each game, choose to play again or quit
- Statistics reset for each new game
- Perfect for tournament-style play!

## 🛠️ Technical Details

### Requirements
- C++ compiler (GCC, Visual Studio, etc.)
- Windows OS (uses `system("color")` and `system("cls")`)

### Compilation
```bash
g++ -o rock_paper_scissors main.cpp
```

### Key Functions
- `readNumberInRange()`: Validates user input
- `gameLogic()`: Determines round winners
- `randomNumber()`: Generates computer choices
- `printRoundsStatues()`: Manages game flow
- `gemeResults()`: Displays final statistics

## 🎯 Game Flow

1. **Setup** → Choose number of rounds
2. **Round Loop** → Make choices and see results
3. **Results** → View comprehensive statistics
4. **Replay** → Choose to play again or exit

## 🎪 Example Game Session

```
Choose a Number (1 to 10) : 3

Choose a Number: 
[1] Stone
[2] Paper
[3] Scissors
Your Choice: 1

============ Round [1] ============
Player 1 choice: Stone
Computer choice: Scissors
Round Winner: [Player1]
===================================

[Game continues for all rounds...]

              Game Over             
-----------------------------------
Game Rounds        : 3
Player 1 Won Times : 2
Computer Won Times : 1
Draw times         : 0
Final Winner       : Player 1
-----------------------------------
```

## 🎨 Fun Elements

- **Colorful Interface**: Dynamic screen colors for engagement
- **Round-by-Round Suspense**: See each result individually
- **Statistical Tracking**: Know your win rate!
- **Endless Replay**: Perfect for competitive sessions

---

**Ready to test your luck and strategy?** 🎲  
*May the best player win!* 🏆

### Insrallation
- windows
    feel free to use the pre-compiled .exe file

- linux (debian based distros)
- build
    ```bash
    sudo apt install git gcc g++ gdb
    git clone https://github.com/JoeDev000/RockPaperSisserGame game
    cd game
    g++ src/RockPaperSisser.cpp -o RockPaperSisser
- exceute
    ./RockPaperSisser


## Author
**Joe Ali**
- Software Developer & Open Source Programmer
- GitHub: [@JoeDev000](https://github.com/JoeDev000)

Copyright (c) 2025 Joe Ali