#include<stdio.h>
int main() {
    int mat1[3][3],mat2[3][3],mat[3][3],sum=0;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("Enter the element in %d row %d column of first matrix: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("Enter the element in %d row %d column of second matrix: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            for(int k=0;k<3;k++) {
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            mat[i][j]=sum;
            sum=0;
        }
    }
    printf("The resultant matrix after product is:\n\t");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d\t",mat[i][j]);
        }
        printf("\n\t");
    }
    return 0;
}
