#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,x,i,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        cin>>x;
        for(i=0;i<n;i++)
        {
            if(x==a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"Found at position "<<i+1<<endl;
        else
            cout<<"Not Found"<<endl;
}
