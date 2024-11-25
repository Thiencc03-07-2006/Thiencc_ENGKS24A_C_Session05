#include <stdio.h>

int main(){
	int type=0;
	float num1,num2;
	printf("vui long nhap vao 2 so: \n");
	scanf("%f %f",&num1,&num2);
	while(type!=5){
		printf("\n   CALCULATOR\n\n   1. Tong 2 so\n   2. Hieu 2 so\n   3. Tich 2 so\n   4. Thuong 2 so\n   5. Thoat\n\nLua chon cua ban: ");
		scanf("%d",&type);
		switch(type){
			case 1:
			    printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
			    break;
			case 2:
			    printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
			    break;
			case 3:
			    printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
			    break;
			case 4:
			    printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
			    break;
		}
	}
	return 0;
}
