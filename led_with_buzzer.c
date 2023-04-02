#include<AT89S52.h> /*header file*/
void wait(void); /*function declaration*/
void main() /*main function*/
{
while(1) /*super loop*/
{
P2_0=0;    /*P2.0 pin is on*/
wait();  /*call the waitfunction*/
P2_0=1;   /*P2.0 pin is off*/
P2_1=0;   /*P2.1 pin is on*/
wait();   /*call the waitfunction*/
P2_1=1;
P2_2=0;
wait();
P2_2=1;
P2_3=0;
wait();
P2_3=1;
P2_4=0;
wait();
P2_4=1;
P2_5=0;
wait();
P2_5=1;
P2_6=0;
wait();
P2_6=1;
P2_7=0;
wait();
P2_7=1;
wait();
}
}
void wait(void)  /*wait function*/
{
int i;     /*initialize the i variaple*/
for(i=0;i<5;i++); /*dummy loop  for certain delay*/
   /*using for indicates the led movement*/
P0_0=0;       /*on the buzzer*/
for(i=0;i<5;i++);   /*buzzer delay*/
P0_0=1;   /*off the buzzer*/
}
