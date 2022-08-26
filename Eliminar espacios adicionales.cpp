#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string cadena;
    cout << "Ingrese la cadena" << endl;
    getline(cin, cadena);
    regex expReg("\\s\\s+");// mas de 2 espacios
    regex expReg2("(^|\n)\\s");// espacio al inicio
    regex expReg3("(?=\n|$)\\s");// espacio al final
    cadena = regex_replace(cadena, expReg, " ");
    cadena = regex_replace(cadena, expReg2, "");
    cadena = regex_replace(cadena, expReg3, "");
    cout << cadena << endl;
    return 0;
}