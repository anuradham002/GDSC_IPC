
#include <iostream> 
using namespace std; 
int main() 
{ 
int A[10];
cout << "Enter 10 elements in an array: ";
for(int i=0;i<10;i++)
{
    cin>>A[i];
}
int min=A[0];
for(int i=1;i<10;i++)
{
    if(A[i]<min)
    {
        min=A[i];
    }
}
int max=A[0];
for(int i=1;i<10;i++)
{
    if(A[i]>max)
    {
        max=A[i];
    }
}
cout<<"Minimum elt is: "<<min<<endl;
cout<<"Maximum elt is: "<<max;
}
