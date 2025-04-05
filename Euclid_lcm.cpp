#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b){
    if(b == 0) return a;
    return (a / gcd(a, b)) * b;
}
int main ()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"LCM is: "<<lcm(a, b)<<endl;
}
