#include<iostream>
using namespace  std;

class Sum{
public:
    void add(int x , int y){
        int sum = x+y;
        cout<<sum<<endl;
    }

    void add(int x , int y , int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }

    void add(float x , float y){
        int sum = x+y;
        cout<<sum<<endl;
    }

};

int main(){

    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float (2.4),float (3.6));    
}