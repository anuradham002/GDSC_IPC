#include<iostream>
#include<vector>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size(),l2=nums2.size();
       
        int k;
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(nums1[i]==nums2[j]){
                    for( k=j+1;k<l2;k++){
                        if(nums2[k]>nums1[i]){
                            nums1[i]=nums2[k];
                            break;
                        }

                    }
                    if(k==l2)nums1[i]=-1;
                    break;

                }
            }

        }
        return nums1;
    }
int main()
{
    int l1,l2,num;
    vector<int> n1;
    vector<int> n2;
    cout<<"specify length of array n2: ";
    cin>>l2;
    cout<<"specify length of subarray: ";
    cin>>l1;
    cout<<"enter elements of array n2"<<endl;
    for(int i=0;i<l2;i++)
    {
        cout<<"enter "<<i+1<<"st"<<" element: ";
        cin>>num;
        n2.push_back(num);
    }
    cout<<"n2 array is: ";
    for(auto i=n2.begin();i!=n2.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
     cout<<"enter elements of sub-array n1"<<endl;
    for(int j=0;j<l1;j++)
    {
        cout<<"enter "<<j+1<<"st"<<" element: ";
        cin>>num;
        n1.push_back(num);
    }
    cout<<"sub-array n1 is: ";
    for(auto i=n1.begin();i!=n1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    n1=nextGreaterElement(n1,n2);
    cout<<"Output array is: ";
    for(auto i=n1.begin();i!=n1.end();i++)
    {
        cout<<*i<<" ";
    }
}
