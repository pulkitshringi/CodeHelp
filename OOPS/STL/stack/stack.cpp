#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(12);
    s.push(44);
    s.push(55);
    cout << s.top();
    s.pop();
    cout <<endl <<  s.top();
    return 0;
}