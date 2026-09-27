OOP with C++ – Unit III: Polymorphism
📘 About This Repository

This repository contains C++ programs and practical examples based on Unit III – Polymorphism of Object-Oriented Programming with C++.

The programs demonstrate compile-time and run-time polymorphism using function overloading, operator overloading, virtual functions, pure virtual functions, abstract classes, pointers to base classes, and virtual destructors.

👩‍🎓 Student Details
Student Name: Prachi Tayde
Course: Object-Oriented Programming with C++
Unit: Unit III – Polymorphism
Year: Second Year Engineering
Branch: Artificial Intelligence and Data Science
Programming Language: C++
Standard: C++17 or later
🎯 Objective

The main objective of this unit is to understand Polymorphism, where the same function or operator can behave differently depending on the object or operands involved.

📚 Topics Covered
1. Introduction to Polymorphism

Polymorphism means "many forms."

It allows the same function, operator, or interface to perform different operations depending on the situation.

2. Types of Polymorphism

The two major types are:

Compile-Time Polymorphism

The function to be executed is determined during compilation.

Examples:

Function Overloading
Operator Overloading
Run-Time Polymorphism

The function to be executed is determined during program execution.

Examples:

Virtual Functions
Function Overriding
Base Class Pointers
➕ 3. Operator Overloading

Operator overloading allows existing C++ operators to be given a special meaning for user-defined objects.

Concept of Overloading

An operator or function can perform different operations depending on the operands or parameters.

🔹 4. Unary Operator Overloading

Unary operators work on one operand.

Examples:

++
--
-
!


Example:

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    void operator++()
    {
        ++value;
    }
};

🔸 5. Binary Operator Overloading

Binary operators work on two operands.

Examples:

+
-
*
/
<
>
==


Example:

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    Number operator+(const Number& n)
    {
        return Number(value + n.value);
    }
};

🔄 6. Function Overloading

Function overloading allows multiple functions to have the same name but different parameters.

Example:

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};
