#include <iostream>

using namespace std;

int main (){

    char opcion, variable ='x';

    do 
    {
        cout << "Menu"<<"\n";
        cout << "A Carne asada"<<"\n";
        cout << "B pollo"<<"\n";
        cout << "C cerdo"<< "\n";
        cout << "D pesccado"<<"\n";
        cout << "Seleccione una opcion "<<"\n";
        cin >> opcion;
        cout << "Opcion seleccionada "<<opcion<<"\n";

    }
    while (!(opcion == 'A' || opcion== 'B' || opcion== 'C' || opcion == 'D'));
    
    


    return 0;
}
