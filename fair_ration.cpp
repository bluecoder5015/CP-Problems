#include <bits/stdc++.h>

using namespace std;
// Complete the fairRations function below.
void fairRations(int n,int a[]) {
    int bread=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]%2!=0)
        {
            a[i]++;
            a[i+1]++;
            bread+=2;
        }
    }
    if(a[n-1]%2==0)
        cout<<bread;
    else
        cout<<"NO";;

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
    fairRations(n,a);
}