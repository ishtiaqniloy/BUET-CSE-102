#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char p[150],q[150];
    int len1,len2,i,flag=0,k,cmp;

    scanf("%s %s",p,q);
    //printf("%s %s\n",p,q);

    len1=strlen(p);     //length of the 1st string
    len2=strlen(q);     //length of the 2nd string

    if(len1%len2!=0){       //eliminating the case where len2 is not a divisor of len1
        printf("NO\n");
    }
    else{
        k=len1/len2;
        for(i=0;i<k;i++){
            cmp=strncmp(p+i*len2,q,len2);       //comparing len2 characters every time
            //printf("%d\n",cmp);
            if(cmp!=0){
                flag=1;
                break;
            }
        }

        if(flag==0){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }

    }


    return main();
}
