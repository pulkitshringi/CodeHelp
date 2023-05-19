#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int>q;   //maxi
    priority_queue<int,vector<int>,greater<int> >r;
    q.push(12);
    q.push(59);
    q.push(50);
        r.push(12);
    r.push(59);
    r.push(50);
    cout << "maxi : \n";
    cout << q.size() << endl;
    int n = q.size();
    for(int i = 0 ;i<n;i++){
        cout << q.top() << endl;
        q.pop();
    }
    cout << "Mini : \n";
    cout << r.size() << endl;
    n=r.size();
       for(int i = 0 ;i<n;i++){
        cout << r.top() << endl;
        r.pop();
    }
    return 0;
}