#include<stdio.h>

main()

{
	int a[100],n,sq,i;
	int *p;
	
	printf("enter the array = ");
	scanf("%d",5
	&n);
	
	p=&a;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]%u=>%d\n",i,p,a[i]*a[i]);
	}
}
