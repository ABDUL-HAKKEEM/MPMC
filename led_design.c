#include<AT89S52.h>
void wait(void);
void buzzer(void);
void main()
{
while(1){
P2_0=0;
P2_7=0;
buzzer();
P2_0=1;
P2_7=1;
P2_1=0;
P2_6=0;
buzzer();
P2_1=1;
P2_6=1;
P2_2=0;
P2_5=0;
buzzer();
P2_2=1;
P2_5=1;
P2_4=0;
P2_3=0;
buzzer();
P2_4=1;
P2_3=1;
wait();
P2_0=0;
P0_0=0;
wait();
P2_1=0;
wait();
P2_2=0;
wait();
P2_3=0;
wait();
P2_4=0;
wait();
P2_5=0;
wait();
P2_6=0;
wait();
P2_7=0;
P0_0=1;
wait();
P2=11111111;
wait();
P2=00000000;
buzzer();
P2=11111111;
P2=00000000;
buzzer();
P2=11111111;
}
}
void buzzer(void)
{
int i=0;
P0_0=0;
for(i=0;i<5;i++);
P0_0=1;
}
void wait(void)
{
int i;
for(i=0;i<5;i++);
}
