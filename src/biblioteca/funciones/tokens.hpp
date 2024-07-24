#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

int tokenCount(string s,char sep)
{//Cuenta la cantidad tokens que el separador sep genera en s.
   int  i=0;
   int r=1;
   while(i<length(s)){
      if(s[i]==sep){
         r++;
      }
      i++;
   }
   return r;
}

void addToken(string& s,char sep,string t)
{//Agrega el token t al final de la cadena s.
   if (s==""){
      s=s+t;
   }
   else{
      s=s+sep+t;
   }
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
        // caso si se quiere al ultimo token *** bryan arreglo
        if(i == cantidadToken  )
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
   int ext = -1;
   int c1=0;
   while(c1<length(s) and ext<i){
        if(s[c1]==sep){
           ext++;
        }
        c1++;
     }

   int pr = 0;
      int c2=0;
      while(c2<length(s) and pr<i){
           if(s[c2]==sep){
              pr++;
           }
           c2++;
        }
      //cout << c1 << endl << c2 << endl;
   s = substring(s,0,c2)+ substring(s,c1);
}

void setTokenAt(string& s,char sep, string t,int i)
{
   removeTokenAt(s,sep,i);
   int pr = 0;
   int c2 = 0;
   while(c2<length(s) and pr<i){
        if(s[c2]==sep){
           pr++;
        }
        c2++;
     }
   int ext = -1;
     int c1=0;
     while(c1<length(s) and ext<i-1){
          if(s[c1]==sep){
             ext++;
          }
          c1++;
       }
      s = substring(s,0,c2) + t + substring(s,c1-1);
}

int findToken(string s,char sep, string t)
{//Determinar la posición que el token t ocupa dentro de la cadena s.
   int i = 0;
   int pos = 0;
   int res = 0;
   int c2 = 0;

   while(s[i]!='\0'){
      while(s[c2]!=sep){
            c2++;
         }
      if(substring(s,pos,c2)!= t){
        res++;
     } else {
        pos=pos+c2;
     }
      i++;
   }
      return res;
}

#endif

#endif

