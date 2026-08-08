# Largest Number Finder (C Program)

A lightweight and interactive C program that continuously accepts numeric inputs from a user and tracks the largest number entered. The program instantly terminates and displays the ultimate maximum value as soon as the user enters `0` or a negative number.

## Features
* **Real-time Tracking:** Dynamically updates the maximum value with each valid user entry using an optimized leaderboard logic.
* **Smart Filtering:** Separates valid inputs from the loop termination signals (`0` or negative values).
* **Precise Formatting:** Outputs the final maximum number neatly rounded to two decimal places.

##  How It Works
1. The program initializes a `max` tracker variable at `0.0`.
2. An infinite loop runs, prompting you to `Enter a number: `.
3. If the entered number is positive and greater than the current `max`, the tracker updates.
4. If you enter `0` or any negative number, the program breaks out of the loop and prints the largest history record.

##  How to Compile and Run

### Prerequisites
Make sure you have a C compiler installed (like `gcc` or `clang`).

### Steps
1. **Save the file:** Save the code as `main.c`.
2. **Compile:** Open your terminal/command prompt and run:
   ```bash
   gcc main.c -o max_num
   ```
3. **Run the program:** Execute the compiled binary:
   ```bash
   ./max_num
   ```

##  Example Input/Output
```text
Enter a number: 12.5
Enter a number: 45.2
Enter a number: 8.9
Enter a number: 45.15
Enter a number: 0
The largest number entered was 45.20 
```
