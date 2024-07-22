// Control Structure--->
// ---1.If else---
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter a number: ";
    cin >> age;
    if (age >= 50)    {
        cout << "Input number is greater than 50!" << endl;
    }
    else if (age == 50)
    {
        cout << "Input number is equal to 50!" << endl;
    }
    else
    {
        cout << "Input number is less than 50!" << endl;
    }
return 0;
}


