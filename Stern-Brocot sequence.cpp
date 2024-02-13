#include<bits/stdc++.h>
using namespace std;
void SternSequenceFunc(vector<int>&BrocotSquence,int n)
{
    for(int i=1;BrocotSquence.size()<n;i++)
    {
       int considered_element=BrocotSquence[i];
       int precedent=BrocotSquence[i-1];
       BrocotSquence.push_back(considered_element+precedent);
       BrocotSquence.push_back(considered_element);
    }
    for(int i=0;i<15;++i)
    {
        cout<<BrocotSquence[i]<<" ";
    }
}
int main()
{
     int n = 15;
    vector<int> BrocotSequence;
    BrocotSequence.push_back(1);
    BrocotSequence.push_back(1);

    SternSequenceFunc(BrocotSequence, n);

    return 0;
}
