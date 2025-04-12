#include <bits/stdc++.h>
using namespace std;
int subArraySum(int a[], int n, int target){
    int left = 0, right = 0, sum = 0;
    while(right < n){
        sum += a[right];
        while(target < sum && left <= right){
            sum -= a[left];
            left++;
        }
        if(sum == target){
            cout<<"Sub array sum: ";
            for(int i = left; i <= right; i++){
                cout<<a[i];
                if(i < right) cout<<" + ";
            }
            cout<<" = "<<target<<endl;
            return sum;
        }
        right++;
    }
    cout<<"Not found ";
}
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    subArraySum(a, n, target);
    return 0;
}
