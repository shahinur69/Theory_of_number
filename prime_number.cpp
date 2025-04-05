#include<bits/stdc++.h>
using namespace std;
bool isPrime(int N)
{
    if(N <= 1) return false;
    for(int i = 2; i <= sqrt(N); i++)
    {
        if(N % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }
}
