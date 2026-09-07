#include<iostream>
using namespace std;


class Base{
    public:
    void output(){
        cout<<"Output from the base class!"<<endl;
    }
};

class Child : public Base{
    public:
    void output(){
        Base::output();
        cout<<"Output from Child class!"<<endl;
    }
};



int main(){
    system("cls");

    Base show;
    show.output();

    Child show_child;
    show_child.output();

    return 0;
}