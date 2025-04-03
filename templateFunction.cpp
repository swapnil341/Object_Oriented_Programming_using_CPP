#include<iostream>
using namespace std;

template <typename T>
T add( T a , T b){
    T c = a + b ;
    return c ;
}

int main(){
    int intAns ;
    float floatAns ;
    intAns = add(10, 20);
    floatAns = add(10.4f, 20.5f);
    cout<<"Addition of 10 and 20 : "<<intAns<<endl;
    cout<<"Addition of 10.4 and 20.5 : "<<floatAns<<endl;
    return 0;
}
