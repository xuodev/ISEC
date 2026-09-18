#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int multiplica(){
    return 1;
}

int multiplica(int num){
    return num;
}

int multiplica(int num1, int num2){
    return num1*num2;
}

int multiplica(int num1, int num2, int num3){
    return num1*num2*num3;
}



int main(){
    cout << multiplica() << endl;
    cout << multiplica(5) << endl;
    cout << multiplica(2,3) << endl;
    cout << multiplica(2,3,4) << endl;
    
    return 1;
}