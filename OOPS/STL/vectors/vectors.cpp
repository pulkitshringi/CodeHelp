#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>p(5,2);
    //cout << p.capacity();
   // p.push_back(12);
    //cout << p.capacity();
//  p.push_back(44);
//   p.push_back(33);
//    p.push_back(22);
//    p.pop_back();
   for(int i = 0 ;i<p.size();i++){
    cout << p.at(i) << endl;
   }
   cout << p.front() << " " << p.back() << endl;
    return 0;
}
