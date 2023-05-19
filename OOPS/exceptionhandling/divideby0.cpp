#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b;
    try{
        if(b==0)
        throw b;
        else
        cout << a/b << endl;
    }catch(int x){
    cout << "Cannot divide by " << x << endl;
    }
    return 0;
}