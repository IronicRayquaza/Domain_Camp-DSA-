#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter number: " << endl;
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "Sum of first " << n << " numbers is: " << sum << endl;
    return 0;
}
// Sum of first n natural numbers