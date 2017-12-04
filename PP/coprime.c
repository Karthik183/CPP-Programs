#include<stdio.h>
int hcf(int a,int b);

void main()
{
int a,b,c;
printf("enter the values to be checked\n");
scanf("%d %d",&a,&b);
c= hcf(a,b);
printf("%d",c);

}
int hcf(int a, int h) 



{
    int temp; 
    while(1)
    {
        temp = a%h;
        if(temp==0)
        return h;
        a = h;
        h = temp;
    }
}


for(i=0;i<n;i++){
for(j=0;j<n;i++){
while(a[i]!=a[j])
int temp

int temp; 
    while(1)
    {
        temp = a[i]%a[j];
        if(temp==0)
        return a[j];
        a = a[j];
        a[j] = temp;
    }
