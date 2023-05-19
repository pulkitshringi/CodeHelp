#include <iostream>
using namespace std;
class Multilvl{
    protected:
   int data;
};
class b : public Multilvl{
    protected:
    int pubg;
};
class c : public b{
public:
   int lmao;
   c(int data){
    this->data=data;
    this->pubg=data+24;
   }
   void print(){
    cout << "data : " << data << endl;
    cout << "pubg : " << pubg << endl;
   }
};
int main(){
    c s1(12);
   s1.print();
    return 0;
}