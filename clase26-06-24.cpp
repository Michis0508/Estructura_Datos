#include <iostream>
#include <vector>
using namespace std;


void imprimeVector(vector<int> v1){
    for(auto elemento : v1){
        cout << elemento << " "; 
    }
    cout << endl;

}

void funcionesCapacidad(){

    vector<int> v1;
    cout << "Tamaño del vector: " << v1.size() << endl;
    for (int i = 0; i < 5; i++){
        v1.push_back(i);
    }
    cout << "Tamaño del vector: " << v1.size() << endl;
    imprimeVector(v1);
    //  Pushback añade un elemento al final del vector
    v1.push_back(550);
    imprimeVector(v1);
    //  max_size devuelve el numero maximo de elementos que puede contener un vector
    cout << "Tamaño maximo del vector: "<< v1.max_size() << endl;
    //  capacity devuelve el tamaño de espacio de almacenamiento asignado actualmente al vector expresado como numero de elementos
    cout << "Capacidad del vector: " << v1.capacity() << endl;
    //  resize cambia el tamaño actual del vector
    cout << "Cambiar el tamaño de vector a 4" << endl;
    v1.resize(40);
    imprimeVector(v1);

    // empty verifica si un vector esta vacio o no
    vector<int> v2;
    cout << v2.empty() << endl;

    //  shrink_to_fit reduce la capacidad del vector para adaptarse a su tamaño y destruye el resto de elementos
    v1.shrink_to_fit();
    imprimeVector(v1);
    

}

void apuntadoresCpp(){
    
    vector<int> v1;

    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    cout << "Salida de begin hasta end: " << endl;
    for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << " ";

    cout << "\nSalida de cbegin hasta cend: " << endl;
    for (auto i = v1.cbegin(); i != v1.cend(); ++i)
        cout << *i << " ";

    cout << "\nSalida de rbegin hasta rend: " << endl;
    for (auto j = v1.rbegin(); j != v1.rend(); ++j)
        cout << *j << " ";

    cout << "\nSalida de crbegin hasta crend : " << endl;
    for (auto j = v1.crbegin(); j != v1.crend(); ++j)
        cout << *j << " ";
        
}

int main(){
    vector<int> v1;
    cout << "Inicializar el vector de 5 elementos con valor 0" << endl;
    v1.assign(5, 0);
    imprimeVector(v1);
    funcionesCapacidad();
    apuntadoresCpp();

}