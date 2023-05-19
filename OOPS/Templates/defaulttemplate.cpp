#include <iostream>
using namespace std;
template<class t1=int,class t2=double>
class lmao{
t1 A;
t2 B;
public:
lmao(t1 data,t2 data2){
    this->A=data;
    this->B=data2;
}
void print(){
    cout << this->A << endl;
    cout << this->B << endl;
}
};
int main(){
    lmao<>s1(12,24.5);
    s1.print();
    return 0;
}