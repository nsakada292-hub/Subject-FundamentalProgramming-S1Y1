#include <iostream>
using namespace std;

int main()
{
    system("cls");

    char gender;
    cout << "Enter your gender: ";
    cin >> gender;

    if (gender == 'F')
    {
        cout << "Gender is female" << endl;
    }
    else if (gender == 'M')
    {
        cout << "Gender is male" << endl;
    }
    else
    {
        cout << "Gay!!!!!!!!!!" << endl;
    }

    return 0;
}