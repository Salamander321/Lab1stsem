#include <stdio.h>
#include <string.h>
int main(){
char *name[5];
char temp[100];
for (int i = 0; i < 5 ;i++){
    scanf("%s",temp);
    name[i] = (char*) calloc(strlen(temp+1),1);
    strcpy(name[i],temp);
}
for (int i = 0; i < 5; i++){
    for (int j = 0; j < i; j++){
        int count = 0;
            if ( (int) name[j][count] > (int) name[i][count]){
                strcpy(temp,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],temp);
            }
            while ((int) name[j][count] == (int) name[i][count]){
                count++;
                if ( (int) name[j][count] > (int) name[i][count]){
                strcpy(temp,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],temp);
                break;
            }
            }
    }
}
for (int i = 0; i < 5 ;i++){
 printf("%s\n",name[i]);
}
return 0;
}
