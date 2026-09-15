#include<iostream>
using namespace std;

//Pass by reference
//Using pointer
void changeA(int* ptr){
    *ptr=20;
}
//Using alias
void changeA2(int &b){  //Address of a is passing
    b=30;
}

//Array pointer (Pass by reference by default)
void changeArray(int arr[]){   //By default arr pointing toward index 0
    arr[0]=3;
}

//Pointer arithmetic
void pointerArithmetic(){
    int a=4;
    int *ptr=&a;
    int *ptr2;
    int *ptr3;
    cout<<"Address before : "<<ptr<<endl;
    // Increment/Decrement
    ptr++;
    cout<<"Address after : "<<ptr<<endl;
    // Add/Subtraction
    cout<<"ptr3-ptr2 : "<<ptr3-ptr2<<endl;
    // Comparsion
    cout<<(ptr3>ptr2)<<endl;
    cout<<(ptr3<ptr2)<<endl;
}

int main(){
    int a=10;
    //Pointer
    int* ptr=&a;  // & used as Address operator
    cout<<"Address : "<<ptr<<endl;
    cout<<"Value : "<<*ptr<<endl;   // * used as dereferencing operator
    //Pointer to pointer
    int** parPtr=&ptr;
    cout<<"Address : "<<parPtr<<endl;
    cout<<"Value : "<<*parPtr<<endl;
    //Null pointer
    int* ptr2=NULL;
    cout<<"Address : "<<parPtr<<endl;
    //Pass the address in parameter
    changeA(&a);
    cout<<a<<endl;
    //Pass the value in alias
    changeA2(a);
    cout<<a<<endl;

    //Array
    int arr[]={1,1,1,1,1};
    changeArray(arr);
    cout<<"Address : "<<arr<<endl;
    cout<<"Value : "<<arr[0]<<endl;

    pointerArithmetic();

    return 0;
}