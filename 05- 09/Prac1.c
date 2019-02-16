#include <stdio.h>
#include <string.h>

int main(){
    int len,i,j;
    char a[100];
    gets(a);
    len=strlen(a);

    for(i=0;a[i]==' ';i++){ //removing leading spaces
    }

    for(;i<len;i++){
        if(a[i]!=' '){
            printf("%c",a[i]);
        }
        else {
            for(j=i+1;j<len;j++){
                if(a[j]==' ')   i=j;    //removing middle and trailing spaces
                else break;
            }
            if(i!=len){
                printf("%c",a[i]);
            }
        }



    }

    //printf("check\n");
    return 0;
}
