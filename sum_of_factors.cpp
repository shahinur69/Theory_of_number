#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number = 0;
    cout<<"Enter a number: ";
    cin>>number;
    int lim = sqrt(number), sum_of_factors = 1;
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
            sum_of_factors *= (pow(div, power + 1) - 1) / (div  - 1);
        }
    }
    if(number > 1) sum_of_factors = 1 + number;
    cout<<"Total sum of factors are: "<<sum_of_factors<<endl;
}
