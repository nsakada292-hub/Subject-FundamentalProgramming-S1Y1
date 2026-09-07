#include<iostream>
using namespace std;


class Shape{
    public:
    virtual void draw()=0;
    void info(){
        cout<<"This is the shape class!"<<endl;
    }
};

class Circle : public Shape{
    public:
    void draw() override{
        cout<<"Drawing circle shape!"<<endl;
    }
};


int main(){
    system("cls");


    Circle c;
    c.draw();
    c.info();


    return 0;
}