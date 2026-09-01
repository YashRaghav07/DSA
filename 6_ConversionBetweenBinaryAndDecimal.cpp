#include<iostream>
using namespace std;

// WAP to convert decimal to binary
int decimalToBinary(int n){
    int bin=0;
    int pow=1;
    while(n>0){
        bin+=(n%2)*pow;
        n=n/2;
        pow*=10;
    }
    return bin;
}

// int pow(int a,int b){
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans*=a;
//     }
//     return ans;
// }

// WAP to convert binary to decimal
int binaryToDecimal(int n){
    int dec=0;
    int pow=1;
    while(n>0){
        dec+=(n%10)*pow;
        n=n/10;
        pow*=2;
    }
    return dec;
}

int main(){
    int n=1001;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}