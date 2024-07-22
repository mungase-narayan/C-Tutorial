/*  File I/O in C++: Reading and Writing Files ==>>

    These are some useful classes for working with files in C++
    *fstreambase
    *ifstream --> derived from fstreambase
    *ofstream --> derived from fstreambase

    In order to work with files in C++, you will have to open it. Primarily, there are 2 
    ways to open a file:
    1.Using the constructor
    2.Using the member function open() of the class

*/
// An example program is shown below to demonstrate the concept of reading and writing files

/* 
 #include<iostream>
 #include<fstream>

 using namespace std;

 int main(){
    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    cout<<st<<endl;

    return 0;
} 
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    cin>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}

