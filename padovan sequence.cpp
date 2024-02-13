#include<bits/stdc++.h>
using namespace std;
int pad(int n)
{
    int first=1,second=1,third=1,fourth=1;

    for(int i=3;i<=n;i++)
    {
        fourth=first+second;
        first=second;
        second=third;
        third=fourth;
    }
    return fourth;
}
int main()
{
    int n = 12;
    cout << pad(n);
    return 0;
}
