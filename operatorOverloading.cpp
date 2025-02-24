#include<iostream>
using namespace std;

class  Complex{
  private:
    int real ;
    int imag ;
  public: 
    Complex(int r, int img){
      real =r ;
      imag = img;
    }
    void display(){
      cout<<real<<" + "<<imag<<"i "<<endl;
    }
    Complex operator + (Complex obj1){
      Complex res(0,0) ;
      res.real = real + obj1.real ;
      res.imag = imag + obj1.imag ;
      return res ;
    }
};

int main(){
  Complex ob1(5,2);
  Complex ob2(5,3);
  Complex ob3(0,0);
  ob3 = ob1 + ob2 ;
  ob3.display();
  
  return 0;
}
