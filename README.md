🧮 Simple Arithmetic Calculator in C
📌 What This Program Does

This program is a simple calculator written in C. It allows the user to perform basic arithmetic operations such as:

Addition (+)
Subtraction (-)
Multiplication (*)
Division (/)

The user enters an operator and two numbers, and the program calculates and displays the result.

⚙️ How the Code Works
Header File
#include <stdio.h> is used to take input and display output.
Main Function
The program starts execution from the main() function.
Variable Declaration
char operator; → stores the operation (+, -, *, /)
double num1, num2, result; → stores input numbers and result
User Input
The program asks the user to enter an operator.
Then it asks for two numbers using scanf().
Switch Case
A switch statement checks which operator the user entered.
Based on the operator, it performs the corresponding calculation:
+ → adds the numbers
- → subtracts the numbers
* → multiplies the numbers
/ → divides the numbers
Division by Zero Check
Before division, the program checks if the second number is 0.
If it is 0, it shows an error message instead of crashing.
Output
The result is displayed using printf() with formatted output (2 decimal places).
Invalid Input Handling
If the user enters an invalid operator, the program shows an error message.
📚 Summary

This program demonstrates:

Use of input/output functions (scanf, printf)
Use of switch-case statements
Basic arithmetic operations
Error handling in C programs
