// incluir la libreria 
#include<iostream>
/* utilizar todos los caracteres y funciones
de la libreria 
*/
using namespace std;
// funcion principal
int main(){
	
	int a,b,c,d,e,suma,promedio;
	cout<<"Bienvenido a esta rutina en la cual calculara tu promedio"<<endl;
	cout<<"Por favor digita la primera evaluacion"<<endl;
	cin>>a;
	cout<<"Por favor digita la segunda evaluacion"<<endl;
	cin>>b;
	cout<<"Por favor digita la Tercera evaluacion"<<endl;
	cin>>c;
	cout<<"Por favor digita la cuarta evaluacion"<<endl;
	cin>>d;
	cout<<"Por favor digita la quinta evaluacion"<<endl;
	cin>>e;
	promedio = (a+b+c+d+e)/5;
	cout<<"Tu promedio general es aprobatoria"<<endl;
	if(promedio >=7){
		cout<<"tu promedio general es de:"<<promedio<<endl;
		
	}
	else{
		cout<<"lo lamento tu calificacion no es aprobatoria"<<endl;
	}
	cout<<"gracias por usar esta aplicacion";
	return 0;
	
}
