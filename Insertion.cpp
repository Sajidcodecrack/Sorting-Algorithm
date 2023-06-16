#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int n,i;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Taking input from user : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(a[j]<key && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"Applying the insertion algorithm "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}