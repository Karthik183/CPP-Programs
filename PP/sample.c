#include<stdio.h>  
void main(){  
  char str[20];  

  printf("Enter string: ");  
  gets(str);//reads string from console  
  printf("String is: %s",str);   
  printf("the reversed string is %s:",strrev(str));
  
}  

