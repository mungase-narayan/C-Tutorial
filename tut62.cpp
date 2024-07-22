/* File I/O in C++: open() and eof() functions ==>>
    
    the two methods to open a text file in our C++ program, first one using a constructor 
    which we discussed in the last tutorial, and the second one, using the member function open, 
    which is to be dealt with today.

    #1.Using the member function open: -->
       The member function open is used to connect the text file to the C++ program when passed into it
       1.Unlike what we did earlier passing the text file in the object while creating it, we’ll 
        first just declare an object out(any name you wish) of the type ofstream and use its open 
        method to open the text file in the program.
      2.We’ll pass some string lines to the text file using the out operation.
       3.We’ll now close the file using the close function. Now closing is explicitly used to 
        make the system know that we are done with the file. It is always good to use this.

    // This was all about writing to a file. We’ll now move to the eof function’s vitality in File I/O

    #include <iostream>
    #include <fstream>
    using namespace std;
 
    int main()
    {
 
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object out to the text file using the member function open()
    out.open("sample60.txt");
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    //closing the file connection
    out.close();
    return 0;
    }
*/
/* 2#.Using the member function eof: -->
     The member function eof(End-of-file) returns a boolean true if the file reaches 
     the end of it and false if not.

    1.We’ll first declare an object in(any name you wish) of the type ifstream and use its 
    open method similar to what we did above, to open the text file in the program.


*/