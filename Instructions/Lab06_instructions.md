# Lab 06: Enhancing Your Grade Calculator with Multiple Assignments

## Objective
- Learn how to use loops in C++ to handle multiple inputs
- Practice using a running total to calculate cumulative scores
- Implement more complex conditional logic for grade determination

## Prerequisites
- ✅ Completion of Lab 05: Calculating Final Grades

---

## Introduction
In this lab, we'll add functionality to handle multiple assignment scores and calculate the final grade based on the total points earned. This demonstrates how to use loops, implement a running total, and apply more complex conditional logic.

---

## New Concepts
### While Loops
A `while` loop repeats code as long as a condition is true:
```cpp
while (condition) {
    // Code repeats while condition is true
}
```

### Running Total
A running total accumulates values:
```cpp
total += new_value;  // Same as: total = total + new_value;
```

### Boolean Variables
Boolean variables store `true` or `false`:
```cpp
bool score_input = true;
```

---

## Your Task
Modify your `main.cpp` to handle multiple assignment inputs.

### Step 1: Add New Variables
1. Add the following variable declarations at the beginning of your `main` function:
   ```cpp
   float assignment_score = 0.00;
   char earned_grade;
   bool score_input = true;
   int assignment = 1;
   ```

### Step 2: Replace Single Input with Loop
1. Locate the section where you currently accept the total points earned for a single assignment.
2. Replace it with this loop to handle multiple assignments:
   ```cpp
   // Multiple Assignment Input
   std::cout << "Grade Calculation\n";
   std::cout << "You will be prompted to input scores for all assignments.\n";
   std::cout << "(Input a negative number to cease input and calculate letter grade.)\n\n";

   while (score_input) {
       std::cout << "Please input the points earned for Assignment " << assignment << ": ";
       std::cin >> assignment_score;
       
       if (assignment_score >= 0) {
           total_points_earned += assignment_score;
           assignment++;
       }
       else {
           score_input = false;
       }
   }
   ```

### Step 3: Update Grade Determination
1. Find the section where the final grade is calculated.
2. Update it to utilize the `earned_grade` variable as follows:
   ```cpp
   // Determine the final grade
   if (total_points_earned >= A_points) {
       earned_grade = 'A';
   }
   else if (total_points_earned >= B_points) {
       earned_grade = 'B';
   }
   else if (total_points_earned >= C_points) {
       earned_grade = 'C';
   }
   else if (total_points_earned >= D_points) {
       earned_grade = 'D';
   }
   else {
       earned_grade = 'F';
   }
   ```

### Step 4: Update Final Output
1. Locate the output section for displaying results at the end of your program.
2. Modify it to include the percentage and earned grade:
   ```cpp
   // Calculate percentage
   total_percentage_earned = (total_points_earned / total_course_points) * 100;

   // Display results
   std::cout << "\nFinal Results\n";
   std::cout << "Total Points Earned: " << total_points_earned << '\n';
   std::cout << "Total Points Possible: " << total_course_points << '\n';
   std::cout << "Total Percentage: " << total_percentage_earned << '%' << '\n';
   std::cout << "Final Letter Grade: " << earned_grade << '\n';
   ```

---

## Running the Program
1. Click **"Run"**.
2. Enter the grading scheme.
3. Enter multiple assignment scores (e.g., 95, 88, 92, 78).
4. Enter a negative number to stop input.
5. Verify the total and grade are correct.

### Example Run
```
Grade Calculation
You will be prompted to input scores for all assignments.
(Input a negative number to cease input and calculate letter grade.)

Please input the points earned for Assignment 1: 95
Please input the points earned for Assignment 2: 88
Please input the points earned for Assignment 3: 92
Please input the points earned for Assignment 4: -1

Final Results
Total Points Earned: 275
Total Points Possible: 1000
Total Percentage: 27.5%
Final Letter Grade: F
```

---

## Submission
When your program correctly handles multiple assignments, click **"Submit"**.

---

## What You Learned
In this lab, you:
- ✅ Used while loops for repetitive input
- ✅ Implemented a running total
- ✅ Used boolean variables to control loop flow
- ✅ Applied conditional logic with char variables

---

## Next Steps
In **Lab 07**, you'll optimize your code using for loops and do-while loops!