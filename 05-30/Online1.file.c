#include <stdio.h>
#include <stdlib.h>


struct fraction {
    int N;
    int D;
};

typedef struct fraction Fraction;

Fraction addFraction( Fraction a, Fraction b){
    Fraction result;

    result.N=a.N*b.D+b.N*a.D;
    result.D=a.D*b.D;

    return result;
}

Fraction divFraction( Fraction a, int n ){
    Fraction result;

    result.N=a.N;
    result.D=a.D*n;

    return result;
}

struct point{
    Fraction x;
    Fraction y;
};
typedef struct point Point;

struct line{
    Point a;
    Point b;
};
typedef struct line Line;

Point midPoint (Line p){
    Point result;

    result.x=addFraction(p.a.x,p.b.x);
    result.x=divFraction(result.x,2);

    result.y=addFraction(p.a.y,p.b.y);
    result.y=divFraction(result.y,2);


    return result;
}


int  main(){
    Fraction x1,x2,y1,y2,add,div;
    int divider;
    Point mid;
    Line ln;

    FILE *fpr, *fpw;



    //scanf("%d/%d %d/%d %d/%d %d/%d",&x1.N,&x1.D,&y1.N,&y1.D,&x2.N,&x2.D,&y2.N,&y2.D);

/*
    add=addFraction(x1,y1);

    printf("1st 2 fractions added = %d/%d\n",add.N,add.D);

    printf("Give divider: ");
    scanf("%d",&divider);

    div=divFraction(x1,divider);
    printf("1st fraction divided= %d/%d\n",div.N,div.D);
    div=divFraction(y1,divider);
    printf("2nd fraction divided= %d/%d",div.N,div.D);

*/

    fpr = fopen("in.txt", "r");
    fpw = fopen("in.txt", "w");
    fscanf(fpr,"%d/%d %d/%d %d/%d %d/%d",&x1.N,&x1.D,&y1.N,&y1.D,&x2.N,&x2.D,&y2.N,&y2.D);

    printf("%d",x1.N);

    ln.a.x = x1;
    ln.a.y = y1;
    ln.b.x = x2;
    ln.b.y = y2;

    mid= midPoint(ln);

    printf("Midpoint= %d/%d %d/%d\n", mid.x.N, mid.x.D, mid.y.N, mid.y.D);

    fprintf(fpw,"Midpoint= %d/%d %d/%d\n", mid.x.N, mid.x.D, mid.y.N, mid.y.D);

    fclose(fpr);
    fclose(fpw);

    return 0;
}

