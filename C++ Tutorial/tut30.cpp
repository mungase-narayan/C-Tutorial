/* Parameterized and Default Constructors :->
     Parameterized constructors are those constructors that take one or more parameters. 
     Default constructors are those constructors that take no parameters. The main things 
     to note here are that constructors are written in the public section of the class and 
     the constructors don’t have a return type.
*/
#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};
int main(){
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}
