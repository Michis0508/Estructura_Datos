#include <iostream>
#include <vector>
using namespace std;

void imprime(vector<int> v);
void cargaValores(vector<int>& v);

int main(){
    system("cls");
    vector <int> v1;
    v1.assign(5, 0);
    imprime(v1);
    cargaValores(v1);
    imprime(v1);

}


void imprime(vector<int> v){
    for(auto elemento : v){
        cout << elemento << " ";
    }
    cout << endl;
}

void cargaValores(vector<int>& v){
    for(size_t i = 0; i < v.size(); i++){
        v[i] = i + 1;
    }
}