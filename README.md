# 🧮 Math Game V1.0

<p align="center">

### 🎮 A Console-Based Mathematics Quiz Built with C++

A simple and interactive mathematics game developed in C++  
to practice programming fundamentals, problem solving,  
random number generation, and game logic.

<br>

![C++](https://img.shields.io/badge/C%2B%2B-Console%20Application-blue?style=for-the-badge&logo=cplusplus&logoColor=white)
![Visual Studio](https://img.shields.io/badge/Visual%20Studio-IDE-purple?style=for-the-badge&logo=visualstudio&logoColor=white)
![Version](https://img.shields.io/badge/Version-V1.0-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

</p>

---

## 📑 Table of Contents

- [📖 About The Project](#-about-the-project)
- [🎯 Project Goal](#-project-goal)
- [✨ Features](#-features)
  - [🎮 Quiz Configuration](#-quiz-configuration)
  - [📊 Difficulty Levels](#-difficulty-levels)
  - [🧮 Mathematical Operations](#-mathematical-operations)
  - [🎲 Random Question Generation](#-random-question-generation)
  - [🧠 Answer Validation](#-answer-validation)
  - [🎨 Console Feedback](#-console-feedback)
  - [🏆 Final Result](#-final-result)
  - [✅ Pass / ❌ Fail System](#-pass--fail-system)
- [🔄 Game Flow](#-game-flow)
- [🧩 C++ Concepts Applied](#-c-concepts-applied)
- [🔧 Functions](#-functions)
- [🎲 Random Number Generation](#-random-number-generation)
- [🧮 Calculator Logic](#-calculator-logic)
- [📁 Project Structure](#-project-structure)
- [🛠️ Technologies & Tools](#️-technologies--tools)
- [🚀 Getting Started](#-getting-started)
- [🎮 How To Play](#-how-to-play)
- [🧠 What I Learned](#-what-i-learned)
- [🔮 Future Improvements](#-future-improvements)
- [📈 Project Evolution](#-project-evolution)
- [📄 License](#-license)
- [👨‍💻 Author](#-author)

---

## 📖 About The Project

**Math Game V1.0** is a console-based mathematics quiz developed using
**C++**.

The project was built as a practical application of fundamental
programming concepts, with a focus on problem solving, functions,
structures, enumerations, random number generation, conditional logic,
loops, and user input.

The player can configure the quiz, choose a difficulty level and
mathematical operation, answer randomly generated questions, and
finally review their performance.

The main idea was to turn programming fundamentals into a complete,
interactive application rather than practicing each concept separately.

---

## 🎯 Project Goal

The main goal of this project was to strengthen programming fundamentals
through a practical and interactive application.

The project combines several concepts into one complete workflow:

```text
Programming Fundamentals
          ↓
    Problem Solving
          ↓
       Game Logic
          ↓
 Random Question Generation
          ↓
    Answer Validation
          ↓
   Final Result & Score
```

---

# ✨ Features

## 🎮 Quiz Configuration

Before starting the game, the player chooses the number of questions.

The available range is:

```text
1 → 10 Questions
```

The program validates the entered value before starting the quiz.

---

## 📊 Difficulty Levels

The game provides four difficulty options:

| Option | Difficulty |
|:---:|---|
| `1` | 🟢 Easy |
| `2` | 🟡 Medium |
| `3` | 🔴 Hard |
| `4` | 🔀 Mix |

### Number Ranges

The generated numbers depend on the selected difficulty:

```text
Easy    → 1 - 10
Medium  → 10 - 50
Hard    → 50 - 100
```

When **Mix** is selected, the program randomly chooses between
the available difficulty levels.

---

## 🧮 Mathematical Operations

The game supports the four basic arithmetic operations:

| Option | Operation | Symbol |
|:---:|---|:---:|
| `1` | Addition | ➕ |
| `2` | Subtraction | ➖ |
| `3` | Multiplication | ✖️ |
| `4` | Division | ➗ |
| `5` | Mix | 🔀 |

When **Mix** is selected, the program randomly chooses one of the
four operations for each question.

---

## 🎲 Random Question Generation

Questions are generated dynamically during the game.

The program randomly determines:

- First number
- Second number
- Mathematical operation
- Difficulty level

Example:

```text
Question [ 1/5 ]

8
+
5
________

Answer: 13
```

Another question can be completely different:

```text
Question [ 2/5 ]

72
*
4
________

Answer: 288
```

This makes every game different and prevents the quiz from becoming
a fixed list of questions.

---

## 🧠 Answer Validation

After displaying each question, the player enters an answer.

The program compares the player's answer with the calculated
correct answer.

```text
Player Answer
      ↓
   Check
      ↓
 ┌────┴────┐
 ↓         ↓
✅ Right   ❌ Wrong
```

### ✅ Correct Answer

The game displays:

```text
Right Answer :-)
```

The number of correct answers is then increased.

### ❌ Wrong Answer

The game displays:

```text
Wrong Answer :-(
```

The correct answer is also displayed and the number of wrong answers
is increased.

---

## 🎨 Console Feedback

The game uses console color changes to provide visual feedback
depending on the player's answer.

This gives the console application a more interactive,
game-like experience.

---

## 🏆 Final Result

After all questions have been answered, the game displays
a summary of the player's performance.

The final result includes:

- Number of questions
- Selected difficulty
- Selected operation
- Number of right answers
- Number of wrong answers
- Pass / Fail result

Example:

```text
------------------------
      Final Result
------------------------
Number of Questions : 5
Question Level      : Easy
Operation Type      : Add
Right Answers       : 4
Wrong Answers       : 1
------------------------
```

---

## ✅ Pass / ❌ Fail System

The game evaluates the player's final performance.

The player **passes** when the number of correct answers is greater
than or equal to the number of wrong answers.

```text
Correct Answers >= Wrong Answers
            ↓
          PASS
```

Otherwise:

```text
Correct Answers < Wrong Answers
            ↓
          FAIL
```

---

# 🔄 Game Flow

The complete game process can be summarized as follows:

```text
                 🎮 START
                    │
                    ▼
           🔢 Number of Questions
                    │
                    ▼
             📊 Difficulty Level
                    │
                    ▼
             🧮 Operation Type
                    │
                    ▼
           🎲 Generate Question
                    │
                    ▼
              ❓ Display Question
                    │
                    ▼
              ⌨️ Enter Answer
                    │
                    ▼
               🧠 Check Answer
                    │
             ┌──────┴──────┐
             ▼             ▼
          ✅ Right       ❌ Wrong
             │             │
             └──────┬──────┘
                    ▼
              ➡️ Next Question
                    │
                    ▼
               🏆 Final Result
```

---

# 🧩 C++ Concepts Applied

This project applies several fundamental C++ concepts.

### 🔹 Variables & Data Types

Used to store:

- Questions
- Answers
- Scores
- Difficulty levels
- Operation types

### 🔹 Conditions

Used to determine:

- Whether an answer is correct
- Which operation should be performed
- Which difficulty range should be used
- Whether the player passes or fails

### 🔹 Loops

Used to repeat the quiz process for the selected number
of questions.

### 🔹 Functions

The game is divided into multiple functions, where each function
handles a specific responsibility.

### 🔹 Structures

Structures are used to group related game and question data.

### 🔹 Enumerations

Enums are used to represent:

- Question difficulty
- Mathematical operation

### 🔹 Random Number Generation

Used to generate different questions and randomly select
operations and difficulty levels.

### 🔹 Switch Statements

Used to handle different:

- Difficulty options
- Mathematical operations
- Game choices

---

## 🏷️ Enumerations

The project uses enumerations to make the code more readable
and organized.

### Question Level

```cpp
enum enQuestionLevel
{
    Easy = 1,
    Med = 2,
    Hard = 3,
    Mix = 4
};
```

### Operation Type

```cpp
enum enOperationType
{
    Add = 1,
    Sub = 2,
    Mult = 3,
    Div = 4,
    MixOp = 5
};
```

---

# 🔧 Functions

The application is divided into multiple functions,
with each function responsible for a specific part of the game.

Some of the main functions include:

```text
ReadHowManyQuestion()
ReadQuestionLevel()
ReadOperationType()

RandomNumber()
GetRandomOperationType()

simpleCalculator()
GenerateQuestion()
GenerateQuizzQuestion()

PrintTheQuestion()
ReadQuestionAnswer()

CorrectTheQuestionAnswer()
AskAndCorrectQuestionAnswer()

PrintQuizzResualt()

PlayMathGame()
StartGame()
```

This functional structure keeps the application organized
and makes the code easier to understand and maintain.

---

# 🎲 Random Number Generation

Random number generation is one of the main parts of the game.

It is used to generate:

- First question number
- Second question number
- Mathematical operation
- Difficulty level when using Mix

Conceptually:

```text
Selected Difficulty
        ↓
Determine Number Range
        ↓
Generate Random Numbers
        ↓
Select Operation
        ↓
Create Question
```

Because the numbers are generated dynamically, the player can
receive different questions every time the game runs.

---

# 🧮 Calculator Logic

The project contains calculator logic for the four supported
mathematical operations:

```text
➕ Addition
➖ Subtraction
✖️ Multiplication
➗ Division
```

The selected operation determines how the two generated numbers
are processed.

```text
Number 1
   │
   ▼
Operation
   │
   ▼
Number 2
   │
   ▼
Result
```

---

# 📁 Project Structure

The repository contains the main Visual Studio project files:

```text
Math-Game-V1.0
│
├── 📄 Math-Game V1.0.cpp
├── 📄 Math-Game V1.0.sln
├── 📄 Math-Game V1.0.vcxproj
├── 📄 Math-Game V1.0.vcxproj.filters
├── 📄 README.md
├── 📄 LICENSE.txt
├── 📄 .gitignore
└── 📄 .gitattributes
```

### 📄 Main Source File

```text
Math-Game V1.0.cpp
```

Contains the main game logic and the functions responsible
for generating and managing the quiz.

### 📄 Visual Studio Solution

```text
Math-Game V1.0.sln
```

Allows the project to be opened directly in Visual Studio.

### 📄 Project File

```text
Math-Game V1.0.vcxproj
```

Contains the Visual Studio project configuration.

---

# 🛠️ Technologies & Tools

| Technology / Tool | Purpose |
|---|---|
| **C++** | Main programming language |
| **Visual Studio** | Development environment |
| **C++ Standard Library** | Core programming functionality |
| **Console Application** | User interface |
| **Git** | Version control |
| **GitHub** | Source code hosting |

---

# 🚀 Getting Started

## 📋 Requirements

To run this project, you need:

- Windows
- Visual Studio
- Desktop development with C++ workload

---

## 1️⃣ Clone the Repository

Open your terminal and run:

```bash
git clone https://github.com/aimanameenmohammed/Math-Game-V1.0.git
```

Then navigate to the project:

```bash
cd Math-Game-V1.0
```

---

## 2️⃣ Open the Solution

Open:

```text
Math-Game V1.0.sln
```

using **Visual Studio**.

---

## 3️⃣ Build the Project

From Visual Studio:

```text
Build
   ↓
Build Solution
```

---

## 4️⃣ Run the Game

Press:

```text
F5
```

or click:

```text
▶ Start
```

The console window will appear and the game will start.

---

# 🎮 How To Play

## 1️⃣ Choose Number of Questions

When the game starts, select the number of questions:

```text
1 - 10
```

---

## 2️⃣ Choose Difficulty

Select one of the following:

```text
1 → Easy
2 → Medium
3 → Hard
4 → Mix
```

---

## 3️⃣ Choose Operation

Select:

```text
1 → Addition
2 → Subtraction
3 → Multiplication
4 → Division
5 → Mix
```

---

## 4️⃣ Solve The Questions

The game generates questions according to your choices.

Enter your answer and the game will immediately tell you
whether your answer is correct or incorrect.

---

## 5️⃣ View Your Final Result

After completing all questions, the game displays your:

```text
📊 Total Questions
📊 Difficulty
📊 Operation
✅ Correct Answers
❌ Wrong Answers
🏆 Pass / Fail
```

---

# 🧠 What I Learned

Building this project helped strengthen my understanding of:

- C++ programming fundamentals
- Functions
- Structures
- Enumerations
- Conditional statements
- Loops
- Switch statements
- Random number generation
- Input validation
- Problem solving
- Program organization
- Breaking a large problem into smaller functions

More importantly, the project provided practical experience
in turning programming concepts into a complete working application.

---

# 🔮 Future Improvements

Possible improvements for future versions include:

- 🏆 High Score System
- ⏱️ Time-Based Challenges
- 📊 Detailed Statistics
- 💾 Saving Game Results
- 👤 Player Profiles
- 🎚️ More Difficulty Levels
- 🧮 Additional Mathematical Operations
- 🎨 Improved Console Interface
- 📈 Player Progress Tracking

---

# 📈 Project Evolution

**Math Game V1.0** is the original C++ version of the project.

The same project idea was later revisited using **C#**, providing
an opportunity to apply the game logic using another programming
language and development environment.

The progression can be represented as:

```text
        C++ Version
             │
             ▼
      Learn Programming
             │
             ▼
       Build The Game
             │
             ▼
       Practice Logic
             │
             ▼
       Revisit The Idea
             │
             ▼
         C# Version
             │
             ▼
      Expand & Improve
```

Building the same idea with different technologies provides a useful
way to compare approaches, strengthen programming fundamentals,
and continue improving software development skills.

---

## 📄 License

This project is licensed under the **MIT License**.

You can view the full license here:

👉 [MIT License](./LICENSE)

---

# 👨‍💻 Author

## Ayman Ameen

Learning by Building 🚀

---

<p align="center">

### 🧮 Math Game V1.0

**Built with C++ ❤️**

**Learn • Build • Solve • Improve**

<br>

⭐ If you find this project useful, feel free to explore the source code.

<br>

<a href="#-math-game-v10">⬆️ Back to Top</a>

</p>
