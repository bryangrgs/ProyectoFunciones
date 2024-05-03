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
   cout<< length("Pirulito")<<endl;
   //tutorial  1+i
   cout<< charCount("Apap.ku 6apa", 'x')<<endl;
   string s="Cadena a recorrer";
   //cout<< substring(s,2,length(s))<<endl;
   cout<< substring(s,5)<<endl;
   int p = indexOf(s,'f');
   cout << p << endl;

   return 0;
}

#endif
