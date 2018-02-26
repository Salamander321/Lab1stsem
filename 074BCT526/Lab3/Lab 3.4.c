//Following program demonstrates the differences between getch(), getchar() and getche() and scanf() and gets() and printf() and puts()
#include<stdio.h>
#include<conio.h>
int main() {
    char scaname[25],getname[25];
    //Differences between getch(), getchar() and getche()
    printf("Use of getch():");
    getch();
    printf("\nUse of getche():");
    getche();
    printf("\nUse of getchar():");
    getchar();
    getchar();
    //Differences between gets() and scanf()
    printf("\nEnter full name: ");
    gets(getname);
    printf("Using gets(), the string stored is: %s\n",getname);
    printf("\nEnter full name again: ");
    scanf("%s",scaname);
    printf("Using scanf(), the string stored is: %s",scaname);
    //Differences between printf() and puts()
    printf("\n\nUsing printf():");
    printf("\nThe two names entered above are: %s and %s",getname,scaname);
    printf("\n\nUsing puts():");
    puts(getname);
    puts(scaname);
    return 0;
}
