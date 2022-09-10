//simulador pagina de videojuegos 



#include<iostream> 

#include<string> 



using namespace std;

struct Articulo {
    char nombre[50];
    int numero_serie;
    int anio;
};

int main()

{
    Articulo juegos[4];


    cout << "Hola soy un nuevo cambio :)";


    cout << "\n1. agregar articulo: ";

    cout << "\n2. modificar articulo: ";

    cout << "\n3. eliminar/articulo: ";

    cout << "\n4. lista de articulos vigentes (opcion a genero, clasificacion: ";

    cout << "\n5. limpiar pantalla: ";

    cout << "\n6. salir. "<<endl;

    int opcion = 0;

    cin >> opcion;

    switch (opcion)
    {
    case 1:

        cout << "\n1. agregar el nombre del juego: ";

        cin >> juegos[0].nombre;
        break;
    default:
        break;
    }





}