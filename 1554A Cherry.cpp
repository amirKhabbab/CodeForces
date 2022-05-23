#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>v;
        vector<long long>vv;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=1;i<n;i++)
        {
            vv.push_back(v[i]*v[i-1]);
        }
        sort(vv.begin(),vv.end(),greater<int>());
        cout<<*max_element(vv.begin(),vv.end())<<endl;
    }
}
