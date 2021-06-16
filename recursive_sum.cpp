#include<iostream>

using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int prev_sum = Sum(n-1);

    return n + prev_sum;
}

int power_of(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prev_power = power_of(n, p-1);

    return n*prev_power;
}

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int prev_facto = factorial(n-1);

    return n*prev_facto;
}

int fibo(int n)
{
    if (n == 0 || n ==1)
    {
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}


int main()
{
    int n;
    cin>> n;

    cout << Sum(5) <<endl;
    int p;
    cin >> p;

    cout << power_of(n, p) <<endl;

    cout << factorial(n) << endl;

    cout << fibo(n) <<endl;
    return 0;

}