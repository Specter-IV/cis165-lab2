# CIS165 Lab 2: C++ Exercises

**Course section:** CIS165

This repository contains two short C++ programs, `sum.cpp` and `mpg.cpp`. I wrote both programs and ran them in **OnlineGDB**.

## Plans

**sum.cpp**
- Values needed: two integers, 50 and 100.
- Calculation: add the two numbers and store the answer in a variable named `total`.
- Display: a label ("The total value is") followed by the value of `total`.

**mpg.cpp**
- Values needed: the tank size (16 gallons) and the distance one tank can travel (312 miles).
- Calculation: miles per gallon = miles per tank / gallons in the tank, stored in a variable. Use `double` so the fractional part is kept.
- Display: a label with the result and the units, "miles per gallon".

## How to run each program in OnlineGDB

1. Go to onlinegdb.com and set the language to C++.
2. Open the source file: paste the contents of `sum.cpp` into the editor (or use the upload option to open the file).
3. Click **Run**. The output shows in the console under the editor.
4. Repeat steps 2 and 3 with `mpg.cpp`. The two programs are run separately.

## Test table

I worked out each expected result by hand before running the program.

| Program | Values used | Expected result before running | Actual output | Match or fix |
|---|---|---|---|---|
| sum.cpp, assigned values | 50 and 100 | 50 + 100 = 150 | `The total value is 150.` | Match, no fix needed |
| sum.cpp, changed values | 7 and 25 | 7 + 25 = 32 | `The total value is 32.` | Match, no fix needed |
| mpg.cpp, assigned values | 312 miles; 16 gallons | 312 / 16 = 19.5 | `This car gets 19.5 miles per gallon.` | Match, no fix needed |
| mpg.cpp, changed values | 250 miles; 12 gallons | 250 / 12 = 20.8333... (cout shows 6 significant digits) | `This car gets 20.8333 miles per gallon.` | Match, no fix needed |

All four runs matched my expectations, so no corrections or reruns were needed.

**Restored values:** After the changed-value tests, I restored the original assigned values in both files (50 and 100 in `sum.cpp`; 16 gallons and 312 miles in `mpg.cpp`), reran both programs, and got 150 and 19.5 again. The files in this repository use the original values.

## Code explanations

**sum.cpp:** The starting values 50 and 100 are stored in the integer variables `first_number` and `second_number`. The line `int total = first_number + second_number;` adds them and stores 150 in `total`. The `cout` line then prints the label and the value of `total`. I calculate into `total` before printing so the calculation and the display are separate steps, and the result is saved in a variable that I could reuse later instead of being computed only inside the print statement.

**mpg.cpp:** The formula is miles per gallon = miles per tank / gallons in the tank, so `miles_per_tank / tank_gallons`. I used `double` for all three variables so the result can hold a fractional part. If C++ divides two integer operands, it does integer division and discards the fractional part. With `int` variables, 312 / 16 would give 19 instead of 19.5, and 250 / 12 would give 20 instead of 20.8333.

Tracing my changed-value test: I set `miles_per_tank` to 250 and `tank_gallons` to 12. The program divides 250.0 by 12.0 and stores 20.8333... in `miles_per_gallon`. `cout` then prints 20.8333, because it shows six significant digits by default, followed by "miles per gallon".
