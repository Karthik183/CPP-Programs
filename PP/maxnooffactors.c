#include<stdio.h>

int number(int c);
int max=1;
void main(){
int i,n,b;
int count=0;

int a[1000];
int j,k;
scanf("%d",&n);
for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
		}
		
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
		k=a[i]*a[j];
		b=number(k);
		
		}
		}
		
printf("count is: %d",max);
}

int number(int c) {
int i,b,count=0;
for(i=1;i<c+1;i++){

	if(c%i==0)
	count++;
	
         

	}
	if(count>max)
        	max=count;
        return 0;
}
