#include <iostream>
#include <cmath>   // sqrt, pow

using namespace std;

int main()
{
double c;
float a, b;

cout << "Enter a: ";
cin >> a;
cout << "Enter b: ";
cin >> b;

c = sqrt(pow(a, 2) + pow(b, 2));

cout << "The hypotenuse is: " << c << endl;

return 0;
}