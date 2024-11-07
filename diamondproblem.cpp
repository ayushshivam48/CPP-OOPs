#include<iostream>
using namespace  std;

class Parent{

    public:
    Parent(){
        cout<<"Parent class: "<<endl;
    }

};


class Child1: public Parent{
    public:
    Child1(){
        cout<<"Child-1 class: "<<endl;
    }

};

class Child2: public Parent{
    public:
    Child2(){
        cout<<"Child-2 class: "<<endl;
    }

};


class GrandChild: public Child1, public Child2{
    public:
    GrandChild(){
        cout<<"Grand-Child class: "<<endl;
    }

};

int main(){

    GrandChild gc;
}