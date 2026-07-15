# Area of a Triangle in C

A simple C program that calculates the **area of a triangle** using the base and height provided by the user. This beginner-friendly project helps you understand user input, arithmetic operations, and basic program structure in C.

## 📌 About

This program:

* Accepts the base of the triangle.
* Accepts the height of the triangle.
* Calculates the area using the standard formula.
* Displays the result to the user.

## 📂 Project Structure

```text
Area_of_a_Triangle/
├── triangle.c
└── README.md
```

## 💻 Sample Code

```c
#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Area of the Triangle = %.2f", area);

    return 0;
}
```

## 🚀 How to Compile and Run

### Using GCC

Compile the program:

```bash
gcc triangle.c -o triangle
```

Run the program:

**Linux/macOS**

```bash
./triangle
```

**Windows**

```bash
triangle.exe
```

## 📤 Sample Output

```text
Enter the base of the triangle: 10
Enter the height of the triangle: 8

Area of the Triangle = 40.00
```

## 📐 Formula Used

The program calculates the area of a triangle using its base and height.

## 🛠 Requirements

* GCC Compiler or any C Compiler
* Terminal / Command Prompt
* Basic knowledge of C programming

## 📚 Concepts Used

* Variables and Data Types
* User Input (`scanf`)
* Output (`printf`)
* Arithmetic Operations
* Mathematical Formulas

## 🎯 Learning Objectives

By completing this project, you will learn:

* How to take input from users
* How to perform calculations in C
* Working with floating-point numbers
* Displaying formatted output

## 🔮 Future Enhancements

* Calculate area using Heron's Formula
* Support different triangle types
* Add input validation
* Create a geometry calculator with multiple shapes

## 📄 License

This project is open-source and available under the MIT License.

---

⭐ If you found this project helpful, consider giving it a star on GitHub!
