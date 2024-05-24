#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

int tokenCount(string s,char sep)
{
   return 0;
}

void addToken(string& s,char sep,string t)
{
}


string getTokenAt(string s,char sep, int i)
{
    int cantidadToken = tokenCount(s,sep);
    string token;

    // caso si se quiere el token 0
    if(i == 0)
    {
        int posPrimerSep = indexOf(s,sep);
        token = substring(s,0,posPrimerSep);
    }
    else
    {
        // caso si se quiere al ultimo token
        if(i == cantidadToken - 1)
        {
            // le sumo uno a posUltimoSep porque la funcion substring incluye este caracter, y no queremos que incluya sep
            int posUltimoSep = lastIndexOf(s,sep) + 1;
            int posFin = indexOf(s,'\0');
            token = substring(s,posUltimoSep,posFin);
        }

        // caso si se quiere cualquier token del medio
        else
        {
            // le tengo que sumar 1 a posIniSep porque la funcion substring incluye este caracter, y no queremos que incluya el caracter sep
            int posIniSep = indexOfN(s,sep,i) + 1;
            // le sumo uno a i porque quiero entre la pos i e i + 1
            int posFinSep = indexOfN(s,sep,i + 1);

            token = substring(s,posIniSep,posFinSep);
        }
    }
    return token;
}
void removeTokenAt(string& s,char sep, int i)
{
}

void setTokenAt(string& s,char sep, string t,int i)
{
}

int findToken(string s,char sep, string t)
{
   return 0;
}

#endif
