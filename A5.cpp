#include <iostream>
using namespace std;

void Duplicate(int arr[],int n)
{
    int duplicate;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                duplicate=arr[i];
            }
        }
        if(count>0)
        {
            cout<<"Duplicate element is: "<<duplicate<<endl;
        break;
        }
    }
    if(count==0)
    cout<<"No duplicate elt";
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
