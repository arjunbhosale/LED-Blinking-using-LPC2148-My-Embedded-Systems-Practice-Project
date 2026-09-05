#include <LPC214X.H>

void Delay(int a)  // delay function
{
  int i,j;
	for(i=0;i<a;i++)
	for(j=0;j<i;j++);
}

int main()
{
 
// dec
// dir
	PINSEL1 =0X00000000;
IODIR0  |= (1<<29);  // port 0 pin no 29 set as o/p
	
while(1)
{
	
	IOSET0 = 1<<29;  // led on [ 3.3 v]
	Delay(200);
	IOCLR0 = 1<< 29; // led off [0 v]
	Delay(200);
}
}