#include <stdio.h>

int main(){
	int i;
	printf("So mang ban muon la: ");
	scanf("%d", &i);
	int n[i];
	for(int j=0; j<i; j++){
		printf("Moi ban nhap so phan tu: ");
		scanf("%d", &n[j]);
	}
	for(int j=0; j<i; j++){
		printf("%d\n", n[j]);
	}
	
	return 0; 
} 
