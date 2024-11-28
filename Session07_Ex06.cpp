#include <stdio.h>

int main(){
	int n[5]={1,2,3,4,5}, sochan, sole;
	printf("Ban dau mang co: ");
	for(int i=0; i<5; i++){
		printf("%d ", n[i]);
	}
	for(int i=0; i<5; i++){
		if(n[i]%2==0){
			n[i]+=3;
		}
		else{
			n[i]+=2;
		}
	}
	printf("\nGia tri cua mang luc sau la: ");
    for(int i=0; i<5; i++){
	    printf("%d ", n[i]);
	}
	
	return 0;
}
