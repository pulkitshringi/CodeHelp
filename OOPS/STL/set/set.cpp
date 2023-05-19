#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main(){
    set<int>s;
    s.insert(12);
    s.insert(15);
    s.insert(99);
    s.insert(99);

    return 0;
}