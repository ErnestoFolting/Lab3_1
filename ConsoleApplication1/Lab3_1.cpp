#include<iostream>
#include <math.h>

using namespace std;

double x;

int main()
{
    double sum = 0,
        x0 = 1,
        x1,
        eps;
    cout << "Input x: ";
    cin >> x;
    cout << "Input eps: ";
    cin >> eps;
    int n = 1;
    x1 = (-1) * x0 * pow(x, 2) / ((2 * n - 1) * 2 * n);
    cout << x1;
    sum += x0;
    while (fabs(x1 - x0) >= eps)
    {
        cout <<"del=" << fabs(x1 - x0) << endl;
        n++;
        x0 = x1;
        x1 = (-1) * x0 * pow(x, 2) / ((2 * n - 1) * 2 * n);
        sum += x0;
        cout << "x1=" << x1 << endl;
        cout << "cos=" << sum << endl;
        
    }
    sum += x1;
    cout << "cos(" << x << ") = " << sum;
    return 0;
}