// template with multiple parameters.
#include <iostream>
using namespace std;
template <class t1,class t2>
class Name{
public:
t1 data;
t2 data2;
Name(t1 data,t2 data2){
    this->data = data;
    this->data2 = data2;
    cout << this->data<< endl;
    cout << this->data2 << endl;
}
};
int main(){
    Name<float,float> s1(12.5,12.5);
    return 0;
}