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
		printf("%s�����----------\n",phone[i].use_name);
		printf("������~�P:");
		puts(phone[i].phone_brand);
		printf("���������:");
		puts(phone[i].phone_model);
		printf("������X�t���:");
		puts(phone[i].phone_yearofmanufacture);
		printf("���������:");
		printf("%d\n",phone[i].phone_price);
		printf("�ϥΪ�:");
		puts(phone[i].use_name);
		printf("������X:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
