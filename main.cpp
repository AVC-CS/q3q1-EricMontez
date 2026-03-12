#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    // Prompt the user to enter three real numbers for the quadratic equation
    cin >> a >> b >> c;
    // Calculate the two roots ofthe quadratic equation with the given coefficients a, b, and c
    double firstroot = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    double secondroot = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    // Determine which root is greater and which is smaller
    double greaterroot, smallerroot;
    if (firstroot > secondroot)
    {
        greaterroot = firstroot;
        smallerroot = secondroot;
    }
    else
    {
        greaterroot = secondroot;
        smallerroot = firstroot;
    }
    // Display the greater root and the smaller root with two decimal places
    cout << setprecision(2) << fixed;
    cout << greaterroot << " " << smallerroot << endl;
    return 0;
}
