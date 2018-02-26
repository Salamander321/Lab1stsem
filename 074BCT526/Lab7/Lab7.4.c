#include<stdio.h>
int main() {
    int mat1[3][2],mat2[3][2],mat[3][2];
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            printf("Enter the element in %d row %d column of first matrix: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            printf("Enter the element in %d row %d column of second matrix: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            mat[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("The resultant matrix after sum is:\n\t");
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            printf("%d\t",mat[i][j]);
        }
        printf("\n\t");
    }
    return 0;
}
