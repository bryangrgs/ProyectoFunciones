#ifndef _MAIN
#define _MAIN

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/parte2/Array.hpp"
#include "biblioteca/tads/parte2/Map.hpp"
#include "biblioteca/tads/parte2/List.hpp"
#include "biblioteca/tads/parte2/Stack.hpp"
#include "biblioteca/tads/parte2/Queue.hpp"
#include "biblioteca/tads/parte1/Coll.hpp"
#include "biblioteca/tads/parte1/MultidimColl.hpp"
using namespace std;

int main()
{
<<<<<<< HEAD
   /*
    cout<< length("Pirulito")<<endl;
    tutorial  1+i
    cout<< charCount("Apap.ku 6apa", 'x');
    */
    string s="patata en casa en arg";
    /*
    cout<< substring(s,2,length(s))<<endl;
    cout<< substring(s,5)<<endl;

    int p = indexOf(s,'c');
    cout << p << endl;

    int p = indexOf(s,'a',5);
    cout << p << endl;

    int p = indexOf(s,"en");
    cout << p << endl;

    int p = indexOf(s,"ta",3);
    cout << p << endl;

    int p = lastIndexOf(s,'e');
    cout << p << endl;
      char palabrita='D';
      int valor= charToInt(palabrita);
      cout << valor << endl;
      int numerito=65;
         char letrita= intToChar(numerito);
         cout << letrita << endl;

      int numerote=4587412;
      int posicion=0;
      int digito= getDigit(numerote,posicion);
      cout<< digito<<endl;
      int digitocontador= digitCount(numerote);
      cout<< digitocontador<<endl;
      */
=======
   cout<< length("Pirulito")<<endl;
   //tutorial  1+i
   cout<< charCount("Apap.ku 6apa", 'x')<<endl;
   string s="Cadena a recorrer";
   //cout<< substring(s,2,length(s))<<endl;
   cout<< substring(s,5)<<endl;
   int p = indexOf(s,'f');
   cout << p << endl;
   char palabrita='D';
   int valor= charToInt(palabrita);
   cout << valor << endl;
   int numerito=65;
      char letrita= intToChar(numerito);
      cout << letrita << endl;
>>>>>>> 1d3f19ed034dc238c1d40c8c5c5bb1baf4bc1453
   return 0;
}

#endif
