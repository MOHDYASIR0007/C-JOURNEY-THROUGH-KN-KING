# Euclid's Algorithm for GCD

An efficient C program that computes the **Greatest Common Divisor (GCD)** of two integers using an optimized variation of Euclid's subtraction and modulo method.

##  File Name
`Q2_GCD.c`

##  Features
* **Zero-Crash Protection:** Uses early-exit conditional branching (`if (remainder == 0)`) to completely avoid any risk of arithmetic division-by-zero exceptions.
* **Instant Calculation:** Implements the modern remainder-based implementation of Euclid's algorithm for sub-linear time execution.
* **Interactive UI:** Simple console prompts that take dual inputs natively using `scanf`.

##  How It Works (The Core Logic)
The algorithm relies on the principle that the greatest common divisor of two numbers does not change if the larger number is replaced by its remainder when divided by the smaller number:
```
\[\text{GCD}(m, n) = \text{GCD}(n, m \pmod n)\]
```
Inside the loop, the program continuously computes the remainder:

1. If the remainder becomes `0`, it breaks early because the current divisor `n` is the ultimate winner.
2. If it is not `0`, it shifts the variables down the line (`m = n` and `n = remainder`) and performs a look-ahead optimization check before looping again.


##  How to Compile and Run

### Prerequisites
Ensure you have a C compiler like `gcc` or `clang` installed on your machine.

### Execution Steps
1. Open your terminal or command prompt in the directory containing `Q2_GCD.c`.
2. Compile the code using the following command:
   ```bash
   gcc Q2_GCD.c -o Q2_GCD
   ```
3. Run the compiled executable:
   * **Linux/macOS:** `./Q2_GCD`
   * **Windows:** `Q2_GCD.exe`

##  Example Input & Output
```text
Enter two integrs: 270 192
Greastest common divisor: 6
```
