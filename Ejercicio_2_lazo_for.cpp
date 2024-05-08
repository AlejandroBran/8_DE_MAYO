#include <iostream>

using namespace std;

int main (){

    int n;
    
    int primo = 1;

    cout << "Ingrese un valor entero: ";
    cin >> n;
    

    for (int i=n-1; i >= 2; i=i-1){

        int modulo = n % i;
        if (modulo == 0){

            cout << n << " No es primo. "<<"\n";
            primo = 0;
            break;
        }
    
    }

    if (primo){

        cout << n << " Es primo. "<<"\n";
    }

    return 0;
}