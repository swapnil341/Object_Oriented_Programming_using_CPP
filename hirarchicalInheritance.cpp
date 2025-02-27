#include<iostream>
using namespace std;

class Root {
    public:
        void displayRoot(){
            cout<<"This is Root Node && Level 0"<<endl;
        }
};

class RightChild1 : public Root {
    public :
        void displayRightChild1(){
            cout<<"This is RightChild && Level 1"<<endl;
        }
};
class LeftChild1 : public Root {
    public : 
        void displayLeftChild1(){
            cout<<"This is LeftChild && Level 1"<<endl;
        }
};

class RightChild2 : public RightChild1 {
    public : 
        void displayRightChild2 (){
            cout<<"This is RightChild2 && Level 2"<<endl;
        }
};


class LeftChild2 : public LeftChild1 {
    public : 
        void displayLeftChild2 (){
            cout<<"This is LeftChild2 && Level 2"<<endl;
        }
};

int main(){
    LeftChild2 lc2 ;
    RightChild2 rc2 ;
    rc2.displayRoot();
    rc2.displayRightChild1();
    rc2.displayRightChild2();

    lc2.displayRoot();
    lc2.displayLeftChild1();
    lc2.displayLeftChild2();

    return 0;
}
