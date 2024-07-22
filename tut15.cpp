// Functions & Function Prototypes ---> 

/* Functions :->
    Functions are the main part of top-down structured programming.
    We break the code into small pieces and make functions of that code.
    Functions help us to reuse the code easily 

Function Prototypes :->
    The function prototype is the template of the function which 
    tells the details of the function e.g(name, parameters) to the compiler. 
    Function prototypes help us to define a function after the function call.
*/
#include<iostream>
using namespace std;

int sum ( int ,int ); //---> Function prototype.
void g ();
 
int main (){
     
     int num1 , num2 ;
     cout << "Enter first number"<<endl;
     cin >> num1 ;

     cout << "Enter second number"<< endl;
     cin >> num2 ;
    
     cout << "The sum is "<< sum (num1, num2) <<endl;
     g();

    return 0;

}
int sum (int a, int b){
   int c = a+b ; 
   return c ;
}
void g(){
    cout << " program is end "<<endl;
} 


