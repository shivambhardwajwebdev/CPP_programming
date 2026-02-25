## C++ Learning Notes (Till Functions, Strings, Arrays, Loops)

## Introduction to C++

C++ is a general-purpose programming language developed by Bjarne
Stroustrup. It supports procedural programming, object-oriented
programming, and low-level memory manipulation.

C++ is widely used in: - System programming - Game development -
Competitive programming - Embedded systems - Software development

Basic Structure of a C++ Program

#include<iostream>
using namespace std;
int main(){ 
    cout << “Hello World”; 
    return 0;
    }

Explanation: - #include → Used for input and output. - using namespace
std; → Allows use of standard library names without writing std::. - int
main() → Entry point of the program. - return 0; → Indicates successful
execution.

## How to Run C++ Program on Your Computer

Method 1: Using g++ Compiler

Step 1: Install Compiler

On Windows: - Install MinGW - Add its bin folder to system environment
variables

On Linux: sudo apt install g++

On Mac: brew install gcc

Step 2: Write Your Program Create a file: program.cpp

Step 3: Compile the Program g++ program.cpp -o program

Step 4: Run the Program

On Windows: program.exe

On Linux/Mac: ./program

## Variables and Data Types

Variable Declaration:

int age = 20; float price = 99.5; char grade = ‘A’; bool isPassed =
true;

Common Data Types: - int → Integer values - float → Decimal numbers -
double → Larger decimal values - char → Single character - bool → true
or false - string → Text

## Input and Output

Output: cout << “Hello”;

Input: int num; cin >> num;

Multiple Inputs: int a, b; cin >> a >> b;

## Operators

Arithmetic Operators: + Addition - Subtraction * Multiplication /
Division % Modulus

Relational Operators: == Equal to != Not equal to > Greater than < Less
than >= Greater than or equal to <= Less than or equal to

Logical Operators: && Logical AND || Logical OR ! Logical NOT

## Conditional Statements

if Statement:

if (age >= 18) { cout << “Adult”; }

if-else Statement:

if (num % 2 == 0) cout << “Even”; else cout << “Odd”;

if-else if Ladder:

if (marks >= 90) cout << “A”; else if (marks >= 75) cout << “B”; else
cout << “C”;

## Loops

For Loop:

for (int i = 0; i < 5; i++) { cout << i << endl; }

While Loop:

int i = 0; while (i < 5) { cout << i; i++; }

Do-While Loop:

int i = 0; do { cout << i; i++; } while (i < 5);

Loop Control Statements: - break → Terminates loop - continue → Skips
current iteration

## Arrays

Declaration: int arr[5] = {1, 2, 3, 4, 5};

Accessing Elements: cout << arr[0];

Taking Input in Array: for (int i = 0; i < 5; i++) { cin >> arr[i]; }

Finding Size of Array: int n = sizeof(arr) / sizeof(arr[0]);

Two-Dimensional Array: int matrix[2][2] = {{1, 2}, {3, 4}};

Strings

Using string:

#include<string>

string name = “Ritik”; cout << name.length();

Taking String Input:

string name; getline(cin, name);

Common String Functions: - .length() → Returns length - .size() → Same
as length - .append() → Adds text - .substr() → Returns substring -
.find() → Finds position

## Functions

Basic Function:

void greet() { cout << “Hello”; }

Function with Parameters:

int add(int a, int b) { return a + b; }

Function Call:

int result = add(5, 3);

Pass by Value:

void change(int x) { x = 10; }

Pass by Reference:

void change(int &x) { x = 10; }


