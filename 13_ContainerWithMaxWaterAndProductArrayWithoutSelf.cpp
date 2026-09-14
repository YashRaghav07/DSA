#include<iostream>
#include<vector>
using namespace std;

//Container with maximum water
//Brute force
int containerWithMaxWater(vector<int> vec){
    int maxWater=0,currWater=0,ht=0,w=0;
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            w=j-i;
            vec[i]<vec[j]?ht=vec[i]:ht=vec[j];
            currWater=w*ht;
            maxWater>currWater?maxWater=maxWater:maxWater=currWater;
        }
    }
    return maxWater;
}

// Two pointer approach
int containerWithMaxWater2(vector<int> vec){
    int maxWater=0,currWater=0,w=0,ht=0;
    int lp=0,rp=vec.size()-1;
    while(lp<rp){
        w=rp-lp;
        ht=vec[lp]<vec[rp]?vec[lp]:vec[rp];
        currWater=w*ht;
        maxWater=maxWater<currWater?currWater:maxWater;
        vec[lp]<vec[rp]?lp++:rp--;
    }
    return maxWater;
}

//Product of array without self
//Brute force
vector<int> productOfArrayWithoutSelf(vector<int> num){
    vector<int> ans(num.size(),1);
    for(int i=0;i<num.size();i++){
        for(int j=0;j<num.size();j++){
            if(i!=j){
                ans[i]*=num[j];
            }
        }
    }
    return ans;
}

// Optimal approach (by suffix and prefix array)
vector<int> productOfArrayWithoutSelf2(vector<int> num){
    vector<int> ans(num.size(),1);
    // vector<int> suffix(num.size(),1);
    // vector<int> prefix(num.size(),1);

    for(int i=1;i<num.size();i++){
        // prefix[i]=prefix[i-1]*num[i-1];
        ans[i]=ans[i-1]*num[i-1];
    }
    int suffix=1;
    for(int i=num.size()-2;i>0;i--){
        // suffix[i]=suffix[i+1]*num[i+1];
        suffix*=num[i+1];
        ans[i]*=suffix;
    }

    // for(int i=0;i<num.size();i++){
    //     ans[i]=prefix[i]*suffix[i];
    // }
    return ans;
}


int main(){
    vector<int> vec={1,8,6,2,5,4,8,3,7};
    // cout<<containerWithMaxWater2(vec);
    vector<int> num={1,2,3,4};
    vector<int> ans=productOfArrayWithoutSelf2(num);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}