#include <stdio.h>

int main(){
	int i;
	printf("So mang ban muon la: ");
	scanf("%d", &i);
	int n[i];
	for(int j=0; j<i; j++){
		printf("Moi ban nhap phan tu so %d: ", j+1);
		scanf("%d", &n[j]);
		while(n[j]%2==0){
			printf("Phan tu nhap phai la so le !\n");
			printf("Moi ban nhap phan tu so %d: ", j+1);
			scanf("%d", &n[j]);
		}
	}
	
	return 0;
}
