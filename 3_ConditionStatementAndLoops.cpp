#include<iostream>
using namespace std;

int main(){
    
    //Conditional statements
    int a = 10;
    int b = 20;
    if(a > b){
        cout << "a is greater than b" << endl;
    }
    else{
        cout << "a is not greater than b" << endl;
    }

    //If-else if-else statement
    int c = 30;
    if(c > b){
        cout << "c is greater than b" << endl;
    }
    else if(c < b){
        cout << "c is less than b" << endl;
    }
    else{
        cout << "c is equal to b" << endl;
    }

    // Q::Find character is uppercase or lowercase
    char ch = 'A';
    if(ch >= 'A' && ch <= 'Z'){
        cout << "Character is uppercase" << endl;
    }
    else{
        cout << "Character is lowercase" << endl;
    }
    //Or
    if(ch >= 65 && ch <= 90){
        cout << "Character is uppercase" << endl;
    }
    else{
        cout << "Character is lowercase" << endl;
    } 


    //Ternary statement
    int num1 = 5;
    int num2 = 10;
    int max = (num1 > num2) ? num1 : num2;
    cout << "Maximum of " << num1 << " and " << num2 << " is " << max << endl;


    //While loop
    int i = 0;
    while(i < 5){
        cout << "i: " << i << endl;
        i++;
    }

    // Q:: Check if the number is prime or not by While loop
    int num = 17;
    bool isPrime = true;
    int j = 2;
    while(j <= num/2){
        if(num % j == 0){
            isPrime = false;
            break;
        }
        j++;
    }
    if(isPrime){
        cout << num << " is a prime number" << endl;
    }
    else{
        cout << num << " is not a prime number" << endl;
    }


    //For loop
    for(int j = 0; j < 5; j++){
        cout << "j: " << j << endl;
    }

    //Do-while loop
    int k = 0;
    do{
        cout << "k: " << k << endl;
        k++;
    }while(k < 5);

    //Nested loops
    for(int m = 0; m < 3; m++){
        for(int n = 0; n < 3; n++){
            cout << "m: " << m << ", n: " << n << endl;
        }
    }
    

    return 0;
}