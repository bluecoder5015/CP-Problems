#include<bits/stdc++.h>
using namespace std;
void swap_array(int n,int a[])
{
    int swap=0,v1,v2;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap++;
                v1=i;
                v2=j;
            }
        }
    }
    if(swap==1)
    {
        cout<<"yes\n"<<"swap "<<v1+1<<" "<<v2+1;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    swap_array(n,a);
}