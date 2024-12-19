#include <iostream>
using namespace std;

int main() {
    int input, sumeven = 0, sumodd = 0; 
    cout << "Enter a number: ";
    cin >> input;

    for (int i = 1; i <= input; i++) { 
        if (i % 2 == 0) {
            sumeven += i; 
        } else {
            sumodd += i; 
        }
    }

    cout << "Sum of even numbers: " << sumeven << endl;
    cout << "Sum of odd numbers: " << sumodd << endl;

    return 0;
}
//for odd you can also use n*n
//for even you can use n*(n+1)