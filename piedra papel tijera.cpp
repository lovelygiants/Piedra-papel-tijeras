#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	int cpu,hum,x,y;
	cout<<"hola jugaremos piedra papel o tijera"<<endl<<"selecciona un a opcion: "<<endl;
	cout<<"piedra:_____0"<<endl;
	cout<<"papel:______1"<<endl;
	cout<<"tijeras:____2"<<endl<<endl;
	
	x=1;
	y=1;
	
	while(x<3 && y<3)
	{
		cout<<"teclea tu opcion: "<<endl;
		
		cpu=rand()%3;
		cin>>hum;
		
		if(hum>2)
		{
			cout<<"opcion incorrecta "<<endl<<endl;
		}
		
		if(cpu==0 && hum==0)
		{
			cout<<"computadora eligio piedra"<<endl<<"empate"<<endl<<endl;
			
		}
		
		if(cpu==0 && hum==1)
		{
			cout<<"computadora eligio piedra"<<endl<<"humano gana"<<endl<<endl;
			y=y+1;
		}
		
		if(cpu==0 && hum==2)
		{
			cout<<"computadora eligio piedra"<<endl<<"computadora gana"<<endl<<endl;
			x=x+1;
		}
		
		if(cpu==1 && hum==0)
		{
			cout<<"computadora eligio papel"<<endl<<"computadora gana"<<endl<<endl;
			x=x+1;	
		}
		
		if(cpu==1 && hum==1)
		{
			cout<<"computadora eligio papel"<<endl<<"empate"<<endl<<endl;
			
		}
		
		if(cpu==1 && hum==2)
		{
			cout<<"computadora eligio papel"<<endl<<"humano gana"<<endl<<endl;
			y=y+1;
		}
		
		if(cpu==2 && hum==0)
		{
			cout<<"computadora eligio tijeras"<<endl<<"humano gana"<<endl<<endl;
			y=y+1;	
		}
		
		if(cpu==2 && hum==1)
		{
			cout<<"computadora eligio tijeras"<<endl<<"computadora gana"<<endl<<endl;
			x=x+1;
		}
		
		if(cpu==2 && hum==2)
		{
			cout<<"computadora eligio tijeras"<<endl<<"empate"<<endl<<endl;
			
		}
		
	}
	
	cout<<"juego terminado"<<endl<<endl;
	
	
	if(x=3)
	{
		
		cout<<"computadora ha ganado esta ronda"<<endl<<endl;	
	}
	else
	{
		cout<<"has ganado esta ronda"<<endl<<endl;
	}
	system("PAUSE");
	return 0;
}

