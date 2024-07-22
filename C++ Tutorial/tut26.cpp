/*  Friend Function :->
     Friend functions are those functions that have the right to access the private data
     members of class even though they are not defined inside the class. It is necessary 
     to write the prototype of the friend function. One main thing to note here is that if
     we have written the prototype for the friend function in the class it will not make that 
     function a member of the class.

   Properties of Friend Function :->
     1. Not in the scope of the class
     2. Since it is not in the scope of the class, it cannot be called from the object of that class,
        for example, sumComplex() is invalid
     3. A friend function can be invoked without the help of any object
     4. Usually contain objects as arguments
     5. Can be declared under the public or private access modifier, it will not make any difference
     6. It cannot access the members directly by their names, it needs (object_name.member_name) to 
        access any member.
*/
#include<iostream>
using namespace std;

class Complex{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b))
    ;
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
