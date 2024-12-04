# C++ Off-by-One Error in Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`.  The error occurs because the loop condition `i <= vec.size()` attempts to access an element beyond the valid range of indices (0 to `vec.size()-1`).

The `bug.cpp` file contains the erroneous code. The `bugSolution.cpp` file provides the corrected code.