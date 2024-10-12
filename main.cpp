#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    double p;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if (((a + b) <= c) || ((a + c) <= b) || ((c + b) <= a))
    {
        cout << "Not exist" << endl;
    }
    else 
    {
    p = (a + b + c) / 2;
    cout << "p = " << p << endl;
    cout << "S = " << sqrt(p*(p - a)*(p - b)*(p - c)) << endl;
    }

    return 0;
}