#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[61];
    a[1]="one";
    a[2]="two";a[3]="three";
    a[4]="four";
    a[5]="five";
    a[6]="six";
    a[7]="seven";
    a[8]="eigth";
    a[9]="nine";
    a[10]="ten";
    a[11]="eleven";
    a[12]="twelve";
    a[13]="thirteen";
    a[14]="fourteen";
    a[15]="fifteen";
    a[16]="sixteen";
    a[17]="seventeen";
    a[18]="eighteen";
    a[19]="nineteen";
    a[20]="twenty";
    a[21]="twenty one";
    a[22]="twenty two";
    a[23]="twenty three";
    a[24]="twenty four";
    a[25]="twenty five";
    a[26]="twenty six";
    a[27]="twenty seven";
    a[28]="twenty eigth";
    a[29]="twenty nine";
   
    int h,m;
    cin>>h>>m;
    if(m==0)
        cout<<a[h]<<" o' clock";
    else if(m<30)
    {
        if(m==15)
            cout<<"quarter past "<<a[h];
        else if(m==1)
            cout<<a[m]<<" minute past "<<a[h];
        else
            cout<<a[m]<<" minutes past "<<a[h];
    }
    else if(m==30)
        cout<<"half past "<<a[h];
    if(m>30)
    {
        if(m==45)
            cout<<"quarter to "<<a[h+1];
        else
            cout<<a[60-m]<<" minutes to "<<a[h+1];
    }

}
