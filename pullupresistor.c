#include<reg51.h>
sbit SW=P2^0;
sbit led=P3^0;
void main(){
	while(1){
		if(SW==0){
			led=1;
		}
		else{
			led=0;
		}
	}
}
