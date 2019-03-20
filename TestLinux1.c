// TestLinux1.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>
#define  PI 3.1415926

int main(int argc, char* argv[])
{
	printf("\n\tHello World!\n");
	
	float  farea, fradio = 0;
	int    narea, nlen;
	printf("\n\tplease input radio and len:");
	scanf("%f, %d", &fradio, &nlen);
	farea = PI * fradio * fradio;
	narea = nlen * nlen;

	printf("\n\tcircle area = %.2f,radio = %.2f,  square area = %d, len = %d \n\n", 
		farea, fradio, narea, nlen);


	
	return 0;
}

