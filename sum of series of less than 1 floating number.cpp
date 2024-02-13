#include<bits/stdc++.h>
using namespace std;
float sumOfSeries(int n)
{
    return (0.666)*(1-1/pow(10,n));
}
int main()
{
     int n = 2;
    cout << sumOfSeries(n);
}
