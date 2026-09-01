#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    // Variable
    int x = 5;
    cout << x << endl;
    char y = 'A';
    cout << y << endl;
    double z = 3.14;
    cout << z << endl;
    float a = 2.5;
    cout << a << endl;
    bool b = true;
    cout << b << endl;

    cout<<"Type of variable x is "<<typeid(x).name()<<endl;
    cout<<"Type of variable y is "<<typeid(y).name()<<endl;
    cout<<"Type of variable z is "<<typeid(z).name()<<endl;
    cout<<"Type of variable a is "<<typeid(a).name()<<endl;
    cout<<"Type of variable b is "<<typeid(b).name()<<endl;

    //Type conversion and Type Casting
    int c = 10;
    double d = 20.5;
    c = int(d); // Type Casting
    cout << c << endl;

    //Operators

    //Arthematic Operators
    int e = 10;
    int f = 20;
    cout << "e + f = " << e + f << endl;
    cout << "e - f = " << e - f << endl;
    cout << "e * f = " << e * f << endl;
    cout << "e / f = " << e / f << endl;

    //Relational Operators
    cout << "e < f = " << (e < f) << endl;
    cout << "e > f = " << (e > f) << endl;
    cout << "e == f = " << (e == f) << endl;
    cout << "e != f = " << (e != f) << endl;

    //Logical Operators
    cout << "e && f = " << (e && f) << endl;
    cout << "e || f = " << (e || f) << endl;
    cout << "!e = " << !e << endl;

    //Bitwise Operators
    cout << "e & f = " << (e & f) << endl;
    cout << "e | f = " << (e | f) << endl;
    cout << "e ^ f = " << (e ^ f) << endl;

    //Unary Operators
    cout << "++e = " << ++e<<" "<< "e++ = " << e++ << endl;
    cout << "--f = " << --f <<" "<< "f-- = " << f--  << endl;

    return 0;
}