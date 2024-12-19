#include <iostream>
using namespace std;
int countDigit(int n){ 
    if (n==0)
        return 1;

    int count=0;
    while (n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main() {
   int n;
   cin>>n;
   cout<<"Number of digits:"<<countDigit(n);
   for(int i=n-1;i<=0;i--){
    cout<<n;
   }
   return 0;
}


//count digit for a number