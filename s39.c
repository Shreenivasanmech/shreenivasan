#include<stdio.h>  
#include<conio.h>
int main()
{
    int n,a[10],i,max=-999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    getch();
    return 0;
}
