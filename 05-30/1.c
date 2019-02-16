#include <stdio.h>

void maxFunction( int *p, int n, int *max){
    int i;
    *max=*p;
    for(i=1; i<n; i++){
        if ( *max< *(p+i) ){
            *max=*(p+i);
        }
    }

}


int main(){
    int n, *p,i,max;

    scanf("%d",&n);

    p= (int *)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        scanf("%d",(p+i));

    }

    maxFunction(p,n,&max);

    printf("Maximum = %d\n", max);


    return 0;
}
