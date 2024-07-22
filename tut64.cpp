/* Writing our First C++ Template in VS Code ==>
    a template does the same thing to a class, what a class does to the objects. 
    It parametrizes the data type hence making it easy for us to use different classes 
    without having to write the whole thing again and again, violating the DRY rule. 
    Templates furthermore give our program a generic view, where declaring one template 
    suffices the task.

    1.Here we declare a class vector, with an integer pointer arr
    2. We declared an integer variable to store the size.
    3.We made the constructor for the integer vector. These things should be unchallenging for 
     you by now as they have been already taught.
    4.We then wrote a function which returns an integer value, to calculate the Dot Product and 
     named it dotProduct which will take a vector as a parameter.
    5.We traversed through the vectors multiplying their corresponding elements and adding it to 
     the sum variable named d.
    6.We finally returned it to the main.
    7.And the output we received is this:
*/
/*
#include <iostream>
using namespace std;
 
class vector
{
    public:
        int *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new int[size];
        }
    int dotProduct(vector &v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector v1(3); //vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
 
template <class T>
class vector
{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); //vector 2 with a float data type
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}
