
#include <iostream>
#include <vector> 
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;

    vector<int> vec(n); 
    cout<<"Enter elements of the vector:\n"; 
    for (int i = 0; i < n; i++) {
        cin >> vec[i]; 
    }
    cout<<"The entered vector is:";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " "; 
    }
    cout<<endl;

    return 0;
}
//vector created and user input generated
//vector size is not necessary to be stated
//by default vector has 0 as value
//array has garbage value be default



















