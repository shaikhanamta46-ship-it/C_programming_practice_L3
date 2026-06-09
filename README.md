# C Conditional Statements 

This repository contains a collection of basic **C programs** demonstrating fundamental concepts of **conditional statements and control flow**. These examples are useful for beginners learning C programming.

---

##  Topics Covered

* `if` statements
* `if-else` conditions
* `else-if` ladder
* Logical operators (`&&`, `||`, `!`)
* Truthy and falsy values in C
* Ternary operator
* `switch` statements
* Simple grading system (quiz program)

---

## 🧾 Programs Included

### 1. Conditional Statements (Basic `if`)

Demonstrates how `if` works and highlights a common mistake (semicolon after `if`).

---

### 2. If-Else Example

Checks whether age is greater than 10 and prints appropriate output.

---

### 3. Non-Zero Conditions

Shows how C treats non-zero values as **true** and zero as **false**.

Examples:

* `if(1)` → true
* `if(2345)` → true
* `if(0)` → false

---

### 4. Logical Operators

Demonstrates:

* AND (`&&`)
* OR (`||`)
* NOT (`!`)

Also shows nested `if` equivalent of logical AND.

---

### 5. Else-If Ladder

Categorizes age into different groups using multiple conditions.

---

### 6. Ternary Operator

Short-hand conditional:

```c
condition ? expression_if_true : expression_if_false;
```

---

### 7. Switch Case

Takes user input and prints matching case output.

---

### 8. Grade Calculator (Quiz)

Assigns grades based on marks using `if-else if` ladder.

---

##  Common Mistake Highlighted

```c
if(age > 10);  // Wrong (semicolon ends the if)
{
    printf("This will always execute\n");
}
```

✔ Correct version:

```c
if(age > 10)
{
    printf("This executes only if condition is true\n");
}
```

---

## 🛠️ How to Compile and Run

### Compile:

```bash
gcc filename.c -o output
```

### Run:

```bash
./output
```

---

##  Learning Objective

By going through these programs, you will:

* Understand decision-making in C
* Learn how conditions affect program flow
* Avoid common beginner mistakes
* Write cleaner and more logical code

---

## Author

Created as part of C programming practice and learning.

---

##  Contribute

Feel free to:

* Improve code
* Add comments
* Add more examples

---

##  License

This project is open-source and free to use for educational purposes.
