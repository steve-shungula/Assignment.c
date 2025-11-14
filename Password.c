/*
Name:STEVEN SHUNGULA
reg:CT100/G/21349/24
Description:password 
*/

 #include <stdio.h>

int main() {
    int password,pd=1234;
    
    do{
   printf("Enter password:");
   scanf("%d",&password);
   
   if(password!=pd)
   {
   printf("INCORRECT PASSWORD \n");
   }
   else
   {
   printf("ACCESS GRANTED \n");
   }
   }
    while(password!=pd);
    
    
    return 0;
    }
    
     