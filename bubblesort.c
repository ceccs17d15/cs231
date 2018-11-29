Athira Suresh
Roll no:15
#include<stdio.h>
int main()
{ 	int a[10],i,j,temp,n;
        printf("enter the  no of elements to sort");
	scanf("%d",&n);
	printf("enter the elements ");
	for(i=0;i<n;i++)
	{ 
	 scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	 { if(a[i]>a[j])
	   { temp=a[i];
	     a[i]=a[j];
	     a[j]=temp;
	   }
	 }
	for(i=0;i<n;i++)
	{
	  printf("%d",a[i]);
	}
	return 0;

}
output:
user@user-HP-Laptop-15-da0xxx:~/Desktop$ gcc bubblesort.c
user@user-HP-Laptop-15-da0xxx:~/Desktop$ ./a.out
enter the max no of elements to sort4 
enter the elements1
7
8
2
1278user@user-HP-Laptop-15-da0xxx:~/Desktop$ 

 
