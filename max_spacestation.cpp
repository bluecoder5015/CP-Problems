#include<bits/stdc++.h>
int max_spacestation(int n,int m,int a[])
{
    int max=-9999999;
    if(n==m)
        return 0;
    for(int i=0;i<n;i++)
    {
        int min=999999;
        for(int j=0;j<m;j++)
        {
            if(abs(a[j]-i)<min)
                min=abs(a[j]-i);
        }
        if(min>max)
            max=min;
        
    }
    return max;
}
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<max_spacestation(n,m,a);
}