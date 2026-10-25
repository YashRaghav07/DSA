#include <iostream>
using namespace std;

void printPattern1(int n)
{
    /*
                      * * * *
                      * * * *
                      * * * *
                      * * * *

    */
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern2(int n)
{
    /*
         *
         * *
         * * *
         * * * *
         * * * * *
     */
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern3(int n)
{
    /*
                    1
                    1 2
                    1 2 3
                    1 2 3 4
                    1 2 3 4 5
*/
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void printPattern4(int n)
{/*
                    1
                    2 2 
                    3 3 3
                    4 4 4 4
                    5 5 5 5 5
*/
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void printPattern5(int n)
{
    /*
                    * * * * *
                    * * * *
                    * * *
                    * *
                    * 
*/
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}

void printPattern6(int n){
    /*
                    1 2 3 4 5
                    1 2 3 4
                    1 2 3
                    1 2
                    1
*/
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        cout<<i+1<<" ";
    }
    cout<<endl;
}
}

void printPattern7(int n){
    /*
                    *
                  * * *
                * * * * *
              * * * * * * *
            * * * * * * * * *
*/
int i,j;
for(i=0;i<n;i++){
    //spaces
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    //stars
    for(j=0;j<(2*i)+1;j++){
        cout<<"*";
    }
    //spaces
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
}
}

void printPattern8(int n){
    /*
            * * * * * * * * *
              * * * * * * *
                * * * * * 
                  * * * 
                    *
*/
int i,j;
for(i=0;i<n;i++){
    //spaces
    for(j=0;j<i;j++){
        cout<<" ";
    }
    //stars
    for(j=0;j<2*(n-i)-1;j++){
        cout<<"*";
    }
    //spaces
    for(j=0;j<i;j++){
        cout<<" ";
    }
    cout<<endl;
}
}

void printPattern9(int n){
    /*
                    *
                  * * *
                * * * * *
              * * * * * * *
            * * * * * * * * *
            * * * * * * * * * 
              * * * * * * *
                * * * * *
                  * * *
                    * 
    */
   int i,j,k=n/2-1;
   for(i=0;i<n;i++){
    if(i<n/2){
        //spaces
        for(j=0;j<n/2-i-1;j++){
            cout<<" ";
        }
        //stars
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //spaces
        for(j=0;j<n/2-i-1;j++){
            cout<<" ";
        }
    }else{
        //spaces
        for(j=0;j<i-n/2;j++){
            cout<<" ";
        }
        //stars
        for(j=0;j<n-i+k;j++){
            cout<<"*";
        }
        //spaces
        for(j=0;j<i-n/2;j++){
            cout<<" ";
        }
        k--;
    }
    cout<<endl;
   }
}

void printPattern10(int n){
    /*
                *
                * *
                * * *
                * * * *
                * * * * *
                * * * * 
                * * *
                * *
                * 
    */
   int i,j,k=n/2-2;
   for(i=0;i<n;i++){
    // if(i<=n/2){
    //     //Upper stars
    //     for(j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    // }else{
    //     //Lower stars
    //     for(j=0;j<i-n/2+k;j++){
    //         cout<<"* ";
    //     }
    //     k=k-2;
    // }
    int stars;
    //OR
    if(i<=n/2) stars=i+1;
    if(i>n/2) stars=n-i;
    for(j=0;j<stars;j++){
        cout<<"*";
    }
    cout<<endl;
   }
}

void printPattern11(int n){
    /*
                1
                0 1
                1 0 1
                0 1 0 1
                1 0 1 0 1
    */
   int i,j,f;
   for(i=0;i<n;i++){
    i%2==0?f=1:f=0;
    for(j=0;j<=i;j++){
        if(f==1){
            cout<<f<<" ";
            f--;
        }else{
            cout<<f<<" ";
            f++;
        }
    }
    cout<<endl;
   }
}

void printPattern12(int n){
    /*
                1        1
                12      21
                123    321
                1234  4321
                1234554321
    */
   int i,j;
   for(i=0;i<n;i++){
    //First part
    for(j=0;j<=i;j++){
        cout<<j+1;
    }
    //Spaces
    for(j=0;j<2*(n-i-1);j++){
        cout<<" ";
    }
    //Second part
    for(j=i;j>=0;j--){
        cout<<j+1;
    }
    cout<<endl;
   }
}

void printPattern13(int n){
    /*
                1
                2 3 
                4 5 6
                7 8 9 10
                11 12 13 14 15
    */
   int i,j,f=1;
   for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        cout<<f<<" ";
        f++;
    }
    cout<<endl;
   }
}

void printPattern14(int n){
    /*
                A
                A B
                A B C
                A B C D
                A B C D E
    */
   int i;
   char j;
   char ch='A';
   for(i=0;i<n;i++){
    for(j='A';j<='A'+i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
   }
}

void printPattern15(int n){
    /*
                A B C D E
                A B C D 
                A B C
                A B 
                A
    */
   int i;
   char j;
   for(i=0;i<n;i++){
    for(j='A';j<=('A'+n)-i-1;j++){
        cout<<j<<" ";
    }
    cout<<endl;
   }
}

void printPattern16(int n){
    /*
                A
                B B
                C C C
                D D D D
                E E E E E
    */
   int i,j;
   for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        cout<<char('A'+i);
    }
    cout<<endl;
   }
}

void printPattern17(int n){
    /*
                A
               ABA
              ABCBA
             ABCDCBA
            ABCDEDCBA    
    */
   int i,j;
   char ch;
   for(i=0;i<n;i++){
    //Spaces
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    //First half
    for(ch='A';ch<='A'+i;ch++){
        cout<<ch;
    }
    //Second half
    for(ch='A'+i-1;ch>='A';ch--){
        cout<<ch;
    }
    //Spaces
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
   }
}

void printPattern18(int n){
    /*
            E
            D E
            C D E
            B C D E
            A B C D E   
    */
   int i;
   char j;
   for(i=0;i<n;i++){
    for(j='E'-i;j<='E';j++){
        cout<<j<<" ";
    }
    cout<<endl;
   }
}

void printPattern19(int n){
    /*
            **********
            ****  ****
            ***    ***
            **      **
            *        *
            **      **
            ***    ***
            ****  ****
            **********    
    */
   int i,j,k=n-2;
   for(i=0;i<n;i++){
    if(i<n/2){
        //Stars
        for(j=0;j<n/2-i;j++){
            cout<<"*";
        }
        //Spaces
        for(j=0;j<2*i;j++){
            cout<<" ";
        }
        //Stars
        for(j=0;j<n/2-i;j++){
            cout<<"*";
        }
    }else{
        //Stars
        for(j=0;j<i-n/2+1;j++){
            cout<<"*";
        }
        //Spaces
        for(j=0;j<n/2-i+k;j++){
            cout<<" ";
        }
        k--;
        //Stars
        for(j=0;j<i-n/2+1;j++){
            cout<<"*";
        }
    }
    cout<<endl;
   }
}

void printPattern20(int n){
    /*
            *        *
            **      **
            ***    ***
            ****  ****
            **********
            ****  ****
            ***    ***
            **      **
            *        *    
    */
   int i,j,k=0;
   for(int i=0;i<n;i++){
    if(i<=n/2){
        //Stars
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        //Spaces
        for(j=0;j<n-2*i-1;j++){
            cout<<" ";
        }
        //Stars
        for(j=0;j<=i;j++){
            cout<<"*";
        }
    }else{
        //Stars
        for(j=i;j<n;j++){
            cout<<"*";
        }
        //Spaces
        for(j=0;j<=i-n/2+k;j++){
            cout<<" ";
        }
        k++;
        //Stars
        for(j=i;j<n;j++){
            cout<<"*";
        }
    }
    cout<<endl;
   }
}

void printPattern21(int n){
    /*
            * * * *
            *     *
            *     *
            *     *
            * * * *    
    */
   int i,j;
   for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
        if(i==0||i==n-1||j==0||j==n-1){
            cout<<"*";
        }else{
            cout<<" ";
        }
        }
        cout<<endl;
   }
}

void printPattern22(int n){
    /*
            4 4 4 4 4 4 4               0 0 0 0 0 0 0
            4 3 3 3 3 3 4               0 1 1 1 1 1 0
            4 3 2 2 2 3 4               0 1 2 2 2 1 0
            4 3 2 1 2 3 4      ->       0 1 2 3 2 1 0
            4 3 2 2 2 3 4               0 1 2 2 2 1 0
            4 3 3 3 3 3 4               0 1 1 1 1 1 0
            4 4 4 4 4 4 4               0 0 0 0 0 0 0
    */
   int i,j;
   for(i=0;i<2*n-1;i++){
    for(j=0;j<2*n-1;j++){
        int top=i;
        int left=j;
        int bottom=2*n-2-i;
        int right=2*n-2-j;
        cout<<n-min(min(top,bottom),min(left,right));
    }
    cout<<endl;
   }
}

void printPattern23(int n){
    /* Write a c++ program to print the following pattern
                 *
                 *  *
                 *     *
                 *        *
                 *     *
                 *  *
                 *
     */
    int i,j,spaces;
    for(i=0;i<n;i++){
        cout<<"*";
        if(i<=n/2) spaces=2*i-1;
        else spaces=n-i;
        for(j=0;j<spaces;j++){
            cout<<" ";
        }
        if(i!=0&&i!=n-1) cout<<"*";
        cout<<endl;
    }
}

int main()
{

    int n=7;
    printPattern23(n);

    return 0;
}