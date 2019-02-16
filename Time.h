/*  header for functions related to time.
    getTime() is collected. others were created by Abdullah Al Ishtiaq (1505080)
    */

#include <stdio.h>
#include <time.h>

void getTime(int t[]);
void timeDigits(int t[], int digits[]);
void showtime(int digits[], int counter);

void getTime(int t[]) {                 //gets time from system
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
}



void timeDigits(int t[], int digits[]){         //this function converts time into separate digits for hh,mm,ss
    int x;

    if(t[0]==0||t[0]==12){
        digits[0]=1;
        digits[1]=2;
    }
    else {
        x=t[0]%12;
        digits[0]=x/10;
        digits[1]=x%10;
    }

    x=t[1];
    digits[2]=x/10;
    digits[3]=x%10;

    x=t[2];
    digits[4]=x/10;
    digits[5]=x%10;

    if(t[0]>=12)
        digits[6]=1;
    else
        digits[6]=0;
}




void showtime(int digits[]){            //brings time to screen

    iClear();

    if(digits[7]==0)        //blinking the circles
        light_circles();


    if(digits[6]==1){       //controlling am and pm
        light_pm();
    }
    else{
        light_am();
    }


    if(digits[0]==1){
        light_a3();
        light_a6();
    }

    switch (digits[1]){
        case 0: light_b1();
                light_b2();
                light_b3();
                light_b5();
                light_b6();
                light_b7();
                break;

        case 1: light_b3();
                light_b6();
                break;

        case 2: light_b7();
                light_b6();
                light_b4();
                light_b2();
                light_b1();
                break;

        case 3: light_b7();
                light_b6();
                light_b4();
                light_b3();
                light_b1();
                break;

        case 4: light_b5();
                light_b4();
                light_b6();
                light_b3();
                break;

        case 5: light_b7();
                light_b5();
                light_b4();
                light_b3();
                light_b1();
                break;

        case 6: light_b7();
                light_b5();
                light_b2();
                light_b4();
                light_b3();
                light_b1();
                break;

        case 7: light_b7();
                light_b6();
                light_b3();
                break;

        case 8: light_b7();
                light_b6();
                light_b5();
                light_b2();
                light_b4();
                light_b3();
                light_b1();
                break;

        case 9: light_b7();
                light_b6();
                light_b5();
                light_b4();
                light_b3();
                light_b1();
                break;



    }

    switch (digits[2]){
        case 0: light_c1();
                light_c2();
                light_c3();
                light_c5();
                light_c6();
                light_c7();
                break;

        case 1: light_c3();
                light_c6();
                break;

        case 2: light_c7();
                light_c6();
                light_c4();
                light_c2();
                light_c1();
                break;

        case 3: light_c7();
                light_c6();
                light_c4();
                light_c3();
                light_c1();
                break;

        case 4: light_c5();
                light_c4();
                light_c6();
                light_c3();
                break;

        case 5: light_c7();
                light_c5();
                light_c4();
                light_c3();
                light_c1();
                break;

        case 6: light_c7();
                light_c5();
                light_c2();
                light_c4();
                light_c3();
                light_c1();
                break;

        case 7: light_c7();
                light_c6();
                light_c3();
                break;

        case 8: light_c7();
                light_c6();
                light_c5();
                light_c2();
                light_c4();
                light_c3();
                light_c1();
                break;

        case 9: light_c7();
                light_c6();
                light_c5();
                light_c4();
                light_c3();
                light_c1();
                break;

    }


    switch (digits[3]){
        case 0: light_d1();
                light_d2();
                light_d3();
                light_d5();
                light_d6();
                light_d7();
                break;

        case 1: light_d3();
                light_d6();
                break;

        case 2: light_d7();
                light_d6();
                light_d4();
                light_d2();
                light_d1();
                break;

        case 3: light_d7();
                light_d6();
                light_d4();
                light_d3();
                light_d1();
                break;

        case 4: light_d5();
                light_d4();
                light_d6();
                light_d3();
                break;

        case 5: light_d7();
                light_d5();
                light_d4();
                light_d3();
                light_d1();
                break;

        case 6: light_d7();
                light_d5();
                light_d2();
                light_d4();
                light_d3();
                light_d1();
                break;

        case 7: light_d7();
                light_d6();
                light_d3();
                break;

        case 8: light_d7();
                light_d6();
                light_d5();
                light_d2();
                light_d4();
                light_d3();
                light_d1();
                break;

        case 9: light_d7();
                light_d6();
                light_d5();
                light_d4();
                light_d3();
                light_d1();
                break;



    }

    switch (digits[4]){
        case 0: light_e1();
                light_e2();
                light_e3();
                light_e5();
                light_e6();
                light_e7();
                break;

        case 1: light_e3();
                light_e6();
                break;

        case 2: light_e7();
                light_e6();
                light_e4();
                light_e2();
                light_e1();
                break;

        case 3: light_e7();
                light_e6();
                light_e4();
                light_e3();
                light_e1();
                break;

        case 4: light_e5();
                light_e4();
                light_e6();
                light_e3();
                break;

        case 5: light_e7();
                light_e5();
                light_e4();
                light_e3();
                light_e1();
                break;

        case 6: light_e7();
                light_e5();
                light_e2();
                light_e4();
                light_e3();
                light_e1();
                break;

        case 7: light_e7();
                light_e6();
                light_e3();
                break;

        case 8: light_e7();
                light_e6();
                light_e5();
                light_e2();
                light_e4();
                light_e3();
                light_e1();
                break;

        case 9: light_e7();
                light_e6();
                light_e5();
                light_e4();
                light_e3();
                light_e1();
                break;



    }

    switch (digits[5]){
        case 0: light_f1();
                light_f2();
                light_f3();
                light_f5();
                light_f6();
                light_f7();
                break;

        case 1: light_f3();
                light_f6();
                break;

        case 2: light_f7();
                light_f6();
                light_f4();
                light_f2();
                light_f1();
                break;

        case 3: light_f7();
                light_f6();
                light_f4();
                light_f3();
                light_f1();
                break;

        case 4: light_f5();
                light_f4();
                light_f6();
                light_f3();
                break;

        case 5: light_f7();
                light_f5();
                light_f4();
                light_f3();
                light_f1();
                break;

        case 6: light_f7();
                light_f5();
                light_f2();
                light_f4();
                light_f3();
                light_f1();
                break;

        case 7: light_f7();
                light_f6();
                light_f3();
                break;

        case 8: light_f7();
                light_f6();
                light_f5();
                light_f2();
                light_f4();
                light_f3();
                light_f1();
                break;

        case 9: light_f7();
                light_f6();
                light_f5();
                light_f4();
                light_f3();
                light_f1();
                break;



    }

}
