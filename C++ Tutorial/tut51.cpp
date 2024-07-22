/* Pointers to Objects and Arrow Operator in CPP===>>
    
    #Pointer to objects in C++ -->
       As discussed before pointers are used to store addresses of variables which have data 
       types like int, float, double etc. But pointer can also store the address of an object. 
       An example program is shown below to demonstrate the concept of pointer to objects.
       
     [ #include<iostream>
       using namespace std;

       class Complex{
       int real, imaginary;
       public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

        };
        int main(){
        Complex *ptr = new Complex;
        (*ptr).setData(1, 54); is exactly same as
        (*ptr).getData(); is as good as 

        return 0;
        }
       ]
*/

// Another example program for the pointer to Objects and the use of the “Arrow” Operator is shown below.
  
   #include<iostream>
   using namespace std;

    class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

    };
    int main(){
    Complex *ptr = new Complex;
    ptr->setData(1, 54);
    ptr->getData(); 

    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();
    return 0;
}

