#include<iostream>
using namespace std;

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
    signed int x = -10; //By default, int is signed
    unsigned int y = 10; // unsigned int can only hold positive values
    cout<<x<<endl;
    cout<<y<<endl;
    long int j = 1000000000; // long int can hold larger values than int
    cout<<j<<endl;
    long long int z = 10000000000; // long long int can hold larger values 
    cout<<z<<endl;
    long long m=100000000000; // long long can hold larger values than long int
    cout<<m<<endl;
    short int k = 100; // short int can hold smaller values than int
    cout<<k<<endl;

    return 0;
}