#include <iostream>
using namespace std;
class Inheritance{
  protected:
int data;
};
class b : public Inheritance{
    public :
   b(int data){
    this->data=data;
    }
    int print(){
        return this->data;
    }
   };
int main(){
    b s1(24);
    cout << s1.print() << endl;
    return 0;
}
