#include<stdio.h>
#include<stdlib.h>
typedef struct student {
    char name[50],address[200];
    int rollno,age;
    float marks;
}stud;
void display(stud []);
int main() {
    stud std[12];
    printf("Enter the Roll no, Name, Address, Age and Average marks of 12 students:\n");
    for(int i=0;i<12;i++) {
        scanf("%d %[^\n] %[^\n] %d %f",&std[i].rollno,std[i].name,std[i].address,&std[i].age,&std[i].marks);
        getchar();
    }
    display(std);
    return 0;
}

void display(stud std[]) {
    printf("\nThe details of the students are:");
    for(int i=0;i<12;i++) {
        printf("\nRoll No: %d\nName: %s\nAddress: %s\nAge: %d\nAverage Marks: %f\n",std[i].rollno,std[i].name,std[i].address,std[i].age,std[i].marks);
    }
    return;
}
