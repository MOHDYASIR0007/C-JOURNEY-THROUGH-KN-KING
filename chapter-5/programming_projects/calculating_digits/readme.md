# Calculating Digits

A command-line C program that counts the number of digits in a given
integer. Supports positive and negative numbers up to 4 digits.

Built while working through *C Programming: A Modern Approach* by K.N. King — Chapter 5.

## How to Compile

```bash
gcc -Wall -Wextra -std=c99 -o calculating_digits calculating_digits.c
```

## How to Run

```bash
./calculating_digits
```

## Examples
Enter a number: 7

The number 7 has 1 digit
Enter a number: -42

The number -42 has 2 digits
Enter a number: 999

The number 999 has 3 digits
Enter a number: -9999

The number -9999 has 4 digits
Enter a number: 10000

Input out of range. Supported range: -9999 to 9999


## Edge Cases Handled

- Negative numbers → digit count excludes the minus sign
- Out of range input → explicit error message

## What I Learned

Initially forgot to handle negative numbers — the minus sign is not a
digit, so -42 has 2 digits, not 3. Fixed by adding mirrored range
checks for negatives in each condition.

## Build Environment

- Language: C (C99)
- Compiler: GCC
- OS: [Linux]