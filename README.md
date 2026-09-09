# ECE231L-Programming-Lab-Assignments
C &amp; C++ programming lab Works

## Assignment 2: Statistics Library.

**Location:** `assignment-2-statistics-library/`

**Description:** C static library with statistical functions

**Features:**
- Static library creation with `ar rcs`
- 7 functions: sum, average, std_dev, max, min, range, output_array
- Demonstrates modular C programming and compilation pipeline

**Build & Run:**
```bash
cd assignment-2-statistics-library
gcc -c statistics.c -o statistics.o
ar rcs libstatistics.a statistics.o
gcc -c output_array.c -o output_array.o
gcc -c main.c -o main.o
gcc -o main main.o output_array.o libstatistics.a -lm
./main
```

## Future Assignments
- Assignment 3: 
- Assignment 4:
