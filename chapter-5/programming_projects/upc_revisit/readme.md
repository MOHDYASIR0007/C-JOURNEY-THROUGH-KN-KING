/*
# UPC Validator

A simple, robust C program that validates 12-digit Universal Product Codes (UPC) 
using the standard UPC check-digit algorithm outlined in Chapter 4 of 
"C Programming: A Modern Approach".

## How the Validation Works
1. Adds the 1st, 3rd, 5th, 7th, 9th, and 11th digits together (first_sum).
2. Adds the 2nd, 4th, 6th, 8th, and 10th digits together (second_sum).
3. Multiplies first_sum by 3 and adds it to second_sum to get the total.
4. Subtracts 1 from total.
5. Computes the remainder when the adjusted total is divided by 10.
6. Subtracts this remainder from 9 to determine the final calculated check digit.
7. Compares the result with the 12th digit (j6) entered by the user.

## Compilation
   gcc -o upc_revisit upc_revisit.c

## Execution
   ./upc_revisit
*/