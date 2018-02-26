#include<stdio.h>
#include<string.h>
int main() {
    char str[]="UNIVERSITY";
    for(int i=0,len=strlen(str);i<len;i+=2) {
        for(int j=0;j<=i;j+=2) {
            printf("%c%c",str[j],str[j+1]);
        }
        printf("\n");
    }
    for(int len=strlen(str), i=(len-2);i>0;i-=2) {
        for(int j=0;j<i;j+=2) {
            printf("%c%c",str[j],str[j+1]);
        }
        printf("\n");
    }
    return 0;
}
