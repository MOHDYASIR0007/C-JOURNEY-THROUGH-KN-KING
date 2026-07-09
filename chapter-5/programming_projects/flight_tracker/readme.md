# Flight Tracker

A C program (K.N. King, Chapter 5) that finds the closest scheduled flight departure to a user-entered 24-hour time.

## Problem

Given a fixed daily flight schedule of 12 flights, the program accepts a time input (24-hour format, `HH:MM`) and prints the departure and arrival time of the flight whose departure is closest to the entered time.

## Flight Schedule

| Departure   | Arrival     |
|-------------|-------------|
| 8:00 a.m.   | 10:16 a.m.  |
| 9:43 a.m.   | 11:52 a.m.  |
| 11:19 a.m.  | 1:31 p.m.   |
| 12:47 p.m.  | 3:00 p.m.   |
| 2:00 p.m.   | 4:08 p.m.   |
| 3:45 p.m.   | 5:55 p.m.   |
| 7:00 p.m.   | 9:20 p.m.   |
| 9:45 p.m.   | 11:58 p.m.  |

## Build & Run

make        # compiles the program
make run    # builds (if needed) and runs it
make clean  # removes the compiled binary

## Example

Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

## Test Cases

| Input   | Expected Output                                                  |
|---------|-------------------------------------------------------------------|
| `08:00` | Closest departure time is 8:00 a.m., arriving at 10:16 a.m.       |
| `13:15` | Closest departure time is 12:47 p.m., arriving at 3:00 p.m.       |
| `21:45` | Closest departure time is 9:45 p.m., arriving at 11:58 p.m.       |
| `00:00` | Closest departure time is 8:00 a.m., arriving at 10:16 a.m.       |
| `23:59` | Closest departure time is 9:45 p.m., arriving at 11:58 p.m.       |
| `06:00` | Closest departure time is 8:00 a.m., arriving at 10:16 a.m.       |
| `08:52` | Closest departure time is 9:43 a.m., arriving at 11:52 a.m.       |
| `10:30` | Closest departure time is 9:43 a.m., arriving at 11:52 a.m.       |
| `10:31` | Closest departure time is 9:43 a.m., arriving at 11:52 a.m. (tie at midpoint, resolved to earlier flight) |
| `11:40` | Closest departure time is 11:19 a.m., arriving at 1:31 p.m.       |
| `12:00` | Closest departure time is 12:47 p.m., arriving at 3:00 p.m.       |
| `09:05` | Closest departure time is 9:43 a.m., arriving at 11:52 a.m.       |
| `14:00` | Closest departure time is 2:00 p.m., arriving at 4:08 p.m.        |

## Notes

- All 8 comparison boundaries are computed as exact midpoints between adjacent departure times, not guessed.
- Ties (input falls exactly on a midpoint, e.g. `10:31`) resolve to the earlier flight, by design of the `<=` cutoff placement — not an accident.
- Invalid input (`hours >= 24 || hours < 0 || minutes >= 60 || minutes < 0`) is rejected before any comparison logic runs.
- Input parsing (`scanf` return value, malformed non-numeric input) is intentionally not hardened, since this exercise is scoped to Chapter 5 (loops/control flow), before arrays or robust input validation are covered.




