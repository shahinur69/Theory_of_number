#include<iostream>
using namespace std;
// gcd --- greatest common divisor
int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main ()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD of two number is: "<<gcd(a, b)<<endl;
}
