#include <iostream>
using namespace std;

int main(){
    //Area of square
    cout<<"Enter the side of square: ";
    int side;
    cin>>side;
    int area=side*side;
    cout<<"Area of square is "<<area<<endl;

    //Is number even or odd
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    if(num%2==0){
        cout<<"The number is even"<<endl;
    } else {
        cout<<"The number is odd"<<endl;
    }

    //Sum of first numbers
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"Sum of first "<<n<<" numbers is "<<sum<<endl;

    //Is the number prime or not
    cout<<"Enter a number: ";
    int prime;
    cin>>prime;
    bool isPrime=true;
    if(prime<=1){
        isPrime=false;
    } else {
        for(int i=2; i*i<=prime; i++){
            if(prime%i==0){
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<"The number is prime"<<endl;
    } else {
        cout<<"The number is not prime"<<endl;
    }
    return 0;
}
