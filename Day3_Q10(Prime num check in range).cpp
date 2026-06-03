#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start and end of range: ";
    cin >> start >> end;

    cout << "Prime numbers are: ";

    for(int num=start; num<=end; num++) {
        if(num<=1)
            continue;

        bool isprime =true;

        for(int i=2; i*i<=num; i++) {
            if (num %i==0) {
                isprime=false;
                break;
            }
        }

        if (isprime)
            cout << num << " ";
    }

    return 0;
}