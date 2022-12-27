#include<stdio.h>    

int main(){    
 int n1=0, n2=1;
 int n3, i, number;
 
 printf("Podaj liczbe elementow:");    
 fflush(stdout);
 scanf("%d",&number);

 if(number==0){
  printf("0");
  return 0;
 }
 
 if(number==1){
  printf("1");
  return 0;
 }
 
 for(i=1;i<number;i++){    
  n3=n1+n2;      
  n1=n2;    
  n2=n3;    
 }
 
 printf("%d",n3);  
 
 printf("\n\nKalkulator ciągu Fibonacci'ego \n");
 printf("Bajda Przemysław \n");
 printf("gr. 1.1");   
 
  return 0;  
}    