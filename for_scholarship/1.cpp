#include<iostream>
#include<cmath>
using namespace std;


// void solveQuadratic(float a, float b, float c){
//     float D, x1, x2;

//     D=b*b-4*a*c;

//     if(D>0){
//         x1=(-b + sqrt(D))/(2*a);
//         x2=(-b - sqrt(D))/(2*a);

//         cout<<"Two root: "<<endl;
//         cout<<"X1: "<< x1 << endl;
//         cout << "X2: " << x2 << endl; 
//     }else if( D == 0 ) {
//         x1 = -b / (2 * a);

//         cout << "One rot: " << endl;
//         cout << "X" << x1 <<endl;
//     }else {
//         cout << "No one root" << endl; 
//     }
// }



void solveQuadratic(float a, float b, float c){
    float d, x1, x2;

    d=b*b-4*a*c;

    if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);

        cout<<"Two roots: "<<endl;
        cout<<"X1: "<<x1<<endl;
        cout<<"X2: "<<x2<<endl;
    }else if(d==0){
        x1=-b/(2*a);

        cout<<"One root: "<<endl;
        cout<<"X: "<<x1<<endl;
    }else{
        cout<<"No real root."<<endl;
    }
}


int main(){
    system("cls");

    solveQuadratic(1, 7, 10);

    return 0;
}