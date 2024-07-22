// Break/Continue--->
//---1.break statement---
#include <iostream>
using namespace std;
 
int main()
{
    int num = 10;
    int i;
    for (i = 0; i < num; i++)
    {
        if (i == 6)
        {
            break;
        }
        cout << i << " " <<endl;

    }
 
    return 0;
}
