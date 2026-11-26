/**Parte 1: Esqueleto y menú Requerimientos: RF-01, RF-09, RF-10 */
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

int main() {


    vector<int>    codigos;
    vector<string> nombres;
    vector<string> especies;
    vector<string> razas;
    vector<int>    edades;
    vector<string> propietarios;

    int opcion;

    do {
        cout << "======== Bienvenido al sistema de gestión de mascotas ========" << endl;
        cout << "Seleccione una opción del menú:" << endl;
        cout << "1. Registrar mascota" << endl;
        cout << "2. Listar mascotas" << endl;
        cout << "3. Buscar mascota" << endl;
        cout << "4. Modificar mascota" << endl;
        cout << "5. Eliminar mascota" << endl;
        cout << "6. Ver estadísticas" << endl;
        cout << "7. Registrar consulta veterinaria" << endl;
        cout << "0. Salir" << endl;

        cin >> opcion;

        switch (opcion) {
            case 1: cout << "Espere un momento...\n"; 
                this_thread::sleep_for(chrono::seconds(5)); //Espera de 5 segundos 
                break;
            case 2: cout << "Listar...\n"; 
                this_thread::sleep_for(chrono::seconds(5)); 
                break;
            case 3: cout << "Buscar...\n";
                this_thread::sleep_for(chrono::seconds(5)); 
                break;
            case 4: cout << "Modificar...\n";
                this_thread::sleep_for(chrono::seconds(5)); 
                break;
            case 5: cout << "Eliminar...\n";
                this_thread::sleep_for(chrono::seconds(5)); 
                break;
            case 6: cout << "Estadisticas...\n";
                this_thread::sleep_for(chrono::seconds(5)); 
                break;
            case 0: cout << "Hasta pronto\n";
                this_thread::sleep_for(chrono::seconds(5)); 
                break;
            default: cout << "Opcion invalida\n";
        }

    } while (opcion != 0);

    
    return 0;
}

/*Parte 2: Datos y registrar mascota Requerimientos: RF-02*/ 

/*Parte 3: Listar mascotas Requerimientos: RF-03*/

/*Parte 4: Buscar mascota Requerimientos: RF-04*/

/*Parte 5: Modificar y eliminar Requerimientos: RF-05, RF-06*/

/*Parte 6: Estadísticas Requerimientos: RF-07*/

/*Parte 7: Validaciones Requerimientos: RF-08*/

/*Parte 8: Consultas veterinarias Requerimientos: RF-11*/