#include<stdio.h>
int main() {
    FILE *fptr;
    char name[50];
    int age, height;
    fptr=fopen("person.txt","w+");
    if(fptr==NULL)  {
        printf("The file cannot be opened!");
        exit(1);
    }
    printf("Enter name, age and height of a person: ");
    scanf("%[^\n] %d %d",name,&age,&height);
    fprintf(fptr,"Name: %s\nAge: %d\nHeight: %d",name,age,height);
    rewind(fptr);
    fscanf(fptr,"%[^\n] %d %d",name,&age,&height);
    printf("The contents read from file are:\n");
    printf("%s\nAge: %d\nHeight: %d",name,age,height);
    fclose(fptr);
    return 0;
}
