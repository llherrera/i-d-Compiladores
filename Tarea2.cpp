#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string cadena, res;
    cout << "Ingrese la cadena" << endl;
    getline(cin, cadena);
    regex expReg("^\\s |\\s$ |\\s\\s+");
    res = regex_replace(cadena, expReg, "");
    cout << res << endl;
    return 0;
}