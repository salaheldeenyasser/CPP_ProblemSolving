# CPP_ProblemSolving — LeetCode Solutions

A collection of C++ solutions to LeetCode problems organized by problem number and name. Each problem folder contains a `main.cpp` with a sample solution and (when applicable) a short `README.md` that explains the problem, approach and complexity.

**Repository layout:**

- `11_ContainerWithMostWater/` : Problem 11 solution and README.
- `191_Numberof1Bits/` : Problem 191 solution and README.
- ... : Each problem is stored in `NNN_ProblemName/` with `main.cpp`.

**How to build and run a solution**

1. Open a terminal in the problem folder, for example:

```
cd 11_ContainerWithMostWater
```

2. Compile with `g++` (C++17 recommended):

```bash
g++ -std=c++17 -O2 main.cpp -o main
```

3. Run the program (provide input as required by the problem or the example in the problem README):

```bash
./main
```

**Conventions**

- Folder name: `NNN_ProblemName` where `NNN` is the LeetCode problem number.
- Primary solution file: `main.cpp` (self-contained). Additional helpers or tests may be added alongside.
- Use modern C++ (C++11/C++17). Keep solutions short and readable.

**Adding a new problem**

1. Create a new folder named `###_ProblemName` (replace `###` and `ProblemName`).
2. Add a `main.cpp` with your solution and a brief `README.md` describing the approach and complexity.
3. Optionally add sample input/output files or small tests.

**Contributing**

- Fork the repo, create a branch, add your solution, then open a pull request with a short explanation of the approach.

**Notes**

- Some problem folders include additional README files with examples and diagrams.
- If you want me to add CI or automated tests to compile all `main.cpp` files, say so and I can scaffold it.

Enjoy solving!
