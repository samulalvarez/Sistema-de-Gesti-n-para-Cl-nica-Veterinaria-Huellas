/**Parte 1: Esqueleto y menú Requerimientos: RF-01, RF-09, RF-10 */
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;



void mostrarMascota(int i, const vector<int> &codigos, const vector<string> &nombres, const vector<string> &especies, const vector<string> &razas, const vector<int> &edades, const vector<string> &propietarios)
{
    cout << "Codigo: " << codigos[i] << endl;
    cout << "Nombre: " << nombres[i] << endl;
    cout << "Especie: " << especies[i] << endl;
    cout << "Raza: " << razas[i] << endl;
    cout << "Edad: " << edades[i] << endl;
    cout << "Propietario: " << propietarios[i] << endl;
}

// Para buscar por campos tipo string
int  buscarPorTexto(const vector<string> &campo, const string &valor, const vector<int> &codigos, const vector<string> &nombres, const vector<string> &especies, const vector<string> &razas, const vector<int> &edades, const vector<string> &propietarios)
{
    bool encontrado = false;
    for (int i = 0; i < campo.size(); i++)
    {
        if (campo[i] == valor)
        {
            encontrado = true;
            return i;
        }
    }
    if (!encontrado)
    {
        cout << "No se encontraron mascotas.\n";
        return -1;
    }
}

// Para buscar por campos numericos
int buscarPorNumero(const vector<int> &campo, int valor, const vector<int> &codigos, const vector<string> &nombres, const vector<string> &especies, const vector<string> &razas, const vector<int> &edades, const vector<string> &propietarios)
{
    bool encontrado = false;
    for (int i = 0; i < campo.size(); i++)
    {
        if (campo[i] == valor)
        {
            encontrado = true;
            return i;
        }
    }
    if (!encontrado)
    {
        cout << "No se encontraron mascotas.\n";
        return -1;
    }
}

void menuBusqueda(const vector<int> &codigos, const vector<string> &nombres, const vector<string> &especies, const vector<string> &razas, const vector<int> &edades, const vector<string> &propietarios)
{
    int numero;
    string texto;
    int opcion;
    int indiceBusqueda;

    cin >> opcion;
    cin.ignore();

    switch (opcion)
    {
    case 1:
        cout << "Ingrese el codigo de la mascota" << endl;
        cin >> numero;
        indiceBusqueda = buscarPorNumero(codigos, numero, codigos, nombres, especies, razas, edades, propietarios);
        if (indiceBusqueda != -1)
            mostrarMascota(indiceBusqueda, codigos, nombres, especies, razas, edades, propietarios);
        break;
    case 2:
        cout << "Ingrese el nombre de la mascota" << endl;
        getline(cin, texto);
        indiceBusqueda = buscarPorTexto(nombres, texto, codigos, nombres, especies, razas, edades, propietarios);
        if (indiceBusqueda != -1)
            mostrarMascota(indiceBusqueda, codigos, nombres, especies, razas, edades, propietarios);
        break;
    case 3:
        cout << "Ingrese la especie de la mascota" << endl;
        getline(cin, texto);
        indiceBusqueda = buscarPorTexto(especies, texto, codigos, nombres, especies, razas, edades, propietarios);
        if (indiceBusqueda != -1)
            mostrarMascota(indiceBusqueda, codigos, nombres, especies, razas, edades, propietarios);
        break;
    case 4:
        cout << "Ingrese la raza de la mascota" << endl;
        getline(cin, texto);
        indiceBusqueda = buscarPorTexto(razas, texto, codigos, nombres, especies, razas, edades, propietarios);
        if (indiceBusqueda != -1)
            mostrarMascota(indiceBusqueda, codigos, nombres, especies, razas, edades, propietarios);
        break;
    case 5:
        cout << "Ingrese la edad de la mascota" << endl;
        cin >> numero;
        indiceBusqueda = buscarPorNumero(edades, numero, codigos, nombres, especies, razas, edades, propietarios);
        if (indiceBusqueda != -1)
            mostrarMascota(indiceBusqueda, codigos, nombres, especies, razas, edades, propietarios);
        break;
    case 6:
        cout << "Ingrese el nombre del propeitario de la mascota" << endl;
        getline(cin, texto);
        indiceBusqueda = buscarPorTexto(propietarios, texto, codigos, nombres, especies, razas, edades, propietarios);
        if (indiceBusqueda != -1)
            mostrarMascota(indiceBusqueda, codigos, nombres, especies, razas, edades, propietarios);
        break;
    default:
        cout << "Opción inválida" << endl;
    }
}


void menuModificar( const vector<int> &codigos,  vector<string> &nombres, const vector<string> &especies, const vector<string> &razas,  vector<int> &edades,  vector<string> &propietarios)
{
    int opcionModificar;
    string texto;

    do
    {
        cout << "1. Modificar Nombre de la Mascota" << endl;
        cout << "2. Modificar edad de la Mascota" << endl;
        cout << "3. Modificar Nombre del propietario de la Mascota" << endl;
        cout << "0. Volver al Menu Principal" << endl;

        cin >> opcionModificar;

        switch (opcionModificar)
        {
        case 1:
            cout << "Ingrese el nombre de la mascota";
            getline(cin, texto);
            buscarPorTexto(nombres, texto, codigos, nombres, especies, razas, edades, propietarios);
            break;

        default:

            cout << "Opcion invalida\n";
            break;
        }

    } while (opcionModificar != 0);
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

            cout << "Que informacion desea modificar?" << endl;
            menuModificar(codigos, nombres, especies, razas, edades, propietarios);

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