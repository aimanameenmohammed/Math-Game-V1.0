# 🧮 Math Game V1.0

<p align="center">

# 🎮 Math Game

### A Console-Based Mathematics Quiz Built with C++

A simple interactive math game designed to practice arithmetic,
problem-solving, random number generation, and fundamental C++ programming concepts.

<br>

![C++](https://img.shields.io/badge/C%2B%2B-Console%20Application-blue?style=for-the-badge&logo=cplusplus&logoColor=white)
![Visual Studio](https://img.shields.io/badge/Visual%20Studio-IDE-purple?style=for-the-badge&logo=visualstudio&logoColor=white)
![Version](https://img.shields.io/badge/Version-V1.0-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

</p>

---

## 📖 About The Project

**Math Game V1.0** is a console-based mathematics quiz developed using **C++**.

The project was created as a practical application of fundamental programming concepts,
with a focus on:

- Problem solving
- Functions
- Structures
- Enumerations
- Random number generation
- Conditional logic
- Loops
- Arrays
- User input validation
- Basic game logic

The player can choose the number of questions, difficulty level,
and mathematical operation, then solve a randomly generated quiz.

At the end of the game, the application displays a complete summary
of the player's performance.

---

# 🎯 Project Goal

The main goal of this project was to practice programming fundamentals
by building a small but complete interactive application.

Instead of solving isolated programming exercises, the concepts are combined
into a real working game.

```text
Programming Fundamentals
          │
          ▼
     Problem Solving
          │
          ▼
    Game Logic
          │
          ▼
 Random Question Generation
          │
          ▼
   Answer Validation
          │
          ▼
   Final Result & Score
```

---

# ✨ Features

## 🎮 Quiz Configuration

Before starting the quiz, the player chooses:

### 🔢 Number of Questions

The player can choose between:

```text
1 → 10 Questions
```

The program validates the input and does not accept values outside this range.

---

## 📊 Difficulty Levels

The game provides four difficulty options:

| Option | Difficulty |
|---|---|
| `1` | 🟢 Easy |
| `2` | 🟡 Medium |
| `3` | 🔴 Hard |
| `4` | 🔀 Mix |

### Difficulty Ranges

The generated numbers change according to the selected level:

```text
Easy
1 ─── 10

Medium
10 ─── 50

Hard
50 ─── 100
```

When **Mix** is selected, the game randomly chooses between:

```text
Easy
Medium
Hard
```

---

# ➕ Mathematical Operations

The game supports four basic arithmetic operations:

| Option | Operation | Symbol |
|---|---|---|
| `1` | Addition | `+` |
| `2` | Subtraction | `-` |
| `3` | Multiplication | `*` |
| `4` | Division | `/` |
| `5` | Mix | 🔀 |

When **Mix** is selected, the program randomly chooses one of the
four mathematical operations for each generated question.

---

# 🎲 Random Question Generation

Questions are generated dynamically during the game.

The program randomly generates:

- First number
- Second number
- Mathematical operation
- Difficulty

For example:

```text
Question [ 1/5 ] :

8
+
5
________

Answer: 13
```

Another question may be:

```text
Question [ 2/5 ] :

72
*
4
________

Answer: 288
```

This means each game can produce a different set of questions.

---

# 🧠 Answer Validation

After displaying each question, the player enters an answer.

The program compares:

```text
Player Answer
      │
      ▼
Correct Answer
      │
      ▼
 ┌────┴────┐
 │         │
 ▼         ▼
Correct   Wrong
```

### ✅ Correct Answer

The game displays:

```text
Right Answer :-)
```

and increases the number of correct answers.

### ❌ Wrong Answer

The game displays:

```text
Wrong Answer :-(
```

and also shows the correct answer.

The number of wrong answers is then increased.

---

# 🎨 Console Feedback

The game provides visual feedback by changing the console screen color.

### Correct Answer

The screen changes to indicate a successful answer.

### Wrong Answer

The screen changes to indicate an incorrect answer.

This gives the console application a more interactive game-like experience.

---

# 🏆 Final Result

After all questions have been answered, the game displays a complete summary.

The final result includes:

```text
Final Result
----------------------

Number of Questions
Question Level
Operation Type
Number of Right Answers
Number of Wrong Answers
Pass / Fail
```

Example:

```text
----------------------
 Final Result Pass :-)
----------------------
 Number of Questions : 5
 Question Level : EasyLevel
 Operation type: Add
 Number of Right Answers : 4
 Number of Wrong Answers : 1
------------------------
```

---

# ✅ Pass / ❌ Fail System

The game determines the final result based on the player's performance.

The player passes when:

```text
Correct Answers >= Wrong Answers
```

Otherwise:

```text
Correct Answers < Wrong Answers
```

the final result is:

```text
Fail :-(
```

---

# 🔄 Game Flow

The complete game works through the following process:

```text
             🎮 START
                │
                ▼
       🔢 Number of Questions
                │
                ▼
          📊 Difficulty
                │
                ▼
          ➕ Operation
                │
                ▼
       🎲 Generate Questions
                │
                ▼
          ❓ Ask Question
                │
                ▼
          ⌨️ Player Answer
                │
                ▼
        🧠 Check Answer
                │
        ┌───────┴───────┐
        ▼               ▼
      ✅ Right        ❌ Wrong
        │               │
        └───────┬───────┘
                ▼
       ➡️ Next Question
                │
                ▼
        🏆 Final Result
```

---

# 🧩 C++ Concepts Applied

This project focuses on fundamental C++ programming concepts.

## 🔹 Enumerations

The project uses enums to represent:

### Question Difficulty

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

This makes the program logic more readable and organized.

---

## 🔹 Structures

The project uses structures to organize related data.

### Question Structure

```cpp
struct stQuestion
```

It contains information such as:

- First number
- Second number
- Question level
- Operation type
- Correct answer
- Player answer
- Answer result

### Quiz Structure

```cpp
struct stQuizz
```

It contains:

- Question list
- Number of questions
- Difficulty level
- Operation type
- Number of correct answers
- Number of wrong answers
- Pass/Fail status

---

# 🔧 Functions

The project is divided into multiple functions,
with each function responsible for a specific task.

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

This separation helps keep the program organized and easier to understand.

---

# 🎲 Random Number Generation

The project uses random number generation to create different questions.

The random number function generates a value between a specified range:

```text
From ───────────── To
```

This is used for both:

- Generating question numbers
- Selecting random operations
- Selecting random difficulty levels when Mix is selected

---

# 🧮 Calculator Logic

The project contains a simple calculator function responsible for performing:

```text
Addition
Subtraction
Multiplication
Division
```

Conceptually:

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

# 🏗️ Project Structure

The repository contains the following main files:

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

The main application logic is contained in:

```text
Math-Game V1.0.cpp
```

The repository also includes the Visual Studio solution and project files required
to build the application. 

---

# 🛠️ Technologies & Tools

| Technology / Tool | Usage |
|---|---|
| **C++** | Main programming language |
| **Visual Studio** | Development environment |
| **C++ Standard Library** | Input, strings, mathematical and utility functionality |
| **Console Application** | User interface |
| **Git** | Version control |
| **GitHub** | Source code hosting |

---

# 🚀 Getting Started

## 📋 Requirements

To run this project, you need:

- Windows
- Visual Studio
- C++ Desktop Development workload

---

## 1️⃣ Clone the Repository

```bash
git clone https://github.com/aimanameenmohammed/Math-Game-V1.0.git
```

Then:

```bash
cd Math-Game-V1.0
```

---

## 2️⃣ Open the Solution

Open:

```text
Math-Game V1.0.sln
```

using Visual Studio.

---

## 3️⃣ Build the Project

In Visual Studio:

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

or:

```text
▶ Start
```

The console window will appear and the game will begin.

---

# 🎮 How To Play

When the game starts:

### Step 1 — Choose Questions

Enter the number of questions:

```text
How many Question do you want to answer:
```

Choose a number from:

```text
1 - 10
```

---

### Step 2 — Choose Difficulty

Enter:

```text
1 → Easy
2 → Medium
3 → Hard
4 → Mix
```

---

### Step 3 — Choose Operation

Enter:

```text
1 → Addition
2 → Subtraction
3 → Multiplication
4 → Division
5 → Mix
```

---

### Step 4 — Solve

The game generates the questions and waits for your answer.

---

### Step 5 — Review Your Result

After completing all questions, the game displays:

- Total questions
- Difficulty
- Operation
- Correct answers
- Wrong answers
- Pass / Fail

---

# 🧠 What I Learned From This Project

Building this project helped me strengthen my understanding of:

### Programming Fundamentals

- Variables
- Data types
- Conditions
- Loops
- Functions
- Arrays

### C++ Fundamentals

- `struct`
- `enum`
- References
- Functions returning values
- Switch statements
- Random number generation
- Standard library usage

### Problem Solving

The project required breaking the game into smaller problems:

```text
How do I generate a question?
        ↓
How do I select its difficulty?
        ↓
How do I select its operation?
        ↓
How do I calculate the answer?
        ↓
How do I compare the player's answer?
        ↓
How do I calculate the final result?
```

This is where the project became more than a simple calculator —
it became a complete programming exercise.

---

# 🔮 Future Improvements

Possible future improvements for the project include:

- 🎨 More advanced console UI
- ⏱️ Time-based challenges
- 🏆 High-score system
- 📊 Performance statistics
- 💾 Saving game results
- 👤 Player profiles
- 🎚️ More difficulty levels
- 🧮 More mathematical operations
- 📈 Progress tracking

---

# 📚 Learning Philosophy

This project represents an important step in learning programming:

```text
Learn the Concept
       ↓
Understand the Logic
       ↓
Solve Small Problems
       ↓
Build a Project
       ↓
Find Bugs
       ↓
Fix Them
       ↓
Improve
       ↓
Build Something Bigger
```

The purpose was not just to make the game work,
but to understand **why the code works** and how individual programming concepts
can be combined into a complete application.

---

# 🏆 Project Highlights

```text
🎮 Interactive Console Game
        +
🎲 Random Questions
        +
📊 Multiple Difficulty Levels
        +
➕ Four Arithmetic Operations
        +
🔀 Mixed Difficulty & Operations
        +
🧠 Automatic Answer Checking
        +
🎨 Visual Console Feedback
        +
🏆 Final Performance Result
```

---

# 📈 Project Evolution

**Math Game V1.0** represents the C++ version of the project.

The project was later developed further as a **C# version**, providing an opportunity
to revisit the same core idea using a different programming language and development
environment.

This progression reflects an important part of learning:

```text
C++ Console Application
          │
          ▼
      Learn Logic
          │
          ▼
      Build Again
          │
          ▼
    Explore C# / .NET
          │
          ▼
     Improve Skills
```

---

# 📄 License

This project is licensed under the **MIT License**.

See the `LICENSE.txt` file for more information.

---

# 👨‍💻 Author

**Ayman Ameen**

Learning by building, practicing, and continuously improving.

---

<p align="center">

## 🧮 Math Game V1.0

### Built with C++ ❤️

**Learn • Build • Solve • Improve**

<br>

⭐ If you find this project useful, feel free to explore the code and learn from it.

<br>

<a href="#-math-game-v10">⬆️ Back to Top</a>

</p>
