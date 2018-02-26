#include<stdio.h>
#include<stdlib.h>
typedef union student {
    int rollno;
    float percent;
} stud;
typedef enum days {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday} day;
int main() {
    stud std1;
    day weekday=Wednesday;
    printf("Enter the student's Roll No: ");
    scanf("%d",&std1.rollno);
    printf("Roll No: %d",std1.rollno);
    printf("\nEnter the student's percentage: ");
    scanf("%f",&std1.percent);
    printf("Percentage: %.2f",std1.percent);
    printf("\nThe week days are:\n");
    printf("\nSunday=%d",Sunday);
    printf("\nMonday=%d",Monday);
    printf("\nTuesday=%d",Tuesday);
    printf("\nWednesday=%d",Wednesday);
    printf("\nThursday=%d",Thursday);
    printf("\nFriday=%d",Friday);
    printf("\nSaturday=%d",Saturday);
    printf("\nWeekday=%d",weekday);
    return 0;
}
