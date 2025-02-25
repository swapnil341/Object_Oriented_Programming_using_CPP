#include <iostream>
#define PI 3.14 
using namespace std;

class Area {
  private: 
    float length, width, base, radius;
  public: 
    Area(){
      length = 0 ;
      width = 0;
      base = 0;
      radius =0 ;
    }
    void computeArea(float radius){
      float area = PI* (radius * radius) ;
      cout<<"Area of Circle : "<< area<<endl ;
    }
    void computeArea(float length, float width){
      cout<<"Area of Rectangle : "<<(length * width) <<endl;
    }
  
};

int main() 
{
    cout << "Function Overloading"<<endl;
    Area obj ;
    obj.computeArea(5);
    obj.computeArea(5,2);
    return 0;
}
