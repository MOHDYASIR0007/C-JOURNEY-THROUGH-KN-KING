# Broker Revisit

Programming projects ques3, Chapter 5 — *C Programming: A Modern Approach* by K.N. King.

Modification of the `broker.c` program from Section 5.2.

## What it does

Takes number of shares and price per share as input, then computes and compares commissions from two brokers:

- **Original broker** — commission based on total trade value, across six brackets
- **Rival broker** — flat fee plus per-share rate, with a threshold at 2000 shares

## Commission structure

**Original broker**

| Trade value | Commission |
|---|---|
| Under $2,500 | $30.00 + 1.7% of trade |
| $2,500 – $6,250 | $56.00 + 0.66% of trade |
| $6,250 – $20,000 | $76.00 + 0.34% of trade |
| $20,000 – $50,000 | $100.00 + 0.22% of trade |
| $50,000 – $500,000 | $155.00 + 0.11% of trade |
| Over $500,000 | $255.00 + 0.09% of trade |

**Rival broker**

| Shares | Commission |
|---|---|
| Fewer than 2,000 | $33.00 + $0.03 per share |
| 2,000 or more | $33.00 + $0.02 per share |

## Concepts demonstrated

- `scanf` for multiple input types (`%d`, `%f`)
- Chained `if / else if / else` conditionals
- Independent conditional blocks operating on derived values
- Float arithmetic and formatted output with `printf`

## Build and run

```bash
make
./broker_revisit
```

## Sample run

```
Enter the number of shares: 2000
Enter the price per share: 10
Commission charged by Original broker: $144.00
Commission charged by Rival's broker : $73.00
```

## Files

- `Broker_revisit.c` — source
- `Makefile` — build config