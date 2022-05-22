#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  num,c=0;
        vector<int>v;
        cin>>num;
        long long x=num;
        while(x > 0)
        {
            int mod = x % 10;
            v.push_back(mod);
            c++;
            x = x / 10;
        }
        sort(v.begin(),v.end());
        if(c==2)
        {
            cout<<num%10<<endl;
        }
        else
        {
            cout<<v[0]<<endl;
        }
    }
}




