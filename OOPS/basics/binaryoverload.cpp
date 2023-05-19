#include <iostream>
using namespace std;
class A{
public:
int data;
A(int x){
    data=x;
}
A operator +(A obj){
    A obj3(0);
    obj.data=data+obj.data;
    return obj;
}
};
int main(){
A obj1(12);
A obj2(24);
A obj3(0);
obj3 = obj1+obj2;
cout << obj3.data << endl;
    return 0;
}