#include<reg51.h>
sbit sw=P2^0;
void delay(int a){
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<250;j++){
		}
	}
}
void main(){
unsigned char Led=0x80;
	sw=1;
	while(1){
		while(sw==0){
		P1=Led;
		delay(200);
		Led>>=1;
		delay(200);
		if(Led==0x00){
		Led=0x80;
			}
		}
	}
}
