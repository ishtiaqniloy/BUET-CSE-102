#include <stdio.h>
#include <stdlib.h>


struct fraction {
    int N;          //Numarator
    int D;          //Denominator
};

typedef struct fraction Fraction;

Fraction addFraction( Fraction a, Fraction b){  //adds two fractions
    Fraction result;

    result.N=a.N*b.D+b.N*a.D;
    result.D=a.D*b.D;

    return result;
}

Fraction divFraction( Fraction a, int n ){      //divides a fraction with an integer
    Fraction result;

    result.N=a.N;
    result.D=a.D*n;

    return result;
}

struct point{       //represents a point with (x,y) coordinates where x and y are fractions
    Fraction x;
    Fraction y;
};
typedef struct point Point;

struct line{       //represents a line ab where a and b are its starting and end point
    Point a;
    Point b;
};
typedef struct line Line;

Point midPoint (Line p){                //takes a line as its parameter and returns its midpoint
    Point result;

    result.x=addFraction(p.a.x,p.b.x);
    result.x=divFraction(result.x,2);

    result.y=addFraction(p.a.y,p.b.y);
    result.y=divFraction(result.y,2);


    return result;
}


int  main(){
    Fraction x1,x2,y1,y2,add,div;
    int divider;        //for testing
    Point mid;          //midpoint
    Line ln;            //the concerned line

    scanf("%d/%d %d/%d %d/%d %d/%d",&x1.N,&x1.D,&y1.N,&y1.D,&x2.N,&x2.D,&y2.N,&y2.D);       //taking inputs as x and y coordinates of the two points

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
    //building up the line

    ln.a.x = x1;
    ln.a.y = y1;
    ln.b.x = x2;
    ln.b.y = y2;

    mid= midPoint(ln);  //getting midpoint

    printf("Midpoint= %d/%d %d/%d\n", mid.x.N, mid.x.D, mid.y.N, mid.y.D);

    return 0;
}
