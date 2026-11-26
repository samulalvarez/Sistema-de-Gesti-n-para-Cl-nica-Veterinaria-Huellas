/**Parte 1: Esqueleto y menú Requerimientos: RF-01, RF-09, RF-10 */
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

void buscarMascota(const vector<int> &codigos, const vector<string> &nombres, const vector<string> &especies, const vector<string> &razas, const vector<int> &edades, const vector<string> &propietarios)
{
    int codigo;
    cout << "Ingrese el código de la mascota a buscar: ";
    cin >> codigo;

    bool encontrado = false;
    for (int i = 0; i < codigos.size(); ++i)
    {
        if (codigos[i] == codigo)
        {
            cout << "Codigo: " << codigos[i] << endl;
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Especie: " << especies[i] << endl;
            cout << "Raza: " << razas[i] << endl;
            cout << "Edad: " << edades[i] << endl;
            cout << "Propietario: " << propietarios[i] << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
    {
        cout << "Mascota no encontrada.\n";
    }
}

void menuBusqueda(const vector<int> &codigos, const vector<string> &nombres, const vector<string> &especies, const vector<string> &razas, const vector<int> &edades, const vector<string> &propietarios)
{
    int menuBusqueda;
    cin >> menuBusqueda;
    switch (menuBusqueda)
    {
    case 1:
        buscarMascota(codigos, nombres, especies, razas, edades, propietarios);
        break;
    case 2:
        cout << "2. Buscar por nombre" << endl;
        break;
    case 3:
        cout << "3. Buscar por especie" << endl;
        break;
    case 4:
        cout << "4. Buscar por raza" << endl;
        break;
    case 5:
        cout << "5. Buscar por edad" << endl;
        break;
    case 6:
        cout << "6. Buscar por propietario" << endl;
        break;
    default:
        cout << "Opción inválida" << endl;
    }
}

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
        case 1:
        {
            cout << "Espere un momento...\n";
            this_thread::sleep_for(chrono::seconds(3)); // Espera de 3 segundos

            int codigo;
            cout << "Ingrese el código de la mascota: ";
            cin >> codigo;
            cin.ignore();
            codigos.push_back(codigo);

            string nombre;
            cout << "Ingrese el nombre de la mascota: ";
            getline(cin, nombre);
            nombres.push_back(nombre);

            string especie;
            cout << "Ingrese la especie de la mascota: ";
            getline(cin, especie);
            especies.push_back(especie);

            string raza;
            cout << "Ingrese la raza de la mascota: ";
            getline(cin, raza);
            razas.push_back(raza);

            int edad;
            cout << "Ingrese la edad de la mascota: ";
            cin >> edad;
            cin.ignore();
            edades.push_back(edad);

            string propietario;
            cout << "Ingrese el nombre del propietario: ";
            getline(cin, propietario);
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
            cout << "1. Buscar por código\n";
            cout << "2. Buscar por nombre\n";
            cout << "3. Buscar por especie\n";
            cout << "4. Buscar por raza\n";
            cout << "5. Buscar por edad\n";
            cout << "6. Buscar por propietario\n";
            cout << "Ingrese el metodo por el cual quieres buscar la mascota: \n";
            menuBusqueda(codigos, nombres, especies, razas, edades, propietarios);
            break;
        case 4:
            cout << "Modificar...\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 5:
            cout << "Eliminar...\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
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