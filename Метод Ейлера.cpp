#include <iostream>
#include <cmath>
using namespace std;

double F(double x, double y) // функція
{
    return x * x + x * y + y * y; // задане рівняння
}

int main()
{
    setlocale(LC_ALL, "Ukr");

    double a;
    double b;

    cout << "Введ*ть a, b: \n" << endl; // у межах "від ... до ..." 
    cin >> a >> b;

    int n;
    cout << "Введ*ть к*льк*сть розбиття: " << endl;
    cin >> n;

    double h = 0.1;
    double *x, *y;

    x = new double[n];
    y = new double[n];

    x[0] = 0;
    y[0] = 1.2;

    for (int i = 1; i <= n; i++)
    {
        x[i] = a + i * h;
        y[i] = y[i - 1] + h * F(x[i - 1], y[i - 1]);
    }

    for (int i = 0; i <= n; i++) 
    {
        cout << "x[" << i << "]= " << x[i] << " " << "\ny[" << i << "]= " << y[i] << " "; // виведення даних
        cout << endl;
    }
    system("pause");
    return 0;
}