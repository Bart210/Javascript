#include <iostream>
#include <cmath>

using namespace std;

int factorial (int n)
{
    if(n == 0)
        return 1;
    else if(n < 0)
        return 0;

    int factorial = n;
    for(int x = n - 1; x > 0; x--)
    {
        factorial = factorial * x;
    }
    return factorial;
}

double double_addition (double a, double b)
{
    return a + b;
}

#ifndef TESTING
int main()
{

  cout << factorial(4) << endl;

  return 0;
}
#endif