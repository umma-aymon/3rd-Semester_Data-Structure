#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],beg,end,mid,i,j,n,m;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    cin>>m;
    beg=1;
    end=n;
    mid=(beg+end)/2;
    while(beg<=end && a[mid]!=m)
    {
        if(m>a[mid])
            beg=mid+1;
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    if(a[mid]==m)
       cout<<"Found at position "<<mid<<endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}
