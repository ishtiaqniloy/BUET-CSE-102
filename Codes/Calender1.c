#include <stdio.h>

int day(int q, int m, int y);

int main(){
	int date,month,year,h;
	printf("Enter Year: ");
	scanf("%d",&year);
	printf("Enter Month: (1-12): ");
	scanf("%d",&month);
	printf("Enter Day: ");
	scanf("%d",&date);
	printf("\n\n\n ");
	
	switch(month){
		case 1: 	printf("JANUARY ");
					break;
		case 2: 	printf("FEBRUARY ");
					break;
		case 3: 	printf("MARCH ");
					break;
		case 4: 	printf("APRIL ");
					break;
		case  5: 	printf("MAY ");
					break;
		case 6: 	printf("JUNE ");
					break;
		case 7: 	printf("JULY ");
					break;
		case 8: 	printf("AUGUST ");
					break;
		case 9: 	printf("SEPTEMBER ");
					break;
		case 10: 	printf("OCTOBER ");
					break;
		case 11: 	printf("NOVEMBER ");
					break;
		case 12: 	printf("DECEMBER ");
					break;	
	}
	  
	printf("%d, %d is ",date,year);
	
	h=day(date, month, year);
	
	switch(h){
		case 0:	printf("SATURDAY");
				break;
		case 1:	printf("SUNDAY");
				break;
		case 2:	printf("MONDAY");
				break;
		case 3:	printf("TUESDAY");
				break;
		case 4:	printf("WEDNESDAY");
				break;
		case 5:	printf("THURSDAY");
				break;
		case 6:	printf("FRIDAY");
				break;
		
	}
	
	printf("\n\n\nProgram Developed by Abdullah Al Ishtiaq(201505080)\n\n");
	
	return 0;
}


int day(int q, int m, int y){
	int r;
	
	if(m==1||m==2){
		m+=12;
		y--;
	
	}
	r=(q+13*(m+1)/5+y+y/4+6*(y/100)+y/400)%7;
	return r;
}
