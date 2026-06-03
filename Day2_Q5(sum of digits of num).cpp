#include <iostream>
using namespace std;

int main() {
    int num,sum=0,digit;   //taking input

    cout<<"Enter a number: ";
    cin>>num;

    while(num!=0) {
        digit=num % 10;   // Get last digit
        sum=sum+digit;  // Add digit to sum
        num=num/10;     // Remove last digit
    }

    cout<<"sum of digits ="<<sum;

    return 0;
}