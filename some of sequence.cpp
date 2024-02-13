#include<bits/stdc++.h>
using namespace std;
float sumOfSeries(int n)
{
    return 0.02469*(10*(pow(10,n)-1)-(9*n));
}
int main()
{
    int n = 3;
    cout << sumOfSeries(n);
    return 0;
}
