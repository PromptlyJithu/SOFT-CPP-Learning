# Student Marks Manager 📊

A simple, interactive C++ command-line application designed to collect student marks and perform various statistical calculations such as totals, averages, highest/lowest marks, and pass/fail counts.

---

## Features

* **Dynamic Student Count:** Accepts user input for the number of students (with built-in validation for ranges between 1 and 100).
* **Interactive Menu:** Provides a persistent options menu to query different statistics without re-entering data.
* **Calculations Included:**
  * **Total & Average Marks:** Computes the sum and average score.
  * **Highest & Lowest Scores:** Identifies the maximum and minimum marks in the dataset.
  * **Pass/Fail Breakdown:** Counts how many students passed or failed (based on a passing threshold of 50).
* **Session Loop:** Option to restart the entire program with a fresh set of marks or exit gracefully.

---

## Code Structure

* `total(int num, int arr[])`: Calculates the sum of all elements in the array.
* `highest(int num, int arr[])`: Finds and returns the maximum value in the array.
* `lowest(int num, int arr[])`: Finds and returns the minimum value in the array.
* `failed(int num, int arr[])`: Counts the number of marks falling below 50.
* `main()`: Manages the interactive input-output loops, user menu choices, and program flow.

---

## Getting Started

### Prerequisites
You need a C++ compiler installed on your system (such as GCC/G++, Clang, or MSVC).

### Compilation and Execution

1. Clone or save the source code into a file named `main.cpp`.
2. Open your terminal or command prompt and compile the code:
   ```bash
   g++ main.cpp -o marks_manager
   ```
3. Run the executable:
   - **Linux/macOS:**
     ```bash
     ./marks_manager
     ```
   - **Windows:**
     ```cmd
     marks_manager.exe
     ```

---

## Usage Example

```text
How Many Students Are There?
3
Enter Marks
75
45
90
***********************************
Enter The Corresponding Operation
***********************************
1 - Show Average And Total
2 - Show Highest And Lowest
3 - Show Number Passed and Failed
4 - All of the Above
5 - Exit
***********************************
1
The Average Mark is: 70
The Total Marks is: 210
```

---

## License
This project is open-source and free to use for educational and personal purposes.