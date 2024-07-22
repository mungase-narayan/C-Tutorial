#include<iostream>
using namespace std;
bool isprasent (int arr [][4], int target, int row, int col){
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}
int printsum(int arr[][4], int row, int col){
    cout<<"Printing Sum Row wise"<<endl;
    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<4; col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int LargestRowSum(int arr[][4], int row,int col){
    int maxi = INT_MIN;
    int Rowindex = -1;

    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<4; col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            Rowindex = row;
        }
    }
    cout<<"Largest Row Sum is "<< maxi << endl;
    return Rowindex;
}
int main (){
    cout<<"Enter Input For 2D Array";

    int arr[3][4];
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            cin>>arr[row][col];
        }
    }

    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter Target Value"<<endl;
    cin>>target;

    if(isprasent(arr, target, 3, 4)){
        cout<<"Target Value is Present"<<endl;
    }
    else{
        cout<<"Target Value is Not Present"<<endl;
    }
    cout<< printsum(arr, 3, 4)<<endl;
    int ansIndex = LargestRowSum(arr, 3, 4);
    cout << "Max row is at Index "<< ansIndex<<endl;

    return 0;
}