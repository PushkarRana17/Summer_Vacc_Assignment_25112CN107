#include <iostream>
using namespace std;

int main() {
    int num,product=1;      //input

    cout<<"Enter a number: ";   
    cin>>num;

    while(num != 0) {
        int digit=num % 10;
        product *=digit;        //logic
        num/=10;
    }

    cout<<"Product of digits="<<product;

    return 0;
}