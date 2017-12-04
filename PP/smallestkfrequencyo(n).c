#include<stdio.h>
void main(){
int i,j,n;
printf("enter the maximum element  of the array");
scanf("%d",&n);
int b;
printf("enter the frequency of the element");
scanf("%d",&b);
int a[10000];

for(i=0;i<n;i++){
a[i]=0;
}
int k;
printf("enter the elements in the array");
	for(i=0;i<n;i++){
		scanf("%d",&k);
		a[k]++;
		}
	
for(i=0;i<n;i++){
printf("%d \n",a[i]);
}

int min=10000;
for(i=0;i<n;i++){
if(a[i]==b&&i<min)
 min=i;
}
printf("the value with the frequency %d is : %d",b,min);


}



