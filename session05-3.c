#include <stdio.h>

int main(){
	int n=0,i=0,sum=0;
	while(n<1){
		system("cls");
		printf("vui long nhap vao so duong: ");
		scanf("%d",&n);
	}
	while(i<=n){
		sum+=i++;
	}
	printf("tong la: %d",sum);
	return 0;
}
