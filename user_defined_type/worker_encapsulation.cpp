#include<iostream>
using namespace std;


class Worker{
    private:
    int id;
    string name;
    string gender;
    double salary;

    public:
    Worker(){
        id=0;               // yg dak vea for pel value yg min trv leak khan nus vea ng mk jab id=0 nis
    }
    Worker(int id, string name, string gender, double salary){
        this->id=id;
        this->name=name;
        this->gender=gender;
        this->salary=salary;
    }

    void setId(int id){
        if(id<1000){
            cout<<"Invalid ID; ID must start from 1000"<<endl;
            return;
        }
        this->id=id;
    }
    int getId(){
        return id;
    }

    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
};


int main(){
    system("cls");

Worker worker1;
worker1.setId(100);
worker1.setName("Ama");

cout<<"ID: "<<worker1.getId()<<endl;
cout<<"Name: "<<worker1.getName()<<endl;


    return 0;
}