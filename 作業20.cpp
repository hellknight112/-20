#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"iphone","XR","2018/11/25",35900,"Jhunny","0996582212",
	                     "asus","zefon3","2015/4/22",7990,"Aaron","0957765820",
						 "htc","u12+","2017/4/29",19200,"Alisa","0932541001",
						 "asus","zef6","2019/2/19",18999,"Belle","0995865225",
						 "samsung","s10+","201/1/15",22900,"jiaming","0983865866"};
	for(i=0;i<5;i++){
		printf("%s的資料----------\n",phone[i].use_name);
		printf("手機的品牌:");
		puts(phone[i].phone_brand);
		printf("手機的型號:");
		puts(phone[i].phone_model);
		printf("手機的出廠日期:");
		puts(phone[i].phone_yearofmanufacture);
		printf("手機的價格:");
		printf("%d\n",phone[i].phone_price);
		printf("使用者:");
		puts(phone[i].use_name);
		printf("手機號碼:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
