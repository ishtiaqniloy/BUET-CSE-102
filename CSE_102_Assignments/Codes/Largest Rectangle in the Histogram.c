#include <stdio.h>

int main(){
	int n,i,j,height,width,area, max_area=0;
	scanf("%d",&n);
	int array[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}	
	
	for(i=0;i<n;i++){
		height=array[i];
		width=1;
		j=i-1;
		while(j>=0&&array[j]>=array[i]){
			width++;
			j--;
		}
		j=i+1;
		while(j<n&&array[j]>=array[i]){
			width++;
			j++;
		}
		area=height*width;
		if(max_area<area){
			max_area=area;
		}	
	}
	
	printf("%d\n",max_area);
	
	return (0);
}
