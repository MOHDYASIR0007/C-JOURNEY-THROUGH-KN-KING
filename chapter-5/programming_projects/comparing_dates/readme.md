# comparing_dates

A C program that reads two dates in `mm/dd/yy` format, validates them
(including real days-per-month limits and leap years), and prints which
date is earlier or reports that they're the same.

## What changed from the previous version

- Rejects `dd > 30` for April, June, September, November.
- Rejects Feb 28+ in a non-leap year (`yy % 4 != 0`).
- Rejects Feb 29+ in a leap year (`yy % 4 == 0`).
- All other range/comparison logic is unchanged.

## Century leap-year assumption: resolved by assuming `yy` means 2000+yy

The full Gregorian leap-year rule is:

```
leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)
```

The century exception (`% 100 != 0`) only matters for years that are
divisible by 100. **If `yy` is always assumed to fall in 2000–2099** (i.e.
`yy` is shorthand for `2000 + yy`), the only century year in that entire
range is `00` → 2000 — and 2000 **is** divisible by 400, so it's a leap
year under the full rule anyway. That means there is no century year in
2000–2099 that the century exception would actually exclude, so the
simple `yy % 4 == 0` check already agrees with the full Gregorian rule for
every value 00–99 under this assumption. No code change was needed here —
only the assumption needed to be stated.

Verified: `yy=00` (2000, leap), `yy=04` (2004, leap), and `yy=01` (2001,
not leap) all match real-calendar behavior with the existing code.

**This assumption breaks in 2100.** `2100 % 4 == 0` but 2100 is not a
real leap year (divisible by 100, not by 400). This program can't reach
2100 under the "2000s only" assumption, so it doesn't matter here — but if
this logic is ever reused with 4-digit years or years past 2099, the
shortcut stops being valid and the full century-exception check would be
required.

## Directory / file naming

- File: `comparing_dates.c`
- Directory: `comparing_dates`

## Compile

Your command as written mixes syntax:

```
gcc filename.c -o directoryname
./filename
```

`gcc source.c -o output` is correct — but `-o directoryname` names the
**executable**, not a folder, and `.\` is Windows PowerShell/cmd syntax
(won't work in a Linux/macOS shell, which uses `./`).

Correct, consistent version:

```bash
gcc comparing_dates.c -o comparing_dates
```

Run it:

- Linux/macOS: `./comparing_dates`
- Windows (PowerShell or cmd): `.\comparing_dates.exe`

## Tested examples (actual compiled output, gcc 13, -Wall, no warnings)

### Leap year: Feb 29 in a leap year (24) — valid
```
Input:
2/29/24
1/1/24

Output:
1/1/24 is earlier than 2/29/24
```

### Leap year: Feb 29 in a non-leap year (23) — rejected
```
Input:
2/29/23
1/1/23

Output:
The date input exceeds the range of days available in a month of february
```

### Leap year: Feb 30 even in a leap year — rejected
```
Input:
2/30/24
1/1/24

Output:
The date input exceeds the range of days available in a month of february in a leap year.
```

### 30-day month: April 31 — rejected
```
Input:
4/31/24
1/1/24

Output:
The date input exceeds the date range available in a month.
```

### 30-day month: April 30 — accepted
```
Input:
4/30/24
1/1/24

Output:
1/1/24 is earlier than 4/30/24
```

### Century leap-year bug, demonstrated (NOT fixed)
```
Input:
2/29/00
1/1/00

Output:
1/1/00 is earlier than 2/29/00
```
`00` is treated as a leap year purely because `00 % 4 == 0`. Whether `00`
represents 1900 (not a leap year) or 2000 (a leap year) is unknowable from
a 2-digit year as the author did'nt mentioned clearly, so this program cannot get it right as currently designed and assumes that the year entered as  2-digit is >=2000 .

### Ordinary comparison still works
```
Input:
6/15/24
6/20/24

Output:
6/15/24 is earlier than 6/20/24
```

## Still not handled (untested, separate from the above)

- No 4-digit year support (see century limitation above).
- No parse-error handling if input doesn't match `mm/dd/yy` format exactly
  (e.g. missing slashes) — `scanf` will silently misbehave, not error out.
- No range sanity check on the year value itself.
