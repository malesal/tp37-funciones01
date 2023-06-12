#include<iostream>
using namespace std;
int CalcularMaximo(int a, int b);

int main() {
    int num1=0, num2=0, maximo;
    
    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;
    
    
    cout << "El maximo entre " << num1 << " y " << num2 << " es: " <<CalcularMaximo(num1, num2) << endl;
    
    return 0;
}

int CalcularMaximo(int a, int b) {
    int max;
    if(a>b){
      max=a  ;
    }else
	{ 
	  max=b; 
	}
return max;
}
 
