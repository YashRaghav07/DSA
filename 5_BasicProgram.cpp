#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//Count digits of a number
int countDigits(int n){
    int num=n,count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    return count;
}

//Reverse a number
int reverseNum(int n){
    int num=n,rev=0;
    while(num>0){
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    return rev;
}

//Check a number is palindrome or not
bool isPalindrome(int n){
    if(n==reverseNum(n)){
        return true;
    }
    return false;
}

//Check a number is armstrong or not
bool isArmstrong(int n){
    int num=n,sum=0,rem=0;
    while(num>0){
        rem=num%10;
        sum+=(rem*rem*rem);
        num/=10;
    }
    return sum==n;
}

//Print all divisiors of a number
vector<int> printDivisiors(int n){
    vector<int> v;
    int i=0;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }
    return v;
}

// Check a number is prime or not
bool isPrime(int n){
    int count=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) count++;
    }
    return count==0;
}

int GCDorHCF(int n,int m){
    for(int i=min(n,m);i>=1;i--){
        if((n%i==0)&&(m%i==0)){
            return i;
        }
    }
    //OR
    int a=n,b=m;
    while(a>0&&b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    return a;
}

int main(){
    // vector<int> v;
    // v=printDivisiors(36);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<isPrime(17);
    return 0;
}