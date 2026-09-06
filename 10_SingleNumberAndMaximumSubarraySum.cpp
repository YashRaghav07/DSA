#include<iostream>
#include<vector>
using namespace std;

//Single Number problem Input-[4,1,2,1,2] Result-4
int singleNumber(vector<int> &nums){
    int n=0;
    for(int i : nums){
        n^=i;
    }
    return n;
}

//Print Maximum Subarray Sum Input-[3,-4,5,4,-1,7,-8] Result-15
// 1. Brute force
int maximumSubarraySum(vector<int> &nums){
    int sum=0;
    int maxSum=0;
    for(int i=0;i<nums.size();i++){
        sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums.at(j);
            maxSum=max(sum,maxSum);
        }
    }
    return maxSum;
}

// 2. By kadane's Algorithm
int maximumSubarraySum2(vector<int> &nums){
    int sum=0;
    int maxSum=0;
    for(int i : nums){
        sum+=i;
        maxSum=max(sum,maxSum);
        if(sum<0){
            sum=0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums={4,1,2,1,2};
    cout<<singleNumber(nums)<<endl;
    vector<int> nums2={3,-4,5,4,-1,7,-8};
    cout<<maximumSubarraySum(nums2)<<endl;
    return 0;
}