#include<iostream>
using namespace std;

//WAP to return largest element in an array
 int largest(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
 }

 //WAP to return index of smallest number in an array
int smallestIndex(int arr[], int n) {
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

//Linear Search in an array
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target is not found
}

//Reverse an array by Two Pointer Approach
void reverseArray(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    while (left < right) {
        // Swap elements at left and right indices
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        // Move the pointers towards the center
        left++;
        right--;
    }
}

//WAP to swap the max and min no of an array
void swapMaxMin(int arr[],int n){
    int maxIndex = largest(arr,n); ;
    int minIndex = smallestIndex(arr, n);
    // Swap the elements at maxIndex and minIndex
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

//WAP to print all unique elements of an array
void printUniqueElements(int arr[], int n) {
    cout << "Unique elements in the array: ";
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
//WAP to print intersection of two arrays
void printIntersection(int arr1[], int n1, int arr2[], int n2) {
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; // Move to the next element in arr1 after finding a match
            }
        }
    }
    cout << endl;
}

int main(){
    //Array defination
    int marks[5];
    //Array initialization
    // marks[0]=10;
    // marks[1]=20;
    // marks[2]=30;
    // marks[3]=40;
    // marks[4]=50;
    
    cout<<"Enter values for the array: ";
    //Input an array
    for(int i=0;i<sizeof(marks);i++){
        cin>>marks[i];
    }
    //Print an array
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }
    return 0;
}