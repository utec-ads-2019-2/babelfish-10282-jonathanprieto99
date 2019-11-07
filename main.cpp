#include <iostream>

#include <map>
#include <sstream>

using namespace std;

void ingresar_map(string palabra1, string palabra2, map<string,string> &palabras){
    palabras[palabra1]=palabra2;
}

string resultado(map<string,string> &palabras,string buscar){
    map<string, string>::iterator iterator;
    iterator = palabras.find(buscar);
    if(iterator != palabras.end())
        return iterator->second;
    else
        return "eh";
}

int main(){
    map<string,string> palabras;
    string a;
    string b;
    string buscar;
    string linea;
    while(getline(cin,linea)){
        if(linea.empty()){
            break;
        }
        istringstream lineanueva(linea);
        lineanueva>>a>>b;
        ingresar_map(a,b,palabras);
    }

    while (cin>>buscar){
        cout<<resultado(palabras,buscar)<<endl;
    }


    return 0;
}
