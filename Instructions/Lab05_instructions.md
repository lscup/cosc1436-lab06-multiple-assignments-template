# Lab 05: Calculating Final Grades in Your Grade Calculator

## 1. Overview
In this lab, you'll extend your previous grade calculator to calculate and display the final grade based on total points earned. This lab will help you learn how to use conditional statements in C++ to make decisions in your programs.

### Objectives
- Learn how to use conditional statements (if-else) in C++
- Practice working with user input and output
- Understand how to calculate and display a final grade based on total points earned

### Prerequisites
- Completion of Lab 04: Enhancing Your Grade Calculator with Percentages

---

## 2. Algorithm/Concept Background
Conditional statements allow your program to make decisions based on conditions. Here's how they work:

```cpp
if (condition) {
    // Code runs if condition is true
} else if (another_condition) {
    // Code runs if this condition is true
} else {
    // Code runs if no conditions are true
}
```

### Comparison Operators
| Operator | Meaning |
|----------|---------|
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |
| `>` | Greater than |
| `<` | Less than |
| `==` | Equal to |
| `!=` | Not equal to |

---

## 3. Your Coding Environment
### Workspace Layout
| Area | What It Does |
|------|--------------|
| Code Editor (left) | Edit your files using the tabbed editor |
| Terminal (right) | See output when you click the **Run** button |
| AI Tutor (chat panel) | Ask your AI Tutor for help — it knows this lab and can guide you step by step |

### Workflow
1. Edit your code in the editor tabs
2. Click **Run** to execute and see output in the terminal
3. When ready, click **Commit** to save your work to GitHub and trigger the autograder
4. A ✅ (green check) or ❌ (red X) will appear showing whether tests passed

Tip: Commit early and often to track your progress!

---

## 4. Project Structure
```
.
├── main.cpp               # YOUR WORK
└── Instructions.md        # Instructions file
```

---

## 5. Step-by-Step Implementation
### Step 1: Add New Variables
Add these variables after your existing declarations:
```cpp
float total_points_earned = 0.00;
float total_percentage_earned = 0.00;
```
Explain: These variables will hold the total points and percentage earned by the student.

### Step 2: Add Input for Points Earned
Add the following code after displaying the grading scheme:
```cpp
// Grade Calculation
std::cout << "\nGrade Calculation\n";
std::cout << "Please input the total of all points earned in the course: ";
std::cin >> total_points_earned;
std::cout << '\n';
```
Explain: This code prompts the user to enter the total points they earned in the course.

### Step 3: Add Conditional Logic
Implement the conditional logic to determine the final grade:
```cpp
if (total_points_earned >= A_points) {
    std::cout << "You earned a final grade of: 'A' at: ";
}
else if (total_points_earned >= B_points) {
    std::cout << "You earned a final grade of: 'B' at: ";
}
else if (total_points_earned >= C_points) {
    std::cout << "You earned a final grade of: 'C' at: ";
}
else if (total_points_earned >= D_points) {
    std::cout << "You earned a final grade of: 'D' at: ";
}
else {
    std::cout << "You earned a final grade of: 'F' at: ";
}

// Calculate and display percentage
total_percentage_earned = (total_points_earned / total_course_points) * 100;
std::cout << total_percentage_earned << '%' << '\n';
```
Explain: This logic checks which grade the student earned based on the points and displays it along with the percentage.

---

## 6. Testing Your Code
### Run Your Code
Click **Run** to execute and check the output.

### Submit for Grading
Click **Commit**, enter a message, and look for ✅ or ❌.

Example Expected Output:
```
Welcome to Your Grade Calculator!

Grading Scheme Setup
====================
Please input the Total Points Possible: Please input the Minimum Points for an 'A': Please input the Minimum Points for a 'B': Please input the Minimum Points for a 'C': Please input the Minimum Points for a 'D': 
The Grading Scheme You Input
============================
Total Points Possible in the Course: 1000
Points needed for an 'A': 900
Points needed for a 'B': 800
Points needed for a 'C': 700
Points needed for a 'D': 600

Grade Calculation
Please input the total of all points earned in the course: 
You earned a final grade of: 'B' at: 85%
```

---

## 7. Autograding
| Test | Points | What It Checks |
|------|--------|----------------|
| Compilation Test | 10 | Checks if code compiles |
| Basic Input Test | 30 | Validates correct grade calculation for typical input |
| Edge Case Test | 30 | Tests upper boundary conditions for grades |
| Failing Grade Test | 30 | Ensures correct handling of failing grades |

---

## 8. Lab Report
(No lab report required for this assignment)

---

## 9. Submission Checklist
- [ ] All functions implemented
- [ ] Click Run — output matches expected
- [ ] Click Commit — autograder shows green check
- [ ] Final commit with completed lab