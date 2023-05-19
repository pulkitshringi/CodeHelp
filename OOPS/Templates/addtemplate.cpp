#include <iostream>
using namespace std;
template <class t1>
class lmao{
public :
t1 A;
};
int main(){
    lmao<int>s1;
    lmao<double>s2;
    s1.A= 5;
    s2.A=12.5;
    cout << s1.A*s2.A << endl;
    return 0;
}