#include<stdio.h>
int main()
{
    int a[100],beg,end,mid,i,j,n,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
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
        printf("Found at %d\n",mid);
    else
         printf("Not Found");
    return 0;
}
