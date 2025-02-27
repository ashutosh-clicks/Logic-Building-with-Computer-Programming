#include <iostream>
using namespace std;

class Box{
   private:
   int l,b,h;
   
   public:
   void box(){
      l = 0;
      b = 0;
      h = 0;
   }
   void boxlbh(int x, int y, int z){
      l = x;
      b = y;
      h = z;
   }
   int getLength(){
      cout<<l<<endl;
      return 1;
   }
   int getBreadth(){
      cout<<b<<endl;
      return 1;
   }
   int getHeight(){
      cout<<h<<endl;
      return 1;
   }
   long long CalculateVolume(){
      cout<<(l*b*h)<<endl;
      return 1;
   }
  };

int main() {
    
  Box b1;
  Box b2;
  b1.boxlbh(2,3,4);
  b2.box();
  b2.getLength();
  b2.getBreadth();
  b2.getHeight();
  b2.CalculateVolume();
  
  return 0;
}