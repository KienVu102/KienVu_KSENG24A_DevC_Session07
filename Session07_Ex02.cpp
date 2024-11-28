#include <stdio.h>

int main(){
	int num[5], i;
	for(int i=0; i<5; i++){
		printf("Ban hay nhap so ngau nhien: ");
	    scanf("%d", &num[i]);
	}
	for(int i=0; i<5; i++){
		printf("%d\n", num[i]);
	}
	return 0;
}
