#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],j,i;    
  system("cls");
printf("Enter the number to convert: ");    
scanf("%d",&j);    
for(i=0;j>0;i++)    
{    
a[i]=j%2;    
j=j/2;    
}    
 printf("Binary version is ");
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  