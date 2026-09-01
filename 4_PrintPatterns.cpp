#include<iostream>
using namespace std;

int main(){

    /*Write a C++ program to print the following pattern using nested for loop.
                      1 2 3 
                      4 5 6
                      7 8 9
    
    */
    int n=3;
    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    cout<<endl;

/* Write a c++ program to print the following pattern
                    A
                    B B
                    C C C
                    D D D D
                    E E E E E
*/

char m='E';
for(char i='A'; i<=m; i++){
    for(char j='A'; j<=i; j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
cout<<endl;

/* Write a c++ program to print the following pattern
                    1 
                    1 2 
                    1 2 3 
                    1 2 3 4 
*/

int c=4;
    for(int i=1; i<=c; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

     /* Write a c++ program to print the following pattern
                    1 
                    2 1  
                    3 2 1 
                    4 3 2 1 
*/

    int d=4;
    for(int i=1; i<=d; i++){
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    /* Write a c++ program to print the following pattern (Floyd's Triangle pattern)
                    1 
                    2 3 
                    4 5 6 
                    7 8 9 10 
*/
int x=4;
int y=1;
for(int i=1; i<=x; i++){
    for(int j=1; j<=i; j++){
        cout<<y<<" ";
        y++;
    }
    cout<<endl;
}
cout<<endl;

/* Write a c++ program to print the following pattern
                    1 1 1 1
                      2 2 2
                        3 3
                          4 
*/
int z=4;
for(int i=1;i<=z;i++){
    for(int j=1;j<i;j++){
        cout<<" "<<" ";
    }
    for(int j=z;j>=i;j--){
        cout<<i<<" ";
    }
    cout<<endl;
}
cout<<endl;

/* Write a c++ program to print the following pattern
                          1
                        1 2 1
                      1 2 3 2 1
                    1 2 3 4 3 2 1  
*/
int k=4;
for(int i=1;i<=k;i++){
    for(int j=i;j<k;j++){
        cout<<" "<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    for(int j=i-1;j>=1;j--){
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<endl;
/* Write a c++ program to print the following pattern
                       *
                     *   *
                   *       *
                 *           *
                   *       *
                     *   *
                       *
*/
int h=4;
for(int i=1;i<=h;i++){
    for(int j=h;j>i;j--){
        cout<<" "<<" ";
    }
    cout<<"*"<<" ";
    // for(int j=1;j<i;j++){
    //     cout<<" "<<" ";
    // }
    // for(int j=2;j<i;j++){
    //     cout<<" "<<" ";
    // }
    if(i>1){
    for(int j=1;j<=2*(i-1)-1;j++){
        cout<<" "<<" ";
    }
}
    if(i>1){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
for(int i=1;i<h;i++){
    for(int j=1;j<=i;j++){
        cout<<" "<<" ";
    }
    cout<<"*"<<" ";
    for(int j=1;j<=2*(h-i)-1;j++){
        cout<<" "<<" ";
    }
    
    if(i<h-1){
        cout<<"*"<<" ";
    }
    cout<<endl;
}

    return 0;
}