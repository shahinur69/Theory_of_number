#include<bits/stdc++.h>
using namespace std;
int main(){
    int number = 0;
    cout<<"Enter a number: ";
    cin>>number;
    int lim = sqrt(number), total_num_factors = 1, org_number = number;
    unsigned product_of_factors = 0;
    for(int div = 2; div <= lim; div++){
        int power = 0;
        while(number % div == 0){
            number = number / div;
            power++;
        }
        if(power != 0){
            total_num_factors *= (power + 1);
        }
    }
    if(number > 1){
        total_num_factors = 2;
        product_of_factors = number;
    }
    else{
        product_of_factors = pow(org_number , total_num_factors / 2);
    }
    cout<<"Product of factors are: "<<product_of_factors<<endl;
}
