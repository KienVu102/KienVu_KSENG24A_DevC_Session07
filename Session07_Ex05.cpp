#include <stdio.h>

int main(){
	int n[5]={5,10,15,20,25}, max=n[0], min=n[0];
	for(int i=1; i<5; i++){
		if( n[i] > max ){
			max = n[i];
		}
		if( n[i] < min ){
			min = n[i];
		}
	}
	printf("Trong mang so lon nhat la %d\n", max);
	printf("Trong mang so nho nhat la %d", min);

	
	return 0;
}
