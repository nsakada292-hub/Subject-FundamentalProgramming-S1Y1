#include<iostream> 
using namespace std; 
int main(){
    system("cls");
    cout<<"--------[ Exchange Money ]--------"<<endl;

    float usd;
    cout<<"Enter amount in USD:"<<endl;
    cin>>usd;

    float result=usd*4000;
    cout<<"\nResult is :"<<result<<"riels"<<endl; // \n = endl 

    return 0; 
}