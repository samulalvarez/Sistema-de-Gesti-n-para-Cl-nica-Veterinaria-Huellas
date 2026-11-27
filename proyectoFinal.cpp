/**Parte 1: Esqueleto y menú Requerimientos: RF-01, RF-09, RF-10 */
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

int main()
{

    vector<int> codigos;
    vector<string> nombres;
    vector<string> especies;
    vector<string> razas;
    vector<int> edades;
    vector<string> propietarios;

    int opcion;

    do
    {
        cout << "======== Bienvenido al sistema de gestión de mascotas ========" << endl;
        cout << "1. Registrar mascota" << endl;
        cout << "2. Listar mascotas" << endl;
        cout << "3. Buscar mascota" << endl;
        cout << "4. Modificar mascota" << endl;
        cout << "5. Eliminar mascota" << endl;
        cout << "6. Ver estadísticas" << endl;
        cout << "7. Registrar consulta veterinaria" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opción: ";

        cin >> opcion;

        switch (opcion)
        {

        // REGISTRO
        case 1:{
            cout << "Espere un momento...\n";
            this_thread::sleep_for(chrono::seconds(3)); // Espera de 3 segundos

            int codigo;
            cout << "Ingrese el código de la mascota: ";
            cin >> codigo;
            codigos.push_back(codigo);

            string nombre;
            cout << "Ingrese el nombre de la mascota: ";
            cin >> nombre;
            nombres.push_back(nombre);

            string especie;
            cout << "Ingrese la especie de la mascota: ";
            cin >> especie;
            especies.push_back(especie);

            string raza;
            cout << "Ingrese la raza de la mascota: ";
            cin >> raza;
            razas.push_back(raza);

            int edad;
            cout << "Ingrese la edad de la mascota: ";
            cin >> edad;
            edades.push_back(edad);

            string propietario;
            cout << "Ingrese el nombre del propietario: ";
            cin >> propietario;
            propietarios.push_back(propietario);

            cout << "Registro exitoso!\n";

            break;

            

        }
        case 2:
            cout << "Listar...\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 3:
            cout << "Buscar...\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 4:
            cout << "Modificar...\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;




        case 5: {   /*Parte 5: Modificar y eliminar Requerimientos: RF-05, RF-06*/
            cout << "Eliminar...\n";
            this_thread::sleep_for(chrono::seconds(5));

             if (codigos.empty()) { 
            cout << "No hay mascotas registradas." << endl; 
            break;
           }
         
           int codigo; 
           cout<< "Ingrese codigo de la mascota a eliminar: ";
           cin >> codigo;

         //se busca la posicion de manera lineal 
           int pos = -1;
           for (int i = 0 ; i < codigos.size(); i++ ) { 
              if (codigos[i] == codigo) { 
                pos = i; 
                break; 
              }
              
           }

           // confirmacion del proceso (RF-08).  
            char confirmar; 
            cout << "Se eliminara a " <<nombres[pos] << " Desea continuar? (s/n): ";
            cin >> confirmar; 

            if (confirmar != 's' && confirmar != 'S') { 
                cout << "Proceso cancelado. " << endl;
                break; 
            }


           if (pos == -1 ) { 
               cout << "La mascota no esta registrada." << endl; 
               break; 
            } 

            for (int i = pos; i < codigos.size() -1; i++ ) { 
                codigos [i]      = codigos[i + 1];  
                nombres [i]      = nombres[i + 1];  
                especies[i]      = especies[i + 1];  
                razas [i]        = razas[i + 1];  
                edades [i]       = edades[i + 1];  
                propietarios [i] = propietarios[i + 1];  
            }

            codigos.pop_back();
            nombres.pop_back();
            especies.pop_back();
            razas.pop_back();
            edades.pop_back();
            propietarios.pop_back();
            
            cout << "Mascota eliminada." <<endl; 

          break;
         }


        case 6:
            cout << "Estadisticas...\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 0:
            cout << "Hasta pronto\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        default:
            cout << "Opcion invalida\n";
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