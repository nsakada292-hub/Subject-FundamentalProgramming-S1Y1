#include<iostream>
using namespace std;


struct Worker{
    string name, gender;
    float hour, wage, bonus{},ori_salary{},total{};

    void input(){
        cout<<"===================================="<<endl;
        cout<<"          INPUT WORKER INFO         "<<endl;
        cout<<"===================================="<<endl;
        cout<<"Enter your name: ";getline(cin, name);
        cout<<"Enter your gender: ";cin>>gender;
        cout<<"Enter your hours: ";cin>>hour;
        cout<<"Enter your wage: ";cin>>wage;
    }

    float findSalary(){
       return ori_salary=hour*wage;
    }

    float getBonus(){
        if(hour>=100){
            if(gender=="Male") bonus=0.4;
            else bonus=0.5;
        }
        return bonus;
    }

    float findTotal(){
         return findSalary()+findSalary()*getBonus();
    }

    void output(){
        cout<<"===================================="<<endl;
        cout<<"         OUTPUT WORKER INFO         "<<endl;
        cout<<"===================================="<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Hours: "<<hour<<" H"<<endl;
        cout<<"Wage: "<<wage<<" $"<<endl;
        cout<<"Salary: "<<findSalary()<<" $"<<endl;
        cout<<"Bonus: "<<getBonus()*100<<" %"<<endl;
        cout<<"Total: "<<findTotal()<<" $"<<endl;
    }
};



int main(){
    system("cls");


    Worker worker1;
    worker1.input();
    worker1.output();


    return 0;
}