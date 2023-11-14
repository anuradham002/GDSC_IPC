// C++ Hello World Program 
#include <iostream> 
using namespace std; 
int main() 
{ 
int n;
cin>>n;
int A[n];
cout << "Enter "<<n<<" elements in an array: ";
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
int min=A[0];
for(int i=1;i<n;i++)
{
    if(A[i]<min)
    {
        min=A[i];
    }
}
int max=A[0];
for(int i=1;i<n;i++)
{
    if(A[i]>max)
    {
        max=A[i];
    }
}
int sum=0;
sum=max+min;
cout<<"Sum is: "<<sum;
}
