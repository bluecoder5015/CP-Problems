#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int temp, result = 0, pageNumber = 0;
    for(int i = 0; i < n; i++) {
	    cin>>temp;
	    pageNumber++; // increase for new chapter
        int x = 1;
        while(temp > 0) {
    	    temp--;
    	    if(x == pageNumber) {
    		    result++;
    	    }
    	    if(x%k == 0 && temp != 0) {
    		    pageNumber++; 
    	    }
    	    x++;
 	    }
   }
    cout<<result;
    return 0;
}