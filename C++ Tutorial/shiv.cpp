#include<iostream>
using namespace std;

int main(){
    int row = 1;
    int arr[];
    
    while (row <= 5) {
        int col = 1;
        while (col <= row) {
            printf("%d ", col);
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
