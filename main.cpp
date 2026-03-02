#include <iostream>

int main() {
    // Variable declarations
    int total_course_points = 0;
    float A_points = 0.00;
    float B_points = 0.00;
    float C_points = 0.00;
    float D_points = 0.00;
    
    float total_points_earned = 0.00;
    float total_percentage_earned = 0.00;
    
    float assignment_score = 0.00;
    char earned_grade;
    bool score_input = true;
    int assignment = 1;

    // Welcome message
    std::cout << "Welcome to Your Grade Calculator!" << std::endl;
    std::cout << std::endl;

    // Get grading scheme input
    std::cout << "Grading Scheme Setup" << std::endl;
    std::cout << "====================" << std::endl;

    std::cout << "Please input the Total Points Possible: ";
    std::cin >> total_course_points;

    std::cout << "Please input the Minimum Points for an 'A': ";
    std::cin >> A_points;

    std::cout << "Please input the Minimum Points for a 'B': ";
    std::cin >> B_points;

    std::cout << "Please input the Minimum Points for a 'C': ";
    std::cin >> C_points;

    std::cout << "Please input the Minimum Points for a 'D': ";
    std::cin >> D_points;

    // Display the grading scheme
    std::cout << std::endl;
    std::cout << "The Grading Scheme You Input" << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "Total Points Possible in the Course: " << total_course_points << std::endl;
    std::cout << "Points needed for an 'A': " << A_points << std::endl;
    std::cout << "Points needed for a 'B': " << B_points << std::endl;
    std::cout << "Points needed for a 'C': " << C_points << std::endl;
    std::cout << "Points needed for a 'D': " << D_points << std::endl;

    // Multiple Assignment Input
    std::cout << "\nGrade Calculation\n";
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

    // Calculate percentage
    total_percentage_earned = (total_points_earned / total_course_points) * 100;

    // Display results
    std::cout << "\nFinal Results\n";
    std::cout << "Total Points Earned: " << total_points_earned << '\n';
    std::cout << "Total Points Possible: " << total_course_points << '\n';
    std::cout << "Total Percentage: " << total_percentage_earned << '%' << '\n';
    std::cout << "Final Letter Grade: " << earned_grade << '\n';

    return 0;
}
