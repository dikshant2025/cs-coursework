# Intro Programming Coursework (C++ and Python)

Early projects from my intro programming courses.

**C++ (`cpp/`)**
- `Project_3.cpp`: temperature converter (C, F, K) that reads `temp_input.txt` and writes `temp_output.txt`. *Revised:* it now loops over every line, and I fixed an F→K bug where the result was overwritten by the F→C formula.
- `octal_converter.cpp`: decimal ↔ octal converter using integer math and a menu loop.
- `hypotenuse.cpp`: Pythagorean theorem with `<cmath>`.

**Python (`python/`)**
- `fast_food_order.py`: menu ordering with `enumerate` and a `while True` input loop.
- `weight_conversion.py`: pounds/kilograms converter.

```bash
cd cpp && clang++ Project_3.cpp -o convert && ./convert
cd ../python && python3 fast_food_order.py
```
