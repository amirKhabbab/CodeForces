#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
        {
            if(cnt==0)
            {
                sum++;
            }
            else
            {
                cnt--;
            }

        }
        else
        {
            cnt+=arr[i];
        }
    }
    cout<<sum<<endl;
}
