#include <iostream>
using namespace std;
int area(float r){
    float cir;
    cir=3.14*r*r;
    return cir;
}
int area(int l,int b){
    return l*b;
}

int main(){
    int length,breadth;
    float radius;
    cin>>radius;
    cin>>length;
    cin>>breadth;
    cout<<area(radius)<<endl;
    cout<<area(length,breadth);
return 0;
}

//fucntion overloading 