#include<bits/stdc++.h>
using namespace std;
void primeFactorization(int n){
     cout<<"Prime factorizations are: ";
     while(n % 2 == 0){
        cout<<2<< " ";
        n = n/2;
     }
     for(int i = 3; i * i <= n; i += 2){
        while(n % i == 0){
            cout<<i<<" "<<endl;
            n = n/i;
        }
     }
     if(n > 1){
        cout<<n<<endl;
     }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    primeFactorization(n);
    return 0;
}
