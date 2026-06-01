
#include <iostream>
using namespace std;

int main() {
    int n, sum=0;  //input//

    cout<<"Enter N: ";
    cin >>n;

    for (int i = 1; i<=n; i++) {
        sum=sum+i;                //logic//
    }

    cout<<"Sum of first "<<n<< "natural numbers = " << sum << endl;

    return 0;
}