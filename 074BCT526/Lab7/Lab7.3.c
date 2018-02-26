#include<stdio.h>
int main() {
    int num[8],sum=0;
    float average;
    printf("Enter eight integers: ");
    for(int i=0;i<8;i++) {
        scanf("%d",&num[i]);
    }
    for(int j=0;j<8;j++) {
        sum=sum+num[j];
    }
    average=(float) sum/8;
    printf("The sum of the entered numbers is: %d",sum);
    printf("\nThe average of the entered numbers is: %.2f",average);
    return 0;
}
