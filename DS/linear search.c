#include<stdio.h>
int main()
{
    int a[100],n,x,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&x);
        for(i=0;i<n;i++)
        {
            if(x==a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            printf("Found at %d\n",i+1);
        else
            printf("Not Found");
}
