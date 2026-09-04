// Jonathan Contreras-Jimenez
// 9/3/2026
// Basic area and perimeter calculator for circles and rectangles
#include <iostream>


const double PI = 3.14159;


double calculate_area(const double radius) {
    if (radius < 0) {
    return 0.0;
    }
    return PI * radius * radius;
}

double calculate_area(const double length, const double width) {
    if (length < 0 || width < 0) {
    return 0.0;
    }
    return length * width;
}

double calculate_perimeter(const double radius) {
    if (radius < 0) {
    return 0.0;
    }
    return 2 * PI * radius;
}

double calculate_perimeter(const double length, const double width) {
    if (length < 0 || width < 0) {
    return 0.0;
    }
    return 2*length + 2*width;
}


void display_menu(int& user_choice) {
    std::cout << "1. Area of a Circle" << std::endl;
    std::cout << "2. Perimeter of a Circle" << std::endl;
    std::cout << "3. Area of a Rectangle" << std::endl;
    std::cout << "4. Perimeter of a Rectangle" << std::endl;
    std::cout << "5. Quit" << std::endl;
    std::cin >> user_choice;
}


void display_radius_menu(double& radius) {
    std::cout << "Radius: ";
    std::cin >> radius;
}


void display_perimeter_menu(double& length, double& width) {
    std::cout << "Length: ";
    std::cin >> length;
    std::cout << "Width: ";
    std::cin >> width;
}


int main() {
    int user_choice;
    double radius;
    double length;
    double width;
    do {
    display_menu(user_choice);
    switch (user_choice) {
        case 1:
        // I choose to implement pass-by-reference for display_radius_menu() and display_perimeter_menu() because apparently you can't declare and initialize variables in switch statements.
        display_radius_menu(radius);
        std::cout << "Circle area: " << calculate_area(radius) << std::endl;
        break;
        case 2:
        display_radius_menu(radius);
        std::cout << "Circle perimeter: " << calculate_perimeter(radius) << std::endl;
        break;
        case 3:
        display_perimeter_menu(length, width);
        std::cout << "Rectangle area: " << calculate_area(length, width) << std::endl;
        break;
        case 4:
        display_perimeter_menu(length, width);
        std::cout << "Rectangle perimeter: " << calculate_perimeter(length, width) << std::endl;
        break;
        case 5:
        std::cout << "Quitting" << std::endl;
        break;
        default:
        // This will handle invalid options passed, such as -1 or 23.
        std::cout << "Invalid option!" << std::endl;
    }
    std::cout << std::endl;
    }
    while (user_choice != 5);
}
