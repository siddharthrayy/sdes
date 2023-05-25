#include<stdio.h>
int main(){
	int i, cnt = 0;
	int p8[8] = {6,3,7,4,8,5,10,9};
	int p10[10] = {3,5,2,7,4,10,1,9,8,6};
	char input[10],k1[10],k2[10],temp[11];
	char ls1[5],ls2[5];
	printf("Enter the 10 bits input");
	scanf("%s",input);
	input[10] ='\0';

	for(int i = 0; i < 10; i++){
		cnt = p10[i];
		temp[i] = input[cnt-1];
	}
	temp[i] = '\0';
	printf("\nyour p10 key is :");
	for(int i = 0; i < 10; i++){
		printf("%d",p10[i]);
	}
	printf("\nBits after p10:");
	puts(temp);
	for(int i = 0; i < 5; i++){
        if(i==4){
			temp[i] = temp[0];
		}
		else {
			temp[i] = temp[i+1];
		}
	}
	printf("Output after LS -1 :");
puts(temp);
for(int i=5;i<10;i++){
	if(i==9){
		temp[i] = temp[5];
	}
	else {
		temp[i] = temp[i+1];
	}
}
printf("Output after LS -2 :");
puts(temp);
printf("\n your p8 key is");
for(int i=0; i<8; i++){
	printf("%d",p8[i]);
}
for(int i =0;i<8;i++){
	cnt = p8[i];
	k1[i] = temp[cnt-1];
}
printf("\n your key k1 is : ");
puts(k1);
 

}
