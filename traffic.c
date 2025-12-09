#include<reg51.h>
void delay(int a){
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<250;j++){
		}
	}
}
void main(){
	unsigned char c[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x98};
	unsigned char i;
	while(1){
		P2=(0x01);
		for(i=0;i<3;i++){
			P0=c[i];
			delay(400);
		}
		P2=(0x00);
		delay(200);
		P2=(0x02);
		for(i=3;i<6;i++){
			P0=c[i];
			delay(400);
		}
		P2=(0x00);
		delay(200);
		P2=(0x04);
		for(i=6;i<=9;i++){
			P0=c[i];
			delay(400);
		}
		P2=(0x00);
		delay(200);
	}
}
