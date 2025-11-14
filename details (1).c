/*
Name:STEVEN SHUNGULA 
REG NO:CT100/G/21349/24
DESCRIPTION:CAT 2 Q2
*/


#include <stdio.h>
#include <string.h>

struct student 
{
char email[24];
int age,ID;
float gpa;
char regNo[17];
}student1; 

int main(){

strcpy(student1.email,"andiekaranja01@gmail.com");
strcpy(student1.regNo,"Ct100/g/26193/25");
student1.age =22;
student1.ID=41803302;
student1.gpa=5.0;

printf("Email: %s \n",student1.email);
printf("REG NO: %s \n",student1.regNo);
printf("AGE: %d \n",student1.age);
printf("ID NO: %d\n",student1.ID);
printf("GPA %.1f \n",student1.gpa);


return 0;
}












    