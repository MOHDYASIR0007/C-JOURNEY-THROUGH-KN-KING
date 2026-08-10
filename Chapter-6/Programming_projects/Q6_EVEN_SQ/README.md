# Even Squares Generator (`Evensq.c`)

A C program that finds and prints all even squares between 1 and a user-specified integer $n$. This project provides a clean solution variant for the Loops chapter programming projects in K. N. King's *C Programming: A Modern Approach*.

## Problem Description
The program prompts the user to enter an integer $n$. It then calculates and prints the squares of all even numbers, ensuring that the **resulting square itself** does not exceed $n$ (i.e., $\text{square} \le n$).

---

##  Code Logic & Implementation
The program uses a conditional `for` loop to check boundaries efficiently before executing its body:



### Key Highlights
* **Boundary Condition:** The loop condition `i * i <= n` guarantees that the computed square never exceeds the user's input limit.
* **Parity Filter:** The statement `even = i % 2` identifies and filters out odd bases so that only squares of even integers are displayed.

---

##  Test Cases & Expected Outputs

| Input ($n$) | Logic Checked | Expected Output |
| :--- | :--- | :--- |
| `100` | Standard Perfect Square Limit | `4`<br>`16`<br>`36`<br>`64`<br>`100` |
| `35` | Non-Square Upper Limit | `4`<br>`16` *(Stops before 36)* |
| `4` | Minimum Valid Output Boundary | `4` |
| `3` | Value Below First Even Square | *(No output / Blank)* |
| `0` or `-5` | Zero & Negative Edge Cases | *(No output / Blank)* |

---

##  How to Compile and Run

### Prerequisites
You need a standard C compiler installed on your local environment (such as `gcc` or `clang`).

### Steps
1. **Compile the program:**
   ```bash
   gcc Evensq.c -o Evensq
   ```
2. **Execute the compiled binary:**
   * **Linux/macOS:**
     ```bash
     ./Evensq
     ```
   * **Windows:**
     ```cmd
     Evensq.exe
     ```
