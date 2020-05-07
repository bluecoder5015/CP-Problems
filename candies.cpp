#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        double x;
        int k=2;
        while(1)
        {
            x=n/(pow(2,k)-1);
            if(ceil(x)==floor(x))
            {
                cout<<setprecision(10)<<x<<"\n";
                break;
            }
            k++;
        }
    }
}