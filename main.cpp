#include <iostream>

using namespace std;

int main()
{
    // Declare variables to store the area and length of the square
    int area;
    int l;

    // Output a welcome message and instructions to the user
    cout << "Area of a square calculator\n______________________________\n";
    cout << "\n";
    cout << "Welcome to Area of a square Calculator. Please enter the length of on side of the square for you to get your output.";
    cout << "\n";
    cout << "Enter value for length: ";
    cin >> l; // Prompt the user to enter the length of one side of the square and store it in variable l
    cout << "\n";

    // Calculate the area of the square
    area = l * l;

    // Output the calculated area
    cout << "The area of the square is " << area << "\n";

    return 0; // Return 0 to indicate successful execution of the program
}
