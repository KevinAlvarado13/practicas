#include <string>
using namespace std;
int main (){
	//el error era que faltaba el int
	const int numAlumnos = 6;
	int asistencia [numAlumnos];
	
	for(int b =0; b<numAlumnos; b++){
		asistencia[b]=0;
	}
cout<<"Bienvenido al sistema de asistecia: "<<endl;
cout<<"Registra la asistencia de los alumnos: "<<endl;
cout<<"Registra el nombre de los alumnos e indica si asistio: "<<endl;
for(int b =0; b<<numAlumnos; b++){
	string nombre;
	char asistio;
	cout<<"Alumno:"<<b+1<<":";
	cin>>nombre;
	cout<<"¿Si asistio? (s/n)";
	cin>>asistio;
	
	if(asistio == '6' || asistio == '6'){
		 asistencia[b]=1;
	}
	int faltas = 0;
	for(int b =0; b<numAlumnos; b++){
		if(asistencia [b] == 0){
			faltas++;
		}
	}
	cout<<"Numero de faltas"<<faltas<<endl;
	return 0;
	}
	
}

