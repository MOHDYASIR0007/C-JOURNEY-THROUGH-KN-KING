# Beaufort Wind Scale Estimator

A simple C program that estimates wind force based on wind speed in knots, using a simplified version of the Beaufort scale.

## Features
* Accepts wind speed input in knots.
* Classifies wind into six categories: Calm, Light Air, Breeze, Gale, Storm, or Hurricane.
* Uses clean and lightweight standard C logic.

## Wind Speed Classifications

| Speed (knots) | Description |
| :--- | :--- |
| Less than 1 | Calm |
| 1 – 3 | Light Air |
| 4 – 27 | Breeze |
| 28 – 47 | Gale |
| 48 – 63 | Storm |
| Above 63 | Hurricane |

## How to Run

1. **Compile the code** using a C compiler (like GCC):
   ```bash
   gcc main.c -o wind_estimator
   ```

2. **Run the executable**:
   ```bash
   ./wind_estimator
   ```

3. **Enter the wind speed** when prompted to see the description.
