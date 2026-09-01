#include<iostream>
using namespace std;

//WAP to find a number is power of two or not
bool isPowerOfTwo(int n){
    bool is_True=false;
    int a=n;
    int pow=2;
    for(int i=0;i<n&&pow<n;i++){
        if(a%pow==0){
            is_True=true;
            break;
        }
        pow*=2;
    }
    return is_True;
}

//WAP to find a number is power of two or not using bitwise operator
bool isPowerOfTwoBitwise(int n){
    if(n==0){
        return false;
    }
    return (n&(n-1))==0;
}

//Reverse a number
int reverseANumber(int n){
    int num=0;
    int a=n;
    while(a>0){
        num=(num*10)+a%10;
        a=a/10;
    }
    return num;
}

int main(){
    // Bitwise AND operator
    int a=5; // 0101
    int b=3; // 0011
    cout<<(a&b)<<endl; // 0001 => 1

    // Bitwise OR operator
    cout<<(a|b)<<endl; // 0111 => 7

    // Bitwise XOR operator
    cout<<(a^b)<<endl; // 0110 => 6

    // Bitwise NOT operator
    cout<<(~a)<<endl; // 1010 => -6

    // Left shift operator
    cout<<(a<<1)<<endl; // 1010 => 10

    // Right shift operator
    cout<<(a>>1)<<endl; // 0010 => 2


    // Data type modifiers

    //By default, int is signed
    signed int x = -10; 
    cout<<x<<endl;
    
    // unsigned int can only hold positive values
    unsigned int y = 10; 
    cout<<y<<endl;

    // long int can hold larger values than int
    long int j = 1000000000; 
    cout<<j<<endl;

    // long long int can hold larger values 
    long long int z = 10000000000; 
    cout<<z<<endl;

    // long long can hold larger values than long int
    long long m=100000000000; 
    cout<<m<<endl;

    // short int can hold smaller values than int
    short int k = 100; 
    cout<<k<<endl;

    return 0;
}