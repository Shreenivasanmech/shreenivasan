#include <stdio.h>
#include<conio.h>
int main() 
{
	char a[1000];
	int n,i,count=0;
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	   if(a[i]>='0' && a[i]<='9')
	    {
	        count++;
	    }
	}
	printf("%d",count);
  getch();
	return 0;
}
	    
