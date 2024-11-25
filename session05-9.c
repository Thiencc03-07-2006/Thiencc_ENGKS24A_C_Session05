#include <stdio.h>

int main(){
	int type=0;
	float num1,num2,num3,check=0,max,min;
	while(type!=6){
		printf("\n   MENU\n\n   1. Nhap 3 so\n   2. Tong 3 so\n   3. Trung binh cong 3 so\n   4. So nho nhat\n   5. so lon nhat\n   6. Thoat\n\nLua chon cua ban: ");
		scanf("%d",&type);
		switch(type){
			case 1:
			    printf("nhap 3 so:\n");
			    scanf("%f %f %f",&num1,&num2,&num3);
			    min=num1<num2?num1:num2;
				min=min<num3?min:num3;
				max=num1>num2?num1:num2;
				max=max>num3?max:num3;
			    break;
			case 2:
				if(check=1){
				    printf("Tong 3 so la: %.2f",num1+num2+num3);
				}
			    break;
			case 3:
			    if(check=1){
			    	printf("trung binh cong 3 so la: %.2f",(num1+num2+num3)/3);
				}
			    break;
			case 4:
			    if(check=1){
			    	printf("so nho nhat la: %.2f",min);
				}
			    break;
			case 5:
				if(check=1){
					printf("so lon nhat la: %.2f",max);
				}
				break;
		}
	}
	return 0;
}
