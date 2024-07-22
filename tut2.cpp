// Date types.

#include<iostream>
using namespace std;

int main (){
   int    a = 35 ;//----> integer.   range--> ( 0 to 4294967295 ).       -->size ( 4 byte )
   char   grade = 'A';//----> character. range--> ( -128 to 128 ).       -->size ( 1 byte )
   bool   b = true ; //----> boolean. range--> ( only store true and false ).  --> size ()
   float  c = 90.35 ;//----> float. range--> ( -3.4*10³⁸ to 3.4*10³⁸ ).        --> size ( 4  byte )
   double d = 90.6848589;//----> double. range--> ( -1.7*10³⁰⁸ to 1.7*10³⁰⁸ ). --> size ( 8 byte )
   cout << d ;
    return 0;
}