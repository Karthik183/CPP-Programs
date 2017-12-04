#include<stdio.h>
void main() {
int n,i,j;
printf("enter the size of array");
scanf("%d",&n);
int a[n],b[n];
printf("enter the values of array: \n");

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=0;
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		  if(a[i]==a[j])
	          b[i]++;
			}
		}

for(i=0;i<n;i++){
printf("%d \n",b[i]);
	}

int k;
printf("enter the value of k(frequency): \n");
scanf("%d",&k);
int min=2345;
int b=2;
for(i=0;i<n;i++){
if (b[i]==b&&a[i]<min)
min=a[i];
}
printf("the value is %d \n",min);
}
	
	
	
	
for(i=0;i<n;i++) {

printf("%d",a[i]);
 }
 

}
}
