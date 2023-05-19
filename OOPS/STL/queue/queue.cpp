#include <iostream>
#include <queue>
using namespace std;
int main(){
queue<int>q;
q.push(12);
q.push(14);
cout << q.front() <<endl;
q.pop();
cout << q.front() << endl; 
    return 0;
}