#include<stdio.h>
int main(){
    char ch;
    int n;
    scanf("%c %d",&ch,&n);
    ch=(ch-'a'-n+26)%26+'a';
    printf("%c",ch);
    return(0);
}
