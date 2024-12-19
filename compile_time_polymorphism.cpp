#include <iostream>
using namespace std;
//compile time polymorphism using function overloading
class CTPF{
    public:
    void func(int a){
        cout<<a<<endl;
    }
    void func(int a,int b){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    CTPF ctpf;
    ctpf.func(2);
    ctpf.func(4,5);    // find out why this happened
    return 0;
}