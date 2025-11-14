/* 
NAME:STEVEN SHUNGULA
REG NO:CT100/G/21349/24
Description: calculate the fare used
*/
#include <stdio.h>
float CalculateFare(float distance){
float Totalfare;
Totalfare= distance * 50;
return Totalfare;
}


int main (){
float kilometers;

printf("Enter the distance traveled");
scanf("%f",&kilometers);

   float TotalFare = CalculateFare(kilometers);
  printf("Totalfare is Ksh.%f", TotalFare);
 
 return 0;
 
 } 