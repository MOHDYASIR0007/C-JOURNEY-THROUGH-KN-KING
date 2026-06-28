# Tax Calculator in C

A simple Command Line Interface (CLI) program written in C that calculates the amount of taxable income due based on progressive tax brackets.

## Features

- Prompts the user to enter their taxable income.
- Uses standard progressive tax brackets to compute the tax due.
- Outputs the final tax amount formatted to two decimal places.

## Tax Brackets Implemented

| Income Range | Base Tax | Tax Rate on Excess |
| :--- | :--- | :--- |
| Under \$750 | \$0.00 | 1% of income |
| \$750 - \$2,249.99 | \$7.50 | 2% of amount over \$750 |
| \$2,250 - \$3,749.99 | \$37.50 | 3% of amount over \$2,250 |
| \$3,750 - \$5,250.00 | \$82.50 | 4% of amount over \$3,750 |
| \$5,250 - \$6,999.99 | \$142.50 | 5% of amount over \$5,250 |
| \$7,000 and above | \$230.00 | 6% of amount over \$7,000 |

## How to Run

### Prerequisites
Make sure you have a C compiler installed on your system (such as `gcc` or `clang`).

### Compilation
Open your terminal and run the following command to compile the program:

```bash
gcc -o tax_calculator main.c
```

### Execution
Run the compiled executable:

```bash
./tax_calculator
```

## Example Usage

```text
Enter amount of taxable income:\$ 4500
Amount of tax due: \$112.50
```