#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (n <= 1) {
        cout << "Not prime" << endl; 
        return 0;
    }

    bool isPrime = true; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            isPrime = false; 
            break;
        }
    }

    if (isPrime) {
        cout << "Prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }

    return 0;
}

//checks if number is prime or not
// use count if count++ more than 1 then no prime else prime number
// use square method calculate square upto n and if square is true return prime else not prime