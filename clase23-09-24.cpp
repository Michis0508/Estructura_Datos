#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main (){
    //Built-in
    /*int arreglo[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++){
        cout << arreglo[i] << endl;
    }
    for ( auto elementos : arreglo){
        cout << elementos << endl;
    }*/

   //Array Class
    /*array <int, 5> arreglo2 {1, 2, 3, 4, 5};
    for(int i = 0; i < arreglo2.size(); i++){
        cout << arreglo2[i] << endl;
    }*/

   //Vector
   vector<int> v{1, 2, 3, 4, 5};
   /*for(int contador : v){
    cout << contador << endl;
   }*/
   v.push_back(6);
   /*for(int contador : v){
    cout << contador << endl;
   }*/
   //   Salida usando begin(), end()
   cout << "Salida de begin end" << endl;
   for(auto it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
   }
   cout << endl;
   cout << "Salida de begin end" << endl;
   for(auto it = v.rbegin(); it != v.rend(); it++){
    cout << *it << " ";
   }

}