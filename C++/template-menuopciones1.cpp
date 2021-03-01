// Creado y codificado por Jose Esteban Zabala Montaña (KitsuneCode), si vas a usarlo en otro proyecto no olvides darme el creadito :3
// Encuentra mas templates de codigo en mi GitHub

//Esta es una template para un menu de opciones basico con la funcion if, esta ves con una version para c++

#include <iostream>

using namespace std;

// Inicio del anidamiento :D
int main ()
{
    int opcion_template = 0;

    cout << "-- TEMPLATE DE MENU DE OPCIONES BASICO - VERSION C++ --" <<endl;
    cout << "1. Opcion 1" << endl;
    cout << "2. Opcion 2" << endl;
    cout << "3. Salir" << endl;
    cout <<"Escribe el numero de opcion "; cin >> opcion_template;
    system ("cls");
    

if (opcion_template == 1){
 	
 	    cout << "Aqui se establece la primera opcion" << endl;
        
}
if (opcion_template == 2){
	
	    cout << "Aqui escribes la segunda opcion" << endl;
	    
}
if (opcion_template >= 3){

        cout << "Aqui escribes la tercera opcion, en este caso es para cerrar el programa si el numero es mayor o igual a 3" << endl;

}

return 3;

}
   // Fin del anidamiento :P
   // Creado y codificado por Jose Esteban Zabala Montaña (KitsuneCode), si vas a usarlo en otro proyecto no olvides darme el creadito :3
