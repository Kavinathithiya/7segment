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
	unsigned char j;
	while(1){
		for(j=0;j<10;j++){
			P0=c[j];
			delay(200);
	    }
		}
}
