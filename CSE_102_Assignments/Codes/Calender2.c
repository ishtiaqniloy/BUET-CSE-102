#include <stdio.h>

int day(int q, int m, int y);

int main(){
	int day1,month,year,i,total_days;
	
	printf("Enter Month: (1-12): ");
	scanf("%d",&month);
	printf("Enter Year: ");
	scanf("%d",&year);
	
	printf("\n\n\nCalender for:\n\n\n");
	
	switch(month){
		case 1: 	printf("JANUARY ");
					total_days=31;
					break;
		case 2: 	printf("FEBRUARY ");
					if(year%400==0||(year%4==0&&year%100!=0))
						total_days=29;
					else
						total_days=28;
					break;
		case 3: 	printf("MARCH ");
					total_days=31;
					break;
		case 4: 	printf("APRIL ");
					total_days=30;
					break;
		case  5: 	printf("MAY ");
					total_days=31;
					break;
		case 6: 	printf("JUNE ");
					total_days=30;
					break;
		case 7: 	printf("JULY ");
					total_days=31;
					break;
		case 8: 	printf("AUGUST ");
					total_days=31;
					break;
		case 9: 	printf("SEPTEMBER ");
					total_days=30;
					break;
		case 10: 	printf("OCTOBER ");
					total_days=31;
					break;
		case 11: 	printf("NOVEMBER ");
					total_days=30;
					break;
		case 12: 	printf("DECEMBER ");
					total_days=31;
					break;	
	}

	printf("%d\n\n",year);
	
	printf("SAT SUN MON TUE WED THU FRI\n");
	
	day1=day(1,month,year);	
	
	for(i=0;i<day1;i++){
		printf("    ");
	}
	for(i=1;i<=total_days;i++){
		if(i<10)
			printf("  %d",i);
		else
			printf(" %d",i);
		if((i+day1)%7==0)
			printf("\n");
		else 
			printf(" ");
	}
	
	printf("\n\n\n\nProgram Developed by Abdullah Al Ishtiaq (201505080)\n\n");
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
