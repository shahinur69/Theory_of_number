#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number = 0;
    cout<<"Enter a number: ";
    cin>>number;
    int lim = sqrt(number), total_number_factor = 1;
    for(int div = 2; div <= lim; div++)
    {
        int power = 0;
        while(number % div == 0)
        {
            number = number / div;
            power++;
        }
        if(power != 0)
        {
            total_number_factor *= (power + 1);
        }
    }
    if(number > 1)
    {
        total_number_factor = 2;
    }
    cout<<"The total number of factors are: "<<total_number_factor<<endl;
}
