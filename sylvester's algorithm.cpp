#include<bits/stdc++.h>
using namespace std;
#define N 1000000007
void printSequence(int n)
{
    int a=1;
    int ans=2;
    for(int i=0;i<n;i++)
    {
        cout<<ans<<" ";
        ans=((a%N)*(ans%N))%N;
        a=ans;
        ans=(ans+1)%N;
    }
}
int maiN()
{
    int n = 6;
    printSequence(n);
    return 0;
}
