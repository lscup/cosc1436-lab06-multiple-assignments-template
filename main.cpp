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

    // Grade Calculation
    std::cout << "\nGrade Calculation\n";
    std::cout << "Please input the total of all points earned in the course: ";
    std::cin >> total_points_earned;
    std::cout << '\n';

    // Determine the final grade
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

    return 0;
}
