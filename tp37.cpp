
#include <iostream>
using namespace std;

int CalcularMaximo(int a, int b);

int main() {
    int num1, num2, maximo;
    
    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;
    maximo = CalcularMaximo(num1, num2);
    
    cout << "El maximo entre " << num1 << " y " << num2 << " es: " << maximo << endl;
    
    return 0;
}

int CalcularMaximo(int a, int b) {
    bool flag=false ;
    if(a>b){
      flag=true  ;
    } else{
    return flag;
        
    }
}

