# Broker's Commission Calculator (`loop_broker.c`)

This project provides a C program that calculates stock broker commissions based on transaction trade values. It extends the basic `broker.c` program from Chapter 5 of *C Programming: A Modern Approach* by K. N. King by adding an interactive loop that allows repeated calculations until the user enters `0`.

---

## Problem Statement

> **QUESTION 4 (Chapter 6):**  
> Add a loop to the `broker.c` program of Section 5.2 so that the user can enter more than one trade and the program will calculate the commission on each. The program should terminate when the user enters `0` as the trade value.

---

## Commission Rate Structure

The commission rate depends on the total trade value according to the following bracketed scale, with a **minimum commission enforced at $39.00**:

| Trade Value Range | Base Fee | Commission Rate |
| :--- | :--- | :--- |
| **Under $2,500.00** | $30.00 | 1.70% (`0.017`) |
| **$2,500.00 – $6,249.99** | $56.00 | 0.66% (`0.0066`) |
| **$6,250.00 – $19,999.99** | $76.00 | 0.34% (`0.0034`) |
| **$20,000.00 – $49,999.99** | $100.00 | 0.22% (`0.0022`) |
| **$50,000.00 – $499,999.99** | $155.00 | 0.11% (`0.0011`) |
| **$500,000.00 and above** | $255.00 | 0.09% (`0.0009`) |

*Note: If the computed commission is less than $39.00, it is automatically set to $39.00.*

---


How to Compile & Run

Using GCC Compiler
Compile:

Bash
gcc loop_broker.c -o loop_broker
Execute:

Bash
./loop_broker


#### Detailed Case Analysis:
1. **$500.00 Trade:** Calculated fee is `$30.00 + (0.017 * 500) = $38.50`. Since `$38.50 < $39.00`, the minimum fee threshold enforces **$39.00**.
2. **$2,000.00 Trade:** `$30.00 + (0.017 * 2000) = $64.00`.
3. **$5,000.00 Trade:** `$56.00 + (0.0066 * 5000) = $89.00`.
4. **$15,000.00 Trade:** `$76.00 + (0.0034 * 15000) = $127.00`.
5. **$100,000.00 Trade:** `$155.00 + (0.0011 * 100000) = $265.00`.
6. **$1,000,000.00 Trade:** `$255.00 + (0.0009 * 1000000) = $1155.00`.
7. **$0:** Program exits gracefully.

---

##  Code Explanation

1. **Infinite Loop (`for (;;)`):** Keeps prompting the user repeatedly without requiring pre-defined iteration limits.
2. **Termination (`if (value != 0) ... else break;`):** When input value is `0`, the `break` statement immediately exits the loop and reaches `return 0;`.
3. **Cascading `if-else` Ladder:** Evaluates trade values strictly in ascending order to map trade volume to the appropriate commission bracket.
4. **Minimum Fee Check (`if (commission < 39.00f)`):** Guarantees that small trades meet the mandatory broker baseline charge of $39.00.
