  Athira Suresh
  Roll no:15

#include <stdio.h>
void main()
{
	int arr[]={12,23,78,98,67,56,45,19,65,9},key,i,flag=0;
	printf("ENTER A NUMBER ");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(key==arr[i])
			flag=1;
	}
	if(flag==1)
		printf("THE NUMBER %d EXISTS IN THE ARRAY",key);
	else
printf("THE NUMBER %d DOES NOT EXIST IN THE ARRAY",key);
}
output:

user@user-HP-Laptop-15-da0xxx:~/Desktop$ ./a.out
ENTER A NUMBER 3
THE NUMBER 3 DOES NOT EXIST IN THE ARRAY
ENTER A NUMBER 12
THE NUMBER 12 EXISTS IN THE ARRAY
