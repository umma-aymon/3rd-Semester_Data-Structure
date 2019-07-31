#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,i,j,temp=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i]; //9 1 8 2 7 3 6 4 10 5
    for(i=0; i<n-1; i++)
    {
        int min=i;
        for(j=i+1; j<n; j++)
            if(a[j]<a[min])
                min=j;
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(i=0; i<n; i++)
        cout<<a[i]<<" "; // 1 2 3 4 5 6 7 8 9 10
    return 0;
}

