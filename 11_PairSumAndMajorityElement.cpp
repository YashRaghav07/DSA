#include <iostream>
#include <vector>
using namespace std;

// Pair Sum in Sorted array/vector   Input-{2,7,11,15} target-15 Return 7,11
// Brute force     Time complexity=O(n*n)
vector<int> pairSum(vector<int> vec, int target)
{
    vector<int> arr;
    int n=vec.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vec.at(i) + vec.at(j) == target)
            {
                arr.push_back(vec.at(i));
                arr.push_back(vec.at(j));
                return arr;
            }
        }
    }
    return arr;
}
//Two Pointer approach  Time complexity=O(n)
vector<int> pairSum2(vector<int> vec,int target){
    int i=0,j=vec.size()-1;
    vector<int> ans;
    while(i<j){
        if(vec[i]+vec[j]==target){
            ans.push_back(vec[i]);
            vec.push_back(vec[j]);
            return vec;
        }else if(vec[i]+vec[j]>target){
            j--;
        }else{
            i++;
        }
    }
    return ans;
}

//Majority Element  Input={2,2,1,1,1,2,2}  majority element occous >= n/2 times  resut 2
//Brute force  Time complixity=O(n*n)
int majorityElement(vector<int> vec){
    int n=vec.size();
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=i+1;j<n;j++){
            if(vec[i]==vec[j]){
                count++;
            }
        }
        if(count>=n/2){
            return vec[i];
        }
    }
    return -1;
}

//Moore's voting algorithm    Time complexity=O(n)
int majorityElement2(vector<int> vec){
    int freq=0,ans=0;
    for(int i=0;i<vec.size();i++){
        if(freq==0){
            ans=vec[i];
        }
        if(ans==vec[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target=9;
    vector<int> ans=pairSum2(vec,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    vector<int> vec2={2,2,1,1,1,2,2};
    cout<<majorityElement2(vec2);
    return 0;
}