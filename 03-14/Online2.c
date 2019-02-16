#include<stdio.h>
#include<math.h>

int main(){
    int x0,y0,r0,x1,y1,r1;
    float d;
    scanf("%d %d %d",&x0,&y0,&r0);
    scanf("%d %d %d",&x1,&y1,&r1);
    d=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1));
    if (d==r0+r1){
        printf("Case 3");   //tested with (2,2,1),(5,2,2)
    }
    else if (d==r0-r1||d==r1-r0){
        printf("Case 2");   //tested with (2,2,1),(1,2,2)
    }
    else if (d>r0+r1){
        printf("Case 1");   //tested with (2,2,1),(6,2,2)
    }
    else if(d<r0-r1||d<r1-r0){
        printf("Case 0");   //tested with (2,2,5),(3,2,1)
    }
    else {
        printf("Case 4");   //tested with (2,2,1),(5,2,3)
    }
    printf("\n");
    return main();
}
