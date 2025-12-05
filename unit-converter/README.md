# 🔄 Unit Conversion Program (C++)

This is a simple **unit converter** written in C++.  
The program allows the user to convert different units such as length, volume, distance, weight, and data size.

---

## 📋 Available Conversions

| Choice | Conversion                | Formula                      |
|--------|----------------------------|------------------------------|
| 1      | Inches ➝ Centimeters      | cm = inches × 2.54           |
| 2      | Gallons ➝ Liters          | liters = gallons × 3.785     |
| 3      | Miles ➝ Kilometers        | km = miles × 1.609           |
| 4      | Pounds ➝ Kilograms        | kg = pounds × 0.4536         |
| 5      | MB ➝ KB                   | KB = MB × 1024               |

---

## 🕹️ How It Works

1. The program shows a menu of **5 conversion options**.  
2. You enter a choice (1–5).  
3. You enter the value you want to convert.  
4. The program calculates and prints the converted result using a `switch` statement.

---

## 🧠 Concepts Used

- `switch` statement  
- User input with `cin`  
- Basic arithmetic operations  
- Simple console-based UI  

---

## 🚀 How to Run

1. Save the code in a file like `unit_converter.cpp`
2. Compile it:
   ```bash
   g++ unit_converter.cpp -o unit_converter
