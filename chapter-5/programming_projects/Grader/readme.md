# Grader

A simple C program that converts a numerical grade (0–100) into a letter grade (A–F).

## Files

- `Grader.c` — source code

## Compiling

```bash
gcc Grader.c -o Grader
```

## Running

```bash
./Grader
```

You'll be prompted to enter a numerical grade:

```
Enter numerical grade: 87
Letter grade: B
```

## Grading Scale

| Range   | Letter |
|---------|--------|
| 90–100  | A      |
| 80–89   | B      |
| 70–79   | C      |
| 60–69   | D      |
| 0–59    | F      |

Any input outside 0–100 prints an error message.

Verified against edge cases: 100, 95, 87, 73, 60, 0, -1, 101 — all resolve correctly.