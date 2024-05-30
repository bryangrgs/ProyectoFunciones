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
   /*
      cout<< length("Pirulito")<<endl;
      tutorial  1+i
      cout<< charCount("Apap.ku 6apa", 'x');

      string s="patata en casa en arg";

      cout<< substring(s,2,length(s))<<endl;
      //cout<< substring(s,5)<<endl;

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

      int numero=123;
      string resultado = intToString(numero);
      cout<<resultado<<endl;

      int b=16;
      string cadenaStringtoInt ="12AB"; //Ingresar binarios decimal o hexa
      int iStringtoint= stringToInt(cadenaStringtoInt,b);
      cout<<iStringtoint<<endl;

      string ssobrecar="12323";
      int istringtoubtsobre= stringToInt(ssobrecar);
      cout<<istringtoubtsobre<<endl;

      char cchartistring = ' ';
      string sChartostring = charToString(cchartistring);
      cout << sChartostring << endl; // muestra: A
      cout << length(sChartostring) << endl; // muestra: 1
        return 0;

      string sStringtochar = " ";
      char cstringtochar = stringToChar(sStringtochar);
      cout << cstringtochar << endl; // muestra: A
      cout << (int)cstringtochar << endl; // muestra: 65

      string s = "10";
      int i = stringToInt(s,10);
      cout << i << endl;
      int i = stringToInt(s);
      cout << i << endl;

      string s = stringToString("Hola");
      cout << s << endl;

      double d = 123.4;
      string s = doubleToString(d);
      cout << s << endl;

      string s = "123.4";
      double d = stringToDouble(s);
      cout << d << endl;

      string s = "";
      cout << isEmpty(s) << endl;

      string s1 = "cursoDeAlgoritmos";
      string s2 = "c";
      if( startsWith(s1,s2) )
      {
         cout << s2 << " es prefijo de: " << s1 << endl;
      }
      else {
         cout<<s2<<" no es prefijo "<<s1<<endl;
      }

      string s1 = "curso de patatas";
      string s2 = "patatas";
      if( endsWith(s1,s2) )
      {
      cout << s2 << " es sufijo de: " << s1 << endl;
      }
      else {
         cout<<s2<<" no es sufijo "<<s1<<endl;
      }

      string s = "abcd";
      char c = 'a';
      if( contains(s,c) )
      {
         cout << s << " contiene a: " << c << endl;
      }
      else
      {
         cout << s << " NO contiene a: " << c << endl;
      }

      string s = "Esto es una prueba";
      string r = replace(s,'e','X');
      cout << r << endl;

      string s = "Esto es una prueba";
      int pos = 4;
      char c = 'X';
      string r = insertAt(s,pos,c);
      cout << r << endl;

      int n = 5;
      string r = spaces(n);
      // muestra: [ ] (cinco espacios)
      cout << "[" << r << "]" << endl;

   char c = '3';
   if( isDigit(c) )
   {
   cout << c << " es digito" << endl;
   }
   else
   {
   cout << c << " NO es digito" << endl;
   }

   char c = 'X';
   if( isLetter(c) )
   {
   cout << c << " es letra" << endl; // SALIDA
   }
   else
   {
      cout << c << " NO es letra" << endl;
   }
  }

   string s1 = "Pablo";
   string s2 = "Queso";
   if( cmpString(s1,s2)<0 )
   {
   cout << s1 << " es menor que: " << s2 << endl;
   }
   else if(cmpString(s1,s2)>0){
   cout << s1 << " es mayor que: " << s2 << endl;
   }
   else{
   cout << s1 << " es igual que: " << s2 << endl;
   }

   double x = 25.7;
   double y = 36.9;
   if( cmpDouble(x,y)<0 )
   {
   cout << x << " es menor que: " << y << endl;
   }
   else if(cmpDouble(x,y)>0){
      cout << x << " es mayor que: " << y << endl;
      }
   else{
      cout << x << " es igual que: " << y << endl;
     }

   char c = 'n';
   char r = toUpperCase(c);
   cout << r << endl;
   }

   char c = 'n';
   char r = toLowerCase(c);
   cout << r << endl;

   string s = "hola";
   string r = toUpperCase(s);
   cout << r << endl;

   string s = "HOLA";
   string r = toLowerCase(s);
   cout << r << endl;

   string s = "Esto es una prueba";
   string x = substring(s,2);
   cout << x << endl; // muestra: to es una prueba


   string s = "Esto es una prueba";
   int pos = 7;
   string r = removeAt(s,pos);
   cout << r << endl; // SALIDA: Esto esuna prueba
   // con espacios a izquierda
   string s = "            Esto es una prueba";
   string r = ltrim(s);
   cout << "[" << r << "]" << endl; // [Esto es una prueba]

   string s = "Esto es una prueba ";
   string r = rtrim(s);
   cout << "[" << r << "]" << endl; // [Esto es una prueba]
   // sin espacios
   s = "Esto es una prueba";
   r = rtrim(s);
   cout << "[" << r << "]" << endl; // [Esto es una prueba]
   // con espacios a izquierda y derecha
   s = " Esto es una prueba ";
   r = rtrim(s);
   cout << "[" << r << "]" << endl; // [ Esto es una prueba]

   string s = "John";
   char sep = '|';
   int n = tokenCount(s,sep);
   cout << n << endl;

   string s = "";
   char sep = '|';
   addToken(s,sep,"John");
   cout << s << endl;
   addToken(s,sep,"Paul");
   cout << s << endl; // Salida: John|Paul
   addToken(s,sep,"George");
   cout << s << endl; // Salida: John|Paul|George
   addToken(s,sep,"Ringo");
   cout << s << endl; // Salida: John|Paul|George|Ringo

   string s = "John|Paul|George|Ringo";
   char sep = '|';
   int i = 2;
   removeTokenAt(s,sep,i);
   cout << s << endl; // Salida: John|Paul|Ringo
   i = 0;
   removeTokenAt(s,sep,i);
   cout << s << endl; // Salida: Paul|Ringo

   string s = "John|Paul|George|Ringo";
   char sep = '|';
   int i = 1;
   string t = "McCartney";
   setTokenAt(s,sep,t,i);
   cout << s << endl; // Salida: John|McCartney|George|Ringo
   */

   string s = "John|Paul|George|Ringo";
   char sep = '|';
   string t = "Paul";
   int p = findToken(s,sep,t);
   cout << p << endl; // Salida: 1
   /*string t = "John";
   p = findToken(s,sep,t);
   cout << p << endl; // Salida: 0*/
  }


#endif
