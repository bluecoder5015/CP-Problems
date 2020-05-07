#include <bits/stdc++.h>
#define loop(i,x,n) for(int i=x;i<n;i++)
using namespace std;

string larrysArray(vector<int> A) {
    int inv=0;
    loop(i,0,A.size())
    {
        loop(j,i,A.size())
        {
            if(A[i]>A[j])
                inv++;
        }
    }
    if(inv%2==0)
        return "YES";
    else
        return "NO";

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        vector<int>A{n};
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            A.push_back(temp);
        }
        cout<<larrysArray(A)<<endl;
    }
}