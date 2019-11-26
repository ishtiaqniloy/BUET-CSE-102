#include <stdio.h>

int main(){
    int i,j=1,k=2,n;
    float sum=0,prev=-1.0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        prev*=(-1.0)*j/i;
        sum+=prev;
        j+=k;
        k++;
    }
    printf("%.1f\n",sum);
    return (0);
}
