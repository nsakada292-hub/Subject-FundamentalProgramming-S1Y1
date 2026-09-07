#include<iostream>
using namespace std;

// this function handing a different logics


// if bool=true (usd -> khr)
// if bool=false (khr -> usd)
float exchangeMoney(float amount, bool usdToKhr){
    if(usdToKhr) return amount*4000;
    else return amount/4000;
}


int main(){
    system("cls");

    float usd;
    cout<<"Enter USD: ";cin>>usd;
    cout<<"Result in riels: "<<exchangeMoney(usd, true)<<" riels"<<endl;

    float khr;
    cout<<"Enter KHR: ";cin>>khr;
    cout<<"Result in USD: "<<exchangeMoney(khr, false)<<" $"<<endl;



    return 0;
}