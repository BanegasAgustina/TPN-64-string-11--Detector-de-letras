#include <bits/stdc++.h>

using namespace std;

string DetectordeLetras(string f);
int main()
{
   string frase;
   cout<<"ingrese cadena de texto :  ";
   getline(cin,frase);
   cout<<DetectordeLetras(frase);
    return 0;
   
}
string DetectordeLetras(string f){
    
    
    
    for(int i=0;i<f.size();i++){
        if(f[i] == 'A'||f[i] == 'E'||f[i] == 'I'||f[i] == 'O'||f[i] == 'U'){
           f[i]='V';
        }
        else if(f[i] == 'B'||f[i] == 'D'||f[i] == 'F'||f[i] == 'G'||f[i] == 'H'||f[i] == 'J'||f[i] == 'K'||f[i] == 'L'||f[i] == 'M'||f[i] == 'N'||f[i] == 'P'||f[i] == 'Q'||f[i] == 'R'||f[i] == 'S'||f[i] == 'T'||f[i] == 'V'||f[i] == 'W'||f[i] == 'X'||f[i] == 'Z'){
            f[i]='C';
        }
        else if(f[i]=='Y'){
            f[i]='S';
        }
    }
    return f;
}