#include<iostream>
using namespace std;

int main(){
    system("cls");

    int option;

    cout<<"=============Menu============="<<endl;
    cout<<"1. Lenovo"<<endl;
    cout<<"2. ASUS"<<endl;
    cout<<"3. MacBook"<<endl;
    cout<<"4. MSI"<<endl;
    cout<<"5. Dell"<<endl;
    cout<<"6. Acer"<<endl;
    cout<<"7. Razer"<<endl;
    cout<<"Choose Your Dream Laptop between 1-7: ";cin>>option;

    switch(option){
        case 1:{
            cout<<"You chose Lenovo in option 1";break;
        }
        case 2:{
            cout<<"You chose ASUS in option 2";break;
        }
        case 3:{
            cout<<"You chose MacBook in option 3";break;
        }
        case 4:{
            cout<<"You chose MSI in option 4";break;
        }
        case 5:{
            cout<<"You chose Dell in option 5";break;
        }
        case 6:{
            cout<<"You chose Acer in option 6";break;
        }
        case 7:{
            cout<<"You chose Razer in option 7";break;
        }
        default:{
            cout<<"Invailable Option, Please Option between 1-7.";
        }
    }

    return 0;
}