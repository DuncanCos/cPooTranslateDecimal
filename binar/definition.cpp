#include "extension.h"
#include <iostream>
#include <string>
using namespace  std;


//constructeur de l'objet avec initialisation a 0
c_numeration::c_numeration()
{
    m_nbBase10=0;
}

//destructeur de l'objet
c_numeration::~c_numeration()
{

}

//permet de recuperer le nombre et sa longueur dans un string  puis de le convertir en int
bool c_numeration::setNbBase10(char *nb)
{

    string str = nb;
    int taille=str.size();
    convASCII2Int(nb,taille);
}

//pourrat permettre d'fficher le chiffre en decimal
unsigned short c_numeration::getNbBase10()
{
return m_nbBase10;
}

//permet de prendre le chiffre qui est en char et de le convertir en int
unsigned short c_numeration::convASCII2Int(char *nb, int taille)
{
    for(int i=0;i<taille;i++)
    {
            m_nbBase10=(m_nbBase10*10);
            m_nbBase10+=(nb[i]-48);
    }

}

//permet de trouver la version binaire du nombre
string c_numeration::DeterminerBinaire()
{
    string slt,o;
    int i(0),num(m_nbBase10);

    while(num>0)
        {

            int t =num%2;
            char y = (char)t;
            o =to_string(y);
            slt+=o;
            num/=2;
            i++;
        }
    i-=1;

        while(i>0)
        {
            i--;
            o+=slt[i];
        }
return o;
}

//permet de trouver la version octal du nombre
string c_numeration::DeterminerOctal()
{

    string slt,o;
    int i(0),z(m_nbBase10);

    while(z>0)
        {

            int t =z%8;
            slt+=48+t;
            z=z/8;
            i++;
        }

        while(i>0)
        {
            i--;
            o+=slt[i];
        }
return o;

}

//permet de trouver la version hexadecimal du nombre
string c_numeration::DeterminerHexa()
{

    string slt,o;
    int i(0),num(m_nbBase10);

    while(num>0)
        {
            int t =num%16;

             if(t<=9){
               slt +=48+t;
               i++;
            }else{
            slt +=87+t;
            i++;
            }
            num=num/16;

        }

i-=1;
        while(i>=0)
        {
           // cout<<i<<endl;
             o+=slt[i];
             i--;

        }

return o;

}


//permet de savoir en quoi on va convertir le nombre
string c_numeration::DeterminerNombre(char base)
{

    string numer;
    string test ="";
    test= test + base;

    if(base=='b'){
        numer+="0";
    }else if(base=='o'){
        numer+="1";
    }else if(base =='h'){
        numer+="2";
    }else if(base =='s'){
        numer+="3";
    }else{
    cout<<"fuck";
    }
    return numer;
}

//permet de trouver la version binaire du nombre
string c_numeration::DetermineShadok(){

string slt,o;
    int i(0),num(m_nbBase10);

    while(num>0)
        {
            int t =num%4;

            switch(t){
        case 0:
            o.insert(0,"ga");
            break;
            case 1:
            o.insert(0,"bu");
            break;
            case 2:
            o.insert(0,"zo");
            break;
            case 3:
            o.insert(0,"meu");
            break;
            default:o+="nik";

            }
            num=num/4;

        }
        return o;

}
