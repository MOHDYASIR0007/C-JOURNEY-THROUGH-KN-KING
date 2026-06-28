# Time Converter — 24-hour to 12-hour

A command-line C program that converts time from 24-hour format to
12-hour (AM/PM) format, with basic input validation.

Built while working through *C Programming: A Modern Approach* by K.N. King — Chapter 5.

## How to Compile

```bash
make
```

Or manually:

```bash
gcc -Wall -Wextra -std=c99 -o time_converter time_converter.c
```

## How to Run

```bash
./time_converter
```

## Examples

Enter a 24-hour time: 14:35

Equivalent 12-hour time: 2:35 PM
Enter a 24-hour time: 00:00

Equivalent 12-hour time: 12:00 AM
Enter a 24-hour time: 12:00

Equivalent 12-hour time: 12:00 PM
Enter a 24-hour time: 25:00

Not a valid input as std time in 24-hour format ends at 23:59




## Edge Cases Handled

- Midnight (00:00) → 12:00 AM
- Noon (12:00) → 12:00 PM
- Invalid hours or minutes → error message

## What I Learned

Midnight was the tricky case — 00:00 has to display as 12:00 AM, not
0:00 AM, which meant handling hours == 0 separately from the general
AM block. Also learned that condition order in if-else chains matters
even when the logic technically works.

## Build Environment

- Language: C (C99)
- Compiler: GCC
- OS: [Linux]
