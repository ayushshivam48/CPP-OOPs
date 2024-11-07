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

class Child1: public Parent1{
    public:
    Child1(){
        cout<<"Child-1 class: "<<endl;
    }

};

class Child2: public Parent1{
    public:
    Child2(){
        cout<<"Child-2 class: "<<endl;
    }

};

class Child3: public Parent2{
    public:
    Child3(){
        cout<<"Child-3 class: "<<endl;
    }

};

class GrandChild: public Child1{
    public:
    GrandChild(){
        cout<<"Grand-Child class: "<<endl;
    }

};

int main(){

    Child1 c1;
    Child2 c2;
    Child3 c3;
    GrandChild gc;
}