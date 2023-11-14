#include <bits/stdc++.h> 
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(auto it = nums.begin(); it != nums.end();){
            if(*it == val){
                nums.erase(it);
            }else{
                k++;
                it++;
            }
        }
         return k;
    }
    int main()
    {   
        int n,a;
        cout<<"enter size of vector: "<<endl;
        cin>>n;
        vector<int> nums;
        int val;
        cout<<"enter vector elements: "<<endl;
        for(int i=0;i<n;i++)
        { 
            cin>>a;
            nums.push_back(a);
        }
       cout<<"enter the value: "<<endl;
       cin>>val;
       int ans=removeElement(nums,val);
       cout<<ans<<endl;
        for(auto x:nums)
        {
            cout<<x<<" ";
        }

    }
   
