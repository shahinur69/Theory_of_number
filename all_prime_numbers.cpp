#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    bool array[n + 1];
    for(int i = 0; i <= n; i++){
        array[i] = true;
    }
    array[0] = false;
    array[1] = false;
    for(int i = 2; i <= sqrt(n); i++){
        if(array[i] == true){
            for(int j = i * i; j <= n; j = j + i){
                array[j] = false;
            }
        }
    }
    cout<<"All the prime numbers of efficient limit: ";
    for(int i = 1; i <= n; i++){
        if(array[i] == true){
            cout<<i<<" ";
        }
    }
}
