#include<iostream>
using namespace std;



struct Student{
    // data memeber
    string name;
    char gender;
    int age;
    string classroom;

// Default constructor
// provide default value for the instances
Student(){
    name="Unknown";
    gender='Unknown';
    age=19;
    classroom="Unknown";
}

// parameterized constructor
Student(string n, char g, int a, string c){
    name=n;
    gender=g;
    age=a;
    classroom=c;
}
    // void input(){
    //     cout<<"===================================="<<endl;
    //     cout<<"             INPUT INFO             "<<endl;
    //     cout<<"===================================="<<endl;
    //     cout<<"Enter your name: ";getline(cin, name);
    //     cout<<"Enter your gender: ";cin>>gender;
    //     cout<<"Enter your age: ";cin>>age;
    //     cout<<"Enter your classroom: ";cin>>classroom;
    // }



    // function member
    void output(){
        cout<<"===================================="<<endl;
        cout<<"             OUTPUT INFO            "<<endl;
        cout<<"===================================="<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Classroom: "<<classroom<<endl;
    }
};




int main(){
    system("cls");

    // Instantiation = create an instance
    // s1 is an instance, struct variable
Student s1("sakada", 'M', 19, "M1-ISTAD");
s1.output();

    return 0;
}