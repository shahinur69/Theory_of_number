#include<bits/stdc++.h>
using namespace std;
void twoSum(int a[], int n, int target)
{
    sort(a, a + n);
    int left = 0, right = n - 1;
    while(left < right)
    {
        int sum = a[left] + a[right];
        if(sum == target)
        {
            cout<<"Two number found: "<<a[left]<<" + "<<a[right] <<" = " <<target<<endl;
            return;
        }
        else if( sum < target) left++;
        else right--;
    }
    cout << "No valid two number found";
}
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"Enter a target: ";
    cin>> target;
    twoSum(a, n, target);
}
