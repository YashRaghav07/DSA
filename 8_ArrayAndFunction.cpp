#include<iostream>
using namespace std;

int main(){
    //Array defination
    int marks[5];
    //Array initialization
    // marks[0]=10;
    // marks[1]=20;
    // marks[2]=30;
    // marks[3]=40;
    // marks[4]=50;
    
    cout<<"Enter values for the array: ";
    //Input an array
    for(int i=0;i<sizeof(marks);i++){
        cin>>marks[i];
    }
    //Print an array
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }
    return 0;
}