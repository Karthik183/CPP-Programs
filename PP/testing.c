#include<stdio.h>
void main(){
char ch[]={'k','a','r','t','h','i','k'};
printf("the value of ch is %s \n",ch);
char ch1[]="viratkohli";
printf("the value of ch1 is %s \n",ch1);
char name[30];
printf("enter the name:");
gets(name);
printf("the name of the owner is :");
puts(name);
printf("the length of entered string is:%d",strlen(name));
printf("the reverse of the entered string is: %s",strrev(name));
}
