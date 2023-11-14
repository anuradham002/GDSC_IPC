#include <iostream>
#include<algorithm>
using namespace std;
void Duplicate(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"Duplicate element is: "<<arr[i]<<endl;
            break;
        }
    }
}
int main()
{
    int num;
    cin>>num;
	int arr[num];
	for (int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    Duplicate(arr,num);
	return 0;
}
