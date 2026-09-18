#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

int& seleciona(int &a, int &b, char letra){
    
if (letra == 'M'){
    return a > b ? a : b;
}

if (letra == 'm'){
    return a < b ? a : b;

}

if (letra == 'p' || letra == 'u'){
    if (letra == 'p'){
       return a; 
    }else{
        return b;
    }
}else{
    throw invalid_argument("Letra invalida");
}

}

int main(){
    
    int a = 5; int b = 10;
    
    seleciona(a,b,'X') -=3;
    cout << "a = " << a << " b = " << b;
    
    return 1;
    
}