#include <stdio.h>

int main(){
	int num,save=0,check=1,zero=0,i=0;
	printf("vui long nhap vao so nguyen: ");
	scanf("%d",&num);
	printf("Chu so trong so da nhap: ");
	if(num==0){
		printf("0");
		return 0;
	}
	if(num<0){
		printf("- ");
		num=-num;
	}
	while(num > 0){
		if(num%10==0&&check){
		    zero+=1;
		}else{
			check=0;
		}
        save =save*10+num%10;
        num/=10;
    }
    while(save>0){
	    printf(" %d",save%10);
        save/=10;
    }
    while(i<zero){
    	printf(" 0");
    	++i;
	}
    return 0;
}
