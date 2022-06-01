#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        vector<long long>v;
        long long n,evencnt,oddcnt;
        cin>>n;
        evencnt=0;
        oddcnt=0;
        while(n--)
        {
            int x;
            cin>>x;
            v.push_back(x);
            if(x%2==0)
            {
                evencnt++;
            }
            else
            {
                oddcnt++;
            }
        }
        if(evencnt>=oddcnt)
        {
            cout<<oddcnt<<endl;
        }
        else
        {
            cout<<evencnt<<endl;
        }
    }
}

