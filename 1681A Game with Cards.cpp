#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        vector<int>v1,v2;
        while(n--)
        {
            int x;
            cin>>x;
            v1.push_back(x);
        }
        cin>>m;
        while(m--)
        {
            int y;
            cin>>y;
            v2.push_back(y);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int alice = v1[v1.size()-1];
        int bob = v2[v2.size()-1];
        if(alice>bob)
        {
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        else if (alice<bob)
        {
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        else if(alice==bob)
        {
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }


    }
}





