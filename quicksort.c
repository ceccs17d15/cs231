Athira suresh
Roll no:15

#include<stdio.h>
 void main()
 {
 int i,j,temp,beg,end,mid,item;
 int arr[]={34,67,23,1,89,2,36,12,20,61};
 printf("Enter value");
 for(i=0;i<=9;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<=9;i++)
 {
  for(j=i+1;j<=9;j++)
  {
   if(arr[i]>arr[j])
   {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
 }
 for(i=0;i<=9;i++)
 {
  printf("%d",arr[i]);
 }
 printf("Enter the number to find:");
 scanf("%d",&item);
 beg=0;
 end=9;
 mid=(int)(end+beg)/2;
 while(item!=arr[mid] && beg<=end)
 {
  if(item>arr[mid])
  {
   beg=mid+1;
  }
  else
  {
   end=mid-1;
  }
  mid=(int)(end+beg)/2;
 }
 if(beg<=end)
 {
  printf("Position is %d",mid+1);
 }
 else
  printf("Position may be become %d",mid+1);
 }
output:user@user-HP-Laptop-15-da0xxx:~/Desktop$ ./a.out
Enter the size of the array4
Enter the elements to be sorted3 5 1 7 
Sorted array1 3 5 7
