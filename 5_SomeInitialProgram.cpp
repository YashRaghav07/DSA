#include<iostream>
using namespace std;

//Find the sum of digits of a number
int sumOfDigit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

// Find factorial
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

// Calculate nCr
float Calculate_nCr (int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

//Write a program to check if a number is prime or not
bool isPrime(int n){
    bool isprime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    return isprime;
}

//Write a program to print all prime number from 2 to N
void printPrimeNo(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)==true){
            cout<<i<<" ";
        }
    }
}

//Write a program to print nth fibonacci number 0 1 1 2 3 5 8 13 21
int fibonacci(int n){
    int a=0;
    int b=1;
    int sum=0;
    for(int i=3;i<=n;i++){
        sum+=a;
        sum+=b;
        a=b;
        b=sum;
        sum=0;
    }
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }
    return b;
}

// WAP to print fibonacci series upto nth term
void printFibonacciSeries(int n){
    for(int i=1;i<=n;i++){
        if(i<n){
        cout<<fibonacci(i)<<" , ";
        }else{
            cout<<fibonacci(i);
        }
    }
}

int main(){
    int n;
    cout<<"Enter number to find out that it is Prime or not : ";
    cin>>n;
    printFibonacciSeries(n);
    return 0;
}