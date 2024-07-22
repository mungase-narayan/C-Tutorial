/* File I/O in C++: Read/Write in the Same Program & Closing Files ==>>
    
    In this tutorial, we’ll learn about creating a program that will read from a 
    file and write to the file in the same program using a constructor.

    We had learned about the three most useful classes when we talk about File I/O, namely,
    1.fstreambase
    2.ifstream
    3.ofstream.

    #Reading File Operation Output: -->
      We learnt reading from a file using ifstream. Below snippet will 
      help you recollect the same.
    
     string st;
    // Opening files using constructor and reading it
    ifstream in("this.txt"); // Read operation
    in>>st;

    #Writing File Operation Output: -->
       We learnt reading from a file using ofstream. Below snippet will help you recollect the same
           
           string st = "Harry bhai";
         // Opening files using constructor and writing it
         ofstream out("this.txt"); // Write operation
         out<<st;

   #Follow these steps below to first write into the empty file: -->
    
    1.Create a text file “sample60.txt” in the same directory as that of the program.
    2.Create a string variable name.
    3.Create an object hout(name it whatever you wish) using ofstream passing the text file, 
      sample60.txt into it. This establishes a connection between your program and the text file.
    4.Take input from the user using cin into the name string.(You can write manually as well)
    5.Pass this name string to the object hout. The string name gets written in the text  file.
    6.Disconnect the file with the program since we are done writing to it using hout.close().

  #Follow these steps below to read from the file we just wrote into: -->
    1.Create a string variable content.
    2.Create an object hin(name it whatever you wish) using ifstream passing the text file, 
     sample60.txt into it. This establishes a new connection between your program and the text file.
    3.Fill in the string using the object hin. (Use getline, which we talked about in the last video, 
     to take into input the whole line from the text file.)
    4.Give output to the user, the string we filled in with the content in the text file.
    5.Disconnect the file with the program since we are done reading from it using hin.close().

*/

#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
 
    // connecting our file with hout stream
    ofstream hout("sample60.txt");
   
    // creating a name string variable and filling it with string entered by the user
    string name;
    cout<<"Enter your name: ";
    cin>>name;
     
     // writing a string to the file
    hout<<name + " is my name";
 
    // disconnecting our file
    hout.close();
    // connecting our file with hin stream
    ifstream hin("sample60.txt");
 
    // creating a content string variable and filling it with string present there in the text file
    string content;
    cin>>content;
    cout<<"The content of the file is: "<<content;
 
    // disconnecting our file
    hin.close();
    return 0;
}
