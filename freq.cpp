#include<bits/stdc++.h>
int main()
{
    int n,i=0,brr[10000],a;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    memset(brr,0,sizeof(brr));
    while(i<n)
    {
        scanf("%d",&a);
        arr[i]=a;
        brr[a]++;
        i++;
    }
    i=0;
    while(i<n)
    {
        if(brr[arr[i]]!=0)
        {
            printf("%d occured %d times\n",arr[i],brr[arr[i]]);
            brr[arr[i]]=0;
        }
        i++;
    }
    return 0;
}
