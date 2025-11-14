/*
name:STEVEN SHUNGULA
reg:CT100/G/21349/24
description:c program to check the exam eligibility 
*/

 #include <stdio.h>

int main() {
    int attendance,marks;
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    printf("Enter average marks: ");
    scanf("%d", &marks);
    
    if (attendance >= 75 && marks >= 40) {
        printf("\nyou qualify for final exams");
    }
     else {
        printf("Not eligible");
    }

    return 0;
}