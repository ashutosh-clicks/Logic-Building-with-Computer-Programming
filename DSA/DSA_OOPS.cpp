#include <iostream>
#include <cmath>
using namespace std;

class A{
  private:
  int x;

  public:
  void setter(int x){
    y = x;
  }
  int y;

  void getter(){
    cout<<y;
  };
};
int main(){
    A obj1;
    obj1.setter(89);
    obj1.getter();
    return 0;
}