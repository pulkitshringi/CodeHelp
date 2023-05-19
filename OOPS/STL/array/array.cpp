#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,4>arr={1,2,3,4};
    cout << arr.size() << endl;
    cout << arr[0] << " " << arr[3] << endl;
    return 0;
}