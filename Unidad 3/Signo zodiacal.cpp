#include <iostream>
using namespace std;
int main() {
    int mes, dia;   
    cout << "SIGNO ZODIACAL" << endl;
    cout << "(1):Enero,(2):Febrero,(3):Marzo,(4):Abril" << endl;
    cout << "(5):Mayo,(6):Junio,(7):Julio,(8):Agosto" << endl;
    cout << "(9):Septiembre,(10):Octubre,(11):Noviembre,12):Diciembre" << endl << endl;
    cout << "Ingrese la fecha (dia y mes):" << endl;
    cin >> dia >> mes;
    switch (mes) {
 // Condiciones para verificar si el dia es mayor o = 21
		case 1:
            if (dia >= 21) cout << "Acuario" << endl;
            else cout << "Capricornio" << endl;
            break;
        case 2:
            if (dia >= 21) cout << "Piscis" << endl;
            else cout << "Acuario" << endl;
            break;
        case 3:
            if (dia >= 21) cout << "Aries" << endl;
            else cout << "Piscis" << endl;
            break;
        case 4:
            if (dia >= 21) cout << "Tauro" << endl;
            else cout << "Aries" << endl;
            break;
        case 5:
            if (dia >= 21) cout << "Geminis" << endl;
            else cout << "Tauro" << endl;
            break;
        case 6:
            if (dia >= 21) cout << "Cancer" << endl;
            else cout << "Geminis" << endl;
            break;
        case 7:
            if (dia >= 21) cout << "Leo" << endl;
            else cout << "Cancer" << endl;
            break;
        case 8:
            if (dia >= 21) cout << "Virgo" << endl;
            else cout << "Leo" << endl;
            break;
        case 9:
            if (dia >= 21) cout << "Libra" << endl;
            else cout << "Virgo" << endl;
            break;
        case 10:
            if (dia >= 21) cout << "Escorpio" << endl;
            else cout << "Libra" << endl;
            break;
        case 11:
            if (dia >= 21) cout << "Sagitario" << endl;
            else cout << "Escorpion" << endl;
            break;
        case 12:
            if (dia >= 21) cout << "Capricornio" << endl;
            else cout << "Sagitario" << endl;
            break;
                   //comprobamos si esta bien
        default:
            cout << "ingresa un dia y un mes correcto" << endl;
    }
    return 0;
}
