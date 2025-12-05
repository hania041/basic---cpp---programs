# 🎯 Random Number Guessing Game (C++)

This is a simple **single-player number guessing game** in C++.  
The computer randomly picks a number between **1 and 100**, and the player keeps guessing until they get it right!

---

## 🕹️ How the Game Works

1. The program generates a **random number** using `rand()` and `time(0)`.
2. You guess a number between **1–100**.
3. The program tells you if your guess is:
   - 🔼 Too high  
   - 🔽 Too low  
4. When you guess correctly, it shows:
   - ✔ The secret number  
   - ✔ Total number of attempts  

---

## 🧠 Concepts Used

- `srand(time(0))` — seeding the random number generator  
- `rand() % 100 + 1` — generating numbers from 1 to 100  
- `do-while` loop  
- Conditionals (`if`, `else if`)  
- User input/output  

---

## 🚀 How to Run

1. Save the code in a file like `random_guess.cpp`.
2. Compile it:
   ```bash
   g++ random_guess.cpp -o random_guess
