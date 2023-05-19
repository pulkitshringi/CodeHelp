#include <iostream>
using namespace std;
class A{
public:
int x;
A(int data){
    x=data;
}
void operator ++(){
x++;
}
};
int main(){
A s1(12);
++s1;
cout << s1.x << endl;
    return 0;
}