#include <iostream>
#include <random>
#include <cmath>
#include <stdlib.h>


int main(){
	int i;
	srand48(8);
	float x = drand48();
	float alpha = 0.0;
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float del= 0.1;
	float prop=0.0;
	float r=0.0;
	float pi = 2.0*asin(1.0);
	
	for (i=0;i<10000;i++)
	{  
		prop=x+(drand48()-0.5*del);
		a=exp(-(x*x)/(2.0)/sqrt(2.0*pi));
		b=exp(-(prop*prop)/(2.0)/sqrt(2.0*pi));
		alpha=drand48();
		if(a/b<1)
		{
			r=a/b;
		}
		else
		{
			r=1;
		}
		if(alpha<r)
		{
			std::cout << i << " " << prop << std::endl;
		}
		else
		{
			std::cout << i << " " << x << std::endl;
		}
		x= drand48();
    
	}
  
  return 0;
}