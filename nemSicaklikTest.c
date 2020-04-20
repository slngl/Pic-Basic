#include <stdio.h>
#include<math.h>

int main(void) {
	float T, RH,HI;
	
	scanf("%f%f",&T,&RH);
  T=(T* 1.8000+32);
	HI = 0-42.379 + 2.04901523*T + 10.14333127*RH - 0.22475541*T*RH - 0.00683783*T*T - 0.05481717*RH*RH + 0.00122874*T*T*RH + 0.00085282*T*RH*RH - 0.00000199*T*T*RH*RH;

	T=(-32)*5/9;
  printf("\n%f F",HI);
	HI=(HI-32)/1.8000;

	printf("\n%f C",HI);
	float a=HI+0.5;
	if((int)a==(int)HI){
		HI=floor(HI);
	}
	else{
		HI=ceil(HI);
	}
	
	printf("\n%.0f C",HI);
  return 0; 
}   //https://en.wikipedia.org/wiki/Heat_index  
    
