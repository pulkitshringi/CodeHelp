#include <iostream>
using namespace std;
class Multiple{
protected:
int data;
};
class b{
    protected:
    int data2;
};
class c : public Multiple , public b{
    public:
  c(int data,int data2){
  this->data=data;
  this->data2=data2;
  }
  void print(){
    cout << data << endl;
    cout << data2 << endl;
  }
  };
int main(){
    c s1(12,24);
    s1.print();
    return 0;
}