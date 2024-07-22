// Structures, Unions & Enums --->

/* Structures :-> 
   The structure is a user-defined data type . Structures are used to combine 
   different types of data types, just like an array is used to combine the 
   same type of data types. 

   Unions :-> 
   Unions are similar to structures but they provide better memory management then 
   structures. Unions use shared memory so only 1 variable can be used at a time

   Enums :-> 
   Enums are user-defined types which consist of named constants. 
   Enums are used to make the program more readable
   
*/

#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    cout<<breakfast<<endl;
    cout<<lunch  << endl;
    cout<<dinner << endl;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep narayan;
    // struct employee shubham;
    // struct employee rohanDas;
    // narayan.eId = 1;
    // narayan.favChar = 'c';
    // narayan.salary = 120000000;
    // cout<<"The value is "<<narayan.eId<<endl; 
    // cout<<"The value is "<<narayan.favChar<<endl; 
    // cout<<"The value is "<<narayan.salary<<endl; 
    return 0;
}
