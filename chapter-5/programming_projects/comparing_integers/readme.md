# comparing_integers

A C program that takes four integers as input and determines the largest
and smallest values among them using a tournament-style comparison
(each new value is checked against the current running largest/smallest).

## Files

- `compare_integers.c` — source code
- `Makefile` — build automation
- `README.md` — this file

## Build

```bash
make
```

This compiles the program with `-Wall -Wextra` enabled and produces an
executable named `comparing_integers`.

## Run

```bash
./comparing_integers
```

or, using the Makefile shortcut:

```bash
make run
```

You will be prompted to enter four integers separated by spaces:

```
Enter four integers: 5 3 8 1
Largest: 8
Smallest: 1
```

## Clean

Remove the compiled binary:

```bash
make clean
```

## How it works

1. Compare `a` and `b` to set an initial `largest` and `smallest`.
2. Compare `c` against the running `largest` and `smallest`, updating
   whichever it beats.
3. Repeat step 2 for `d`.

This requires only a constant number of comparisons regardless of input
order, and avoids evaluating all 24 possible orderings of four values.

## Requirements

- GCC (or any C11-compatible compiler)
- `make`