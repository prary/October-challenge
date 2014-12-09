#include<bits/stdc++.h>
int main()
{
    int n,i=0,a,crr[1000]={0},drr[1000]={0};
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n],m;
    while(i<n)
    {
        scanf("%d",&a);
        arr[i]=a;
        crr[a]++;
        i++;
    }
    printf("Enter the size of array \n");
    scanf("%d",&m);
    int brr[m];i=0;
    while(i<n)
    {
        scanf("%d",&a);
        brr[i]=a;
        if(crr[a]>0)
        {
            crr[a]--;
            drr[a]++;
        }
        i++;
    }
    for(i=0;i<1000;i++)
    {
        if(drr[i]!=0)
            printf("Common elements %d and occurenece %d \n",i,drr[i]);
    }

    return 0;
}
