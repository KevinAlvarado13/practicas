#include<iostream>
using namespace std;
int main(){
	int numer;
	cout<<"please add table multiplit numer;"<<endl;
	cin>>numer;
	
	for(int i=1;i<=10 ;i++){
		int multiplicacion = i * numer;
		cout<<numer<<"x"<<"="<<multiplicacion<<endl;
	}
	return 0;
}
} else {
        binario = "No se puede realizar la conversión. Ingrese solo numeros positivos";
    }
    cout << "El resultado de la conversion es: " << binario;
    return 0;
}
