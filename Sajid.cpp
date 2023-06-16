#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int n,i;
    int x;
    int j;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Taking the specific number as input "<<endl;
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                 cout<<"output:" <<a[i]<<"+"<<a[j]<<"="<<x<<endl;
            }
        }
       
    }
    
     return 0;
}

        
