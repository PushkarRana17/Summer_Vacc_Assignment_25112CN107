
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, temp, digits = 0;
    cout<<"Enter a number: ";
    cin>>num;

    temp=num;

    while(temp> 0){
        digits++;
        temp /= 10;
    }

    temp=num;
    int sum =0;

    while(temp >0){
        int rem=temp%10;
        sum += pow(rem, digits);    //using power formula
        temp /= 10;
    }

    if(sum==num)
        cout<<num<<" is an Armstrong number";
    else
        cout <<num<< " is Not an Armstrong number";

    return 0;
}