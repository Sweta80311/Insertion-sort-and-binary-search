#include<stdio.h>
#include<stdlib.h>
void insertion(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
Element(a,n);
}
void Element(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
int binarySearch(int a[],int n,int data)
{
int r=n-1,l=0,mid;

while(l<r)
{
    mid=(l+r)/2;
if(data==a[mid])
    return mid;
else if(data>a[mid])
    l=mid+1;
else if(data<a[mid])
    r=mid-1;
}
if(l>r)
return -1;
}
void main()
{
int a[6],i,n=6,res;
printf("Insert element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
Element(a,n);
printf("\n");
insertion(a,n);
printf("\n");
res=binarySearch(a,n,56);
printf("The data is present at position %d\n",res);
}
