Rock Paper Scissors Game (C++)

A console-based Rock Paper Scissors game written in C++.
The player competes against the computer in multiple rounds, and the program keeps track of wins, losses, and draws.

✅ Beginner-friendly project to practice C++ fundamentals, enums, structs, loops, and random number generation.

🚀 Features:

Choose the number of rounds (1–10).
Player selects between Stone, Paper, or Scissors.
Computer makes random choices.
Immediate feedback for each round (winner/loser/draw).
Score tracking across multiple rounds.
Final game results with winner declaration.
Option to replay multiple times.

📂 Project Structure:
rock-paper-scissors-game/
 ┣ main.cpp   # Source code of the game
 ┗ README.md  # Project documentation

🛠️ Technologies Used:

Language: C++

Libraries:

<iostream> for input/output
<cstdlib> and <ctime> for random number generation and seeding

▶️ How to Run:

Clone the repository or copy the main.cpp file.
Compile the code using any C++ compiler:
g++ main.cpp -o rock_paper_scissors


Run the program:

./rock_paper_scissors

🎮 Example Interaction:


<img width="960" height="540" alt="example_output" src="https://github.com/user-attachments/assets/0ff61bc5-88db-42d4-b35c-68a38088a65b" />

How Many Rounds 1 to 10? 
3

Round [1] begins:
Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? 1
Player1  Choice: Stone
Computer Choice: Paper
Round Winner   : [Computer]

Round [2] begins:
Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? 3
Player1  Choice: Scissors
Computer Choice: Paper
Round Winner   : [Player1]

Round [3] begins:
Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? 2
Player1  Choice: Paper
Computer Choice: Paper
Round Winner   : [No Winner (Draw)]

________________________ [ Game Results ] _____________________
Game Rounds       : 3
Player1 Won Times : 1
Computer Won Times: 1
Draw Times        : 1
Final Winner      : No Winner (Draw)

💡 Future Improvements:

Add support for multiplayer mode.
Save match history to a file.
Add difficulty levels (e.g., "Smart Computer").
Introduce a scoring system with ranks.

👨‍💻 Author:

Developed with by Mahmoud Elabsy.
