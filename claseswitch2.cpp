#include <iostream>
using namespace std;
int main () {
    float num1, num2, resultado;
    char opcion;
    cout << "Por favor ingrese el primer numero: ";
    cin >> num1;
    cout << "POr favor ingrese el segundo numero: ";
    cin >> num2;
// Mostrar las opciones al usuario 
    cout << "Seleccione una operacion: " <<endl;
    cout << "a suma" <<endl;
    cout << "b resta" <<endl;
    cout << "c multiplicacion" <<endl;
    cout << "d division" <<endl;
    cout << "Opcion: ";
    cin>> opcion;
// usar switch para presentar los cuatro diferentes casos
    switch (opcion){
        case 'a': 
        resultado= num1 + num2;
        cout << "El resultado de la suma es: "<<resultado<<endl;
        break;
        case 'b': 
        resultado= num1 - num2;
        cout << "El resultado de la resta es: "<<resultado<<endl;
        break;
        case 'c': 
        resultado= num1*num2;
        cout << "El resultado de la multiplicacion es: "<<resultado<<endl;
        break;
        // para el caso d, utilizar if para explicar la condicion en la operacion de la division
        case 'd': 
        if (num2!=0) {
        resultado= num1/num2;
        cout << "El resultado de la division es: "<<resultado<<endl;
        break;
        }else{
            cout << "El resultado de la division no es permitida. "<<resultado<<endl;
        }
        break;
        default:
        cout<< "Opción no valida, por favor elija una opción de a hacia b"<<endl;
        return 1; // return 1 porque es salida temprana del programa al terminar los casos
    }

if (resultado>0){
    cout << "El resultado es positivo."<<endl;
} else if (resultado<0){
    cout << "El resultado es negativo." <<endl;
} else { 
    cout<< "El resultado es cero. " <<endl;
}
return 0;




}