#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int length(string s)
{
   int i = 0;

   while (s[i]!='\0'){
   i ++;
   }

   return i;
}

int charCount(string s,char c)
{
   int i = 0;
   int n = 0;
   while (s[i]!='\0'){
   i ++;
   if (s[i]==c){
      n++;
   }
   }
   return n;
}
string substring(string s,int d,int h)
{
  // string substring(string s,int d,int h)
    //  {
        //  int i = 0;
        //  string subCadena = "";
        //  int cantCaracteres = length(s); //cantidad de caracteres que tiene
         // while(i == h || i < cantCaracteres) {
           //   if(i >= d && i < h){
               //   subCadena = subCadena + s[i];
         //     }
        //      i++;
       //   }
       //   return subCadena;
    //  }

      //int longitud = h - d;



    return  0; //s.substr(d, longitud) 0;
}

string substring(string s,int d) // ok
{
   return "";
}
/*
int indexOf(string s,char c) // ok
{
   int a = 0;
<<<<<<< HEAD
   while(s[a]!='\0' && s[a]!=c)
   {
      a++;
   }

   int ret = a;
   if( s[a]=='\0' )
   {
      ret = -1;
   }

   return ret;
}
*/
int indexOf(string s,char c) // ok
{
   int a = 0;
   int t=-1;
   while (a<length(s) && t<0)
   {
      if(s[a]==c)
      {
         t=a; //+1;
      }
      a++;
   }

/*
   if(s[a]!='\0')
   {
   }
*/

   return t;
=======
   int t;
   while (length(s)>a){

      if(c==s[a]){
         t=a+1;
         break;
      }
      a++;
   }
   if (c!=s[a] && s[a]!='\0') {
      cout<<"-1"<<endl;
    }
   return t;
}
>>>>>>> 1d3f19ed034dc238c1d40c8c5c5bb1baf4bc1453
}

int indexOf(string s,char c,int offSet) // ok
{
   int a = 0;
   int t=-1;
   while (a<length(s)&& t<0){

      if(s[a]==c){
         a=offSet;
         t=a+1;
      }
      a++;
   }

   return t;
}

int indexOf(string s,string toSearch) // ok
{
   int a = 0;
   int t=-1;
   int i=0;
   while (a<length(s)&& t<0){

      if(s[a]==toSearch[i]){
         i++;
         t=a+1;
      }
      a++;
   }
   /*
   if (s[a]!=toSearch[i] && toSearch[i]!='\0') {
      cout<<"-1"<<endl;
    }
    */
   return t;
}

int indexOf(string s,string toSearch,int offset) // ok
{
   int a=offset;
   int t=-1;
   int i=0;
   while (a<length(s)&& t<0){

      if(s[a]==toSearch[i]){
         i++;
         t=a+1;
      }
      a++;
   }
   return t;
 }

int lastIndexOf(string s,char c)
{
   int rep = charCount( s, c);
   int a = 0;
   int rc = 0;

   while(length(s)>a && s[a]!='\0' && rep>rc){
      if(s[a]==c){
         rc++;
      }
      a++;
   }
   if(s[0]==c){
      rep++;
   }
   cout << a <<endl;
   cout << rep <<endl;
   if(a>0){

   }
   if (a==0){
      if (s[0]!=c && rep==0){
         a=a-1;
      } else {
          a=1;
       }
   }

  return a;
}


int indexOfN(string s,char c,int n)
{
   return 0;
}

int charToInt(char c)

  {
 if (c >= '0' && c <= '9'){

    return c -'0';//Caracter numerico
 }else if (c >= 'a' && c <= 'z'){
       return c- 'a'+10; //letra minuscula
 } else if (c >= 'A' && c <='Z'){
    return c-'A'+10; //letra mayuscula
 }else{
    return -1 ;//caracter no valido
 }
}


char intToChar(int i)
{
 if (i >= 0 && i <= 9){

    return i +'0';//Caracter numerico
 }else if ( i >= 65 && i <= 90){
       return i;
 }else if (i <=65 ){
    return i;
 }else{
    return -1; //caracter no valido
 }
    return i ;
 }


int getDigit(int n,int i)
{
   int digito = (n / static_cast<int>(pow(10, i ))) % 10;
   return digito;
}

int digitCount(int n)
{
   if(n == 0){
      return 1; //0 tiene un solo digito
   }
   int contadordigito=0;
   //iteramos mientras el numero no sea 0 :D
   while (n != 0){
      n /= 10;
      //incrementamos el contador de digitos
      contadordigito++;
   }
      return contadordigito;
}

string intToString(int i)
{
   return "";
}

int stringToInt(string s,int b) // ok
{

   return 0;
}

int stringToInt(string s) // ok
{
   return 0;
}

string charToString(char c)
{
   return "";
}

char stringToChar(string s)
{
   return 'X';
}

string stringToString(string s)
{
   return "";
}

string doubleToString(double d)
{
   return "";
}

double stringToDouble(string s)
{
   return 1.1;
}

bool isEmpty(string s)
{
   return true;
}

bool startsWith(string s,string x)
{
   return true;
}

bool endsWith(string s,string x)
{
   return true;
}

bool contains(string s,char c)
{
   return true;
}

string replace(string s,char oldChar,char newChar)
{
   return "";
}

string insertAt(string s,int pos,char c)
{
   return "";
}

string removeAt(string s,int pos)
{
   return "";
}

string ltrim(string s)
{
   return "";
}

string rtrim(string s)
{
   return "";
}

string trim(string s)
{
   return "";
}

string replicate(char c,int n)
{
   return "";
}

string spaces(int n)
{
   return "";
}

string lpad(string s,int n,char c)
{
   return "";
}

string rpad(string s,int n,char c)
{
   return "";
}

string cpad(string s,int n,char c)
{
   return "";
}

bool isDigit(char c)
{
   return true;
}

bool isLetter(char c)
{
   return true;
}

bool isUpperCase(char c)
{
   return true;
}

bool isLowerCase(char c)
{
   return true;
}

char toUpperCase(char c)
{
   return 'X';
}

char toLowerCase(char c)
{
   return 'X';
}

string toUpperCase(string s)
{
   return "";
}

string toLowerCase(string s)
{
   return "";
}

int cmpString(string a,string b)
{
   return 0;
}

int cmpDouble(double a,double b)
{
   return 0;
}

#endif
