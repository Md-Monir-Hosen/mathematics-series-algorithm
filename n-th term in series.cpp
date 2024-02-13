#include<bits/stdc++.h>
using namespace std;
int nthTerm(int n)
{
    return (n*n)+(n*n*n);
}
int main()
{
  int n = 4;
    cout << nthTerm(n);
    return 0;
}
