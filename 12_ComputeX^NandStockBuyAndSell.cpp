#include<iostream>
#include<vector>
using namespace std;

//Compute X^n
//Brute force
int xToThePowerN(int x,int n){
    int pow=1;
    for(int i=1;i<=n;i++){
        pow=pow*x;
    }
    return pow;
}

//Binary Exponentation 
int xToThePowerN2(int x,int n){
    if(x==0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }

    if(n<0){
        x=1/x;
        n=-n;
    }
    int bin=n;
    int ans=1;
    while(bin>0){
        if(bin%2==1){
            ans+=x;
        }
        x*=x;
        bin=bin/2;
    }
    return ans;
}

//Stock buy and sell
int buyAndSellStock(int *arr,int n){
    int bestBuy=arr[0];
    int maxProfit=0;
    for(int i=1;i<n;i++){
        if(bestBuy>arr[i]){
            bestBuy=arr[i];
        }
        if(maxProfit<arr[i]-bestBuy){
            maxProfit=arr[i]-bestBuy;
        }
    }
    return maxProfit;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<buyAndSellStock(arr,n);
    // int a=xToThePowerN(3,5);
    // cout<<a;
    return 0;
}