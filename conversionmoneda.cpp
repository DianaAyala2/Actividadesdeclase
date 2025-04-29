#include <iostream> 
using namespace std;
int main (){
    double a, resultado;
    char Opcion;
    cout << "Por favor ingrese un numero: ";
    cin>> a;
    //Mostrar al usuario las formas de conversiones de dolares a otras monedas
    cout << "Por favor seleccione una opcion de conversion" <<endl;
    cout << "a USD a EUR (euros)" <<endl;
    cout << "b USD a JPY (yen)" <<endl;
    cout << "c USD a GBP (libras)" <<endl;
    cout << "Opcion:" ;
    cin >> Opcion;
    //Utlizar switch para mostrar los diferentes casos en las conversiones
    switch (Opcion){
        case 'a':
        resultado= a*1.14;
        cout<< "La cantidad de dolares en euros es:"<<resultado<<endl;
        break;
        case 'b':
        resultado= a*0.0070;
        cout<< "la cantidad de dolares en yenes es:"<<resultado<<endl;
        break;
        case 'c': 
        resultado= a*1.34;
        cout<< "La cantidad de dolares en libras es:"<<resultado<<endl;
        break;
    }
return 0;
}