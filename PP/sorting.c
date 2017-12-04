#include<stdio.h>
#include<stdlib.h>
int sum,temp=0;
int diff,k;

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

void main() {
int n,i;
printf("enter the size of the array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

qsort(a, n, sizeof(int), cmpfunc);
printf("elments after sorting is ");
for(i=0;i<n;i++){
sum=sum+a[i];
printf("the sum after evrey iteration is %d \n",sum);
printf("%d ->",a[i]);
}
printf("enter the number of elements");
scanf("%d",&k);
for(i=0;i<k;i++) {
temp=temp+a[i];
}
sum=sum-temp;

diff=sum-temp;
printf("the difference is %d",diff);



}
