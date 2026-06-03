#include <iostream>
using namespace std;

int main() {
    int num,reversed = 0;     //input

    cout<<"Enter a number: ";
    cin>>num;

    while(num!=0){
        int digit=num%10;          
        reversed=reversed*10+digit; 
        num/=10;                        //logic
    }

    cout<<"Reversed number:"<<reversed << endl;

    return 0;
}