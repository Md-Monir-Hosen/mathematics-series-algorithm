#include<bits/stdc++.h>
using namespace std;
int recaman(int n)
{
 int a[n];
 a[0]=0;
 cout<<a[0];
 for(int i=1;i<n;i++)
 {
     int curr=a[i-1]-i;
     int j;
     for(j=0;j<i;j++)
     {
        if((a[j]==curr)||curr<0)
        {
            curr=a[i-1]+i;
            break;
        }
     }
     a[i]=curr;
     cout<<a[i]<<" ";
 }
}
int main()
{
     int n = 17;
    recaman(n);
    return 0;
}
