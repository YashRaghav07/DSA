#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Create a vector of integers
    vector<int> vec;
    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    //Remove element from the vector
    vec.pop_back();
    //Value on front of the vector
    cout<<"Front element is "<<vec.front()<<endl;
    //Value on back of the vector
    cout<<"Back element is "<<vec.back()<<endl;
    //Value at any index of the vector
    cout<<"Element at 1 index is "<<vec.at(1)<<endl;
    //Display the size
    cout<<"Size of vector is "<<vec.size()<<endl;
    //Display the capacity of the vector
    cout<<"Capacity of vector is "<<vec.capacity()<<endl;
    // Display the elements of the vector
    for(int i : vec){
        cout << i << " ";
    }
    cout<<endl;
    //Vector initilization
    vector<int> vec2={1,2,3};

    //Vector initilization with size and value
    vector<int> vec3(4,1); //4 is the size and 1 is element at all indice

    for(int i: vec3){
        cout<<i<<" ";
    }
    return 0;
}