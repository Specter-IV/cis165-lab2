# AI Reflection

**Tools used:** I used Claude after I had already written and run both programs in OnlineGDB. I used it to review my code against the lab requirements and to help draft the README and this reflection from my finished code and my test runs.

**One decision:** I asked Claude to check `sum.cpp` and `mpg.cpp` against the lab rules. It pointed out that my variable names did not follow the naming rule: variables should be lowercase with underscores, and ALL_CAPS is only for named constants. My names like `FIRST_NUMBER` and `MilesPerGallon` broke that rule, so I accepted the suggestion and renamed them to `first_number`, `second_number`, `tank_gallons`, `miles_per_tank` and `miles_per_gallon`. I kept my original logic of calculating into a variable first and then printing it.

**Verification:** I worked out each expected answer by hand before running the code, then compared it with the output. For `mpg.cpp`, I expected 312 / 16 = 19.5 and the program printed 19.5. For my changed values (250 miles, 12 gallons), I expected 20.8333... and got 20.8333. That showed `double` keeps the fractional part, and that `cout` rounds to six significant digits. I also reran both programs after restoring the original values.

**Learning:** I can now explain how values move from variables through a calculation into a result variable and then to `cout`, and why integer division would drop the decimal part. I still need to practice controlling how many decimal places are printed.
