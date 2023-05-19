#include <iostream>
using namespace std;
template <class t1,class t2>
void func(t1 a,t2 b){
    cout << a << endl << b << endl;
}
int main(){
    func(14.5,8);
    return 0;
}