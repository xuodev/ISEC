#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

string name;

cout << "Introduza o seu nome" << endl;
getline(cin, name);

istringstream my_stream(name);

string nome;

while (my_stream >> nome) {

  cout << nome << endl;

  if (nome == "Fernando"){
      cout << "Eu conheco o fernando" << endl;
  }
}

return 0;

}


