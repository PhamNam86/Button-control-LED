#include<16F887.h>
#DEVICE *=16 ADC=10
#FUSES HS,NOWDT,NOPUT,NOLVP
#USE DELAY(CLOCK=16M)
#include <luutinh.h>
int mod=0;
void Button1()
{

while(input(pin_a3)==0)
{}
output_high(pin_b0);
output_low(pin_b1);
output_high(pin_b2);
output_low(pin_b3);
output_high(pin_b4);
output_low(pin_b5);
output_high(pin_b6);
output_low(pin_b7);
//delay_ms(200);
//OUTPUT_B(0xBB);

while(input(pin_a3)==1)
{}
OUTPUT_B(0x00);
delay_ms(200);
}

void Button2(){
while(input(pin_a4)==0){}
output_b(0xFF);
delay_ms(200);

while(input(pin_a4)==1){}
OUTPUT_B(0x00);
delay_ms(200);

}

void Button_3()
{

if(input(pin_a5)==0)
{
   mod=mod+1;
   delay_ms(200);
}
if(mod == 1){
	output_high(pin_b0);
	output_low(pin_b1);
	output_low(pin_b2);
	output_low(pin_b3);
	output_low(pin_b4);
	output_low(pin_b5);
	output_low(pin_b6);
	output_low(pin_b7);	
	//delay_ms(200);
}
if(mod == 2){
	output_low(pin_b0);
	output_high(pin_b1);
	output_low(pin_b2);
	output_low(pin_b3);
	output_low(pin_b4);
	output_low(pin_b5);
	output_low(pin_b6);
	output_low(pin_b7);	
	//delay_ms(200);
}
if(mod == 3){
	output_low(pin_b0);
	output_low(pin_b1);
	output_high(pin_b2);
	output_low(pin_b3);
	output_low(pin_b4);
	output_low(pin_b5);
	output_low(pin_b6);
	output_low(pin_b7);	
	//delay_ms(200);
}
if(mod==4){
	output_low(pin_b0);
	output_low(pin_b1);
	output_low(pin_b2);
	output_high(pin_b3);
	output_low(pin_b4);
	output_low(pin_b5);
	output_low(pin_b6);
	output_low(pin_b7);	
	//delay_ms(200);
}
if(mod==5){
	output_low(pin_b0);
	output_low(pin_b1);
	output_low(pin_b2);
	output_low(pin_b3);
	output_high(pin_b4);
	output_low(pin_b5);
	output_low(pin_b6);
	output_low(pin_b7);	
	//delay_ms(200);
}
if(mod==6){
	output_low(pin_b0);
	output_low(pin_b1);
	output_low(pin_b2);
	output_low(pin_b3);
	output_low(pin_b4);
	output_high(pin_b5);
	output_low(pin_b6);
	output_low(pin_b7);	
	//delay_ms(200);
}
if(mod==7){
	output_low(pin_b0);
	output_low(pin_b1);
	output_low(pin_b2);
	output_low(pin_b3);
	output_low(pin_b4);
	output_low(pin_b5);
	output_high(pin_b6);
	output_low(pin_b7);	
 	//delay_ms(200);
}
if(mod==8){
	output_low(pin_b0);
	output_low(pin_b1);
	output_low(pin_b2);
	output_low(pin_b3);
	output_low(pin_b4);
	output_low(pin_b5);
	output_low(pin_b6);
	output_high(pin_b7);	
	//delay_ms(200);
	mod=0;
}


}

void main()
{
set_tris_a(0xFF); // khai báo port a la input

set_tris_b(0x00); // khai báo port b la output

//set_tris_d(0x00);
output_b(0x00);
while(TRUE)
{

while(input(pin_a4)==0)
{
Button2();
}

//delay_ms(100);

while(input(pin_a3)==0)
{
Button1();
}

if(input(pin_a5)==0)
{
Button_3();
}




}

}

