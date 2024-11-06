#include<iostream>
using namespace  std;

class Parent1{

    public:
    Parent1(){
        cout<<"Parent-1 class: "<<endl;
    }

};    

class Parent2{

    public:
    Parent2(){
        cout<<"Parent-2 class: "<<endl;
    }

};    


class Child: public Parent1, public Parent2{
    public:
    Child(){
        cout<<"Child class: "<<endl;
    }

};


int main(){

    Child c;
}