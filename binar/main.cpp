#include <iostream>
#include "extension.h"
#include "cmath"
#include <string>

using namespace std;

int main(char argc, char *argv[])
{
    c_numeration num;
    int a;

    //permet de savoir si la methode pour detemeiner le nombre et devent ou derriere la methode pour avoir le nombre a convertir
    for(int i =0;i<argc;i++){
        if(argv[i][0]=='-'){
                if(i==1){
                   num.setNbBase10(argv[2]);

                }else{
                    num.setNbBase10(argv[1]);
                }
                a=i;
        }
    }



    //permet de savoir en quel base convertir le nombre et laffiché
int counter = 0;
while(argv[a][++counter] != NULL);


cout<<"nombre: "<< num.getNbBase10()<<endl;


for(int i(1);i<counter;i++){
    if(num.DeterminerNombre(argv[a][i])=="0"){
        cout<<"bin: "<<num.DeterminerBinaire()<<endl;
    }else if(num.DeterminerNombre(argv[a][i])=="1"){
        cout<<"oct: "<<num.DeterminerOctal()<<endl;
    }else if(num.DeterminerNombre(argv[a][i])=="2"){
        cout<<"Hex: "<<num.DeterminerHexa()<<endl;
    }else if(num.DeterminerNombre(argv[a][i])=="3"){
        cout<<"Shadok: "<<num.DetermineShadok()<<endl;
    } else{
    cout<<"error not a good input"<<endl;
    }
}



    return 0;
}
