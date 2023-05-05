#include<stdio.h>

int count_before_zero(int ar[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0){
            return count;
        }else{
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int res=count_before_zero(ar,5);
    printf("%d", res);
    return 0;
}