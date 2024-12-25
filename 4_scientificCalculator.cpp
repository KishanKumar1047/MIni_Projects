#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <complex>
using namespace std;

void add(int x, int y)
{
    cout << "On Sum we get = " << x + y << endl;
}

void subtract(int x, int y)
{
    cout << "On Subtraction we get = " << x - y << endl;
}

void multiply(int x, int y)
{
    cout << "On Multiplication we get = " << x * y << endl;
}

void division(int x, int y)
{
    if (y != 0)
    {
        cout << "On Division we get = " << x / y << endl;
    }
    else
    {
        cout << "Division by zero is undefined." << endl;
    }
}

void remainder(int x, int y)
{
    if (y != 0)
    {
        cout << "On Division we get remainder = " << x % y << endl;
    }
    else
    {
        cout << "Division by zero is undefined." << endl;
    }
}

void printInScientific(double x)
{
    cout << "Scientific Notation: " << scientific << x << endl;
    cout << "With Precision (4 digits): " << scientific << setprecision(4) << x << endl;
}
int main()
{
    int n;
    cout << "Select the operation you want to perform:" << endl;
    cout << "1. Addition" << "\n"
         << "2. Subtraction" << "\n"
         << "3. Multiplication" << "\n"
         << "4. Division" << "\n"
         << "5. Remainder" << "\n"
         << "6. Exponentiation" << "\n"
         << "7. Square Root" << "\n"
         << "8. Trigonometric Functions" << "\n"
         << "9. Logarithmic Functions" << "\n"
         << "10. Scientific Notations" << "\n"
         << "11. Complex Number Operations" << "\n"
         << "12. Absolute Value" << endl;

    cin >> n;

    int x, y;
    double a, b , r;

    switch (n)
    {
    case 1:
        cout << "Enter 1st number: ";
        cin >> x;
        cout << "Enter 2nd number: ";
        cin >> y;
        add(x, y);
        break;

    case 2:
        cout << "Enter 1st number: ";
        cin >> x;
        cout << "Enter 2nd number: ";
        cin >> y;
        subtract(x, y);
        break;

    case 3:
        cout << "Enter 1st number: ";
        cin >> x;
        cout << "Enter 2nd number: ";
        cin >> y;
        multiply(x, y);
        break;

    case 4:
        cout << "Enter dividend: ";
        cin >> x;
        cout << "Enter divisor: ";
        cin >> y;
        division(x, y);
        break;

    case 5:
        cout << "Enter dividend: ";
        cin >> x;
        cout << "Enter divisor: ";
        cin >> y;
        remainder(x, y);
        break;

    case 6:
        cout << "Enter the number: ";
        cin >> a;
        cout << "Enter its power: ";
        cin >> b;
        cout << "On Exponentiation, we get " << pow(a, b) << endl;
        break;

    case 7:
        cout << "Enter the number: ";
        cin >> a;
        if (a >= 0)
        {
            cout << "Square Root of " << a << " is " << sqrt(a) << endl;
        }
        else
        {
            cout << "Square root of a negative number is undefined in real numbers." << endl;
        }
        break;

    case 8:
        cout << "Enter value in degree : ";
        cin >> a;
         r = a * (M_PI / 180.0);
        cout << "Enter Trigonometric Function to Perform:" << endl;
        cout << "1. sin(x)" << "\n"
             << "2. cos(x)" << "\n"
             << "3. tan(x)" << "\n"
             << "4. sinh(x)" << "\n"
             << "5. cosh(x)" << "\n"
             << "6. tanh(x)" << endl;
        int trigChoice;
        cin >> trigChoice;
        switch (trigChoice)
        {
        case 1:
            cout << "sin(" << r << ") = " << sin(r) << endl;
            break;
        case 2:
            cout << "cos(" << r << ") = " << cos(r) << endl;
            break;
        case 3:
            cout << "tan(" << r << ") = " << tan(r) << endl;
            break;
        case 4:
            cout << "sinh(" << r << ") = " << sinh(r) << endl;
            break;
        case 5:
            cout << "cosh(" << r << ") = " << cosh(r) << endl;
            break;
        case 6:
            cout << "tanh(" << r << ") = " << tanh(r) << endl;
            break;
        default:
            cout << "Invalid choice for trigonometric function." << endl;
        }
        break;

    case 9:
        cout << "Enter value: ";
        cin >> a;
        cout << "Choose Base for Log Function:" << endl;
        cout << "1. Natural log (base e)" << "\n"
             << "2. Log (base 10)" << "\n"
             << "3. Log (base 2)" << endl;
        int logChoice;
        cin >> logChoice;
        switch (logChoice)
        {
        case 1:
            cout << "log(" << a << ") = " << log(a) << endl;
            break;
        case 2:
            cout << "log10(" << a << ") = " << log10(a) << endl;
            break;
        case 3:
            cout << "log2(" << a << ") = " << log2(a) << endl;
            break;
        default:
            cout << "Invalid choice for logarithmic function." << endl;
        }
        break;

    case 10:
        double c;
        cout << "Enter the value: ";
        cin >> c;
        printInScientific(c);
        break;

    case 11:
    {
        cout << "Enter real and imaginary parts of your 1st number: ";
        cin >> a >> b;
        cout << "Enter real and imaginary parts of your 2nd number: ";
        float m, n;
        cin >> m >> n;

        cout << "Enter Operation:" << endl;
        cout << "1. Addition" << "\n"
             << "2. Subtraction" << "\n"
             << "3. Multiplication" << "\n"
             << "4. Division" << endl;

        int complexChoice;
        cin >> complexChoice;

        complex<double> num1(a, b);
        complex<double> num2(m, n);

        switch (complexChoice)
        {
        case 1:
            cout << "Sum: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Difference: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Product: " << num1 * num2 << endl;
            break;
        case 4:
            if (m != 0 || n != 0)
            {
                cout << "Quotient: " << num1 / num2 << endl;
            }
            else
            {
                cout << "Division by zero in complex numbers is undefined." << endl;
            }
            break;
        default:
            cout << "Invalid operation for complex numbers." << endl;
        }
        break;
    }

    case 12:
        cout << "Enter value: ";
        cin >> a;
        cout << "Absolute value = " << fabs(a) << endl;
        break;

    default:
        cout << "Please select a valid operation!" << endl;
    }

    return 0;
}

