#include <stdio.h>
#include <string.h>

int main(){
    int max=0,j,i, n;
    char a[100];
    gets(a);

    for(i=0;a[i]!=0;i++){
        if(a[i]>='a'&&a[i]<'z'){
            n=1;
            for(j=i+1;a[j]!=0;j++){
                if(a[i]==a[j]){
                    n++;
                }
            }
            if(n>max){
                max=n;
            }
        }
    }

for(i=0;a[i]!=0;i++){

        if(a[i]>='a'&&a[i]<'z'){
            n=1;
            for(j=i+1;a[j]!=0;j++){
                if(a[i]==a[j]){
                    n++;
                }
            }
            if(n==max){
                printf("%c ",a[i]);
            }
        }
    }

    printf("%d\n",max);


    return 0;
}
