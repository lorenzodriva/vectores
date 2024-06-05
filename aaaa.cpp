#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numerosDinamicos = {1,2,3,4,5}; //inicializa el array (estatico)

    cout << numerosDinamicos[3]<<endl; //muestra un elemento del array

    numerosDinamicos.push_back(8); //agrega un elemento al final

    size_t longitud = numerosDinamicos.size(); // calcula longitud del array

    // bucle FOR normal
    for (size_t i = 0; i < numerosDinamicos.size(); i++){ //IMPRIME CONTENIDO ARRAY
        cout << numerosDinamicos[i] << " ";
    }

    cout<<endl;

    //BASADO en rango
    for (int value : numerosDinamicos){
        cout << value << " ";
    }

    return 0;
}
