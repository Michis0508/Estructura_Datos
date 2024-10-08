#include <iostream>
#include <vector>
using namespace std;

void imprimeVector(vector<int> v1);
void limpiar();

int main(){
    system("cls");

    vector<int> v;

    //llenar el vector con 0, cinco veces
    v.assign(5, 0);
    imprimeVector(v);

    //inserta el 15 en la ultima posicion
    v.push_back(15);
    imprimeVector(v);

    //elimina el ultimo elemento
    v.pop_back();
    imprimeVector(v);

    //inserta un 5 al principio del vector
    v.insert(v.begin(), 5);
    imprimeVector(v);

    //borra el primer elemento
    v.erase(v.begin());
    imprimeVector(v);

    //inserta 25 al inicio
    v.emplace(v.begin(), 25);
    imprimeVector(v);

    //inserta 20 al final
    v.emplace_back(20);
    imprimeVector(v);

    //borra completamente el vector
    v.clear();
    imprimeVector(v);
    limpiar();

    //swap entre 2 vectores
    vector <int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    imprimeVector(v1);
    imprimeVector(v2);
    v1.swap(v2);
    imprimeVector(v1);
    imprimeVector(v2);
}
void limpiar(){
    system("pause");
    system("cls");
}


void imprimeVector(vector<int> v1){
    for(auto elemento : v1){
        cout << elemento << " "; 
    }
    cout << endl;
    //limpiar();
}
