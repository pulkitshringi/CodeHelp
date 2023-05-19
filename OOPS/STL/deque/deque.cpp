#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int>p;
    p.push_back(12);
    p.push_front(44);
    for(int i = 0;i<p.size();i++)
    cout << p[i] << endl;
    return 0;
}