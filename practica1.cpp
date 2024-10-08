#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <iomanip>

using namespace std;
using namespace std::chrono;

void imprime(vector<double> v);
void burbuja(vector<double>& v);
void cambia(double &a, double &b);

int main(){
    //vector con 1000 elementos
    vector<double> vector1;
    random_device rd;
    default_random_engine gen(rd());
    uniform_real_distribution<double> distribution(1.5, 1.90);

    //generar 100 datos con una instruccion ciclica

    for(int i = 0; i < 1000; i++){
        double num = distribution(gen);
        vector1.push_back(num);
    }
    burbuja(vector1);
    system("pause");
    imprime(vector1);

}

void imprime(vector<double> v){
    cout << fixed << setprecision(2); 
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

void burbuja(vector<double>& v){
    auto inicio = high_resolution_clock::now();
    for(size_t i = 0; i < v.size() - 1; i++){
        for(size_t j = 0; j < v.size() - 1 - i; j++){
            if(v[j] > v[j+1]){
                cambia(v[j], v[j+1]);
            }
        }
    }
    auto fin = high_resolution_clock::now();
    auto duracion = duration_cast<milliseconds>(fin - inicio);
    cout << "Tiempo de ejecucion de burbuja: " << duracion.count() << " milisegundos" << endl;
}

void cambia(double &a, double &b){
    double temp = a;
    a = b;
    b = temp;
}