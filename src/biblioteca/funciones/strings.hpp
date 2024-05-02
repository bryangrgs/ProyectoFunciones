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

      int longitud = h - d;



    return  0; //s.substr(d, longitud) 0;
}

string substring(string s,int d) // ok
{
   {
           int i = 0;
           string subCadena = "";
           int cantCaracteres = length(s); //cantidad de caracteres que tiene
           while(i == length(s) || i < cantCaracteres) {
               if(i >= d && i < length(s)){
                   subCadena = subCadena + s[i];
               }
               i++;
           }
           return subCadena;
       }
   }



int indexOf(string s,char c) // ok
{
   int i=0;
   int n=0;
   char x;
   while(i == length(s) || i < n) {
   if(i >= x && i < length(s)){
      n = n + s[i];
   }
   i++;
   }
   return 0;
}

int indexOf(string s,char c,int offSet) // ok
{
   return 0;
}

int indexOf(string s,string toSearch) // ok
{
   return 0;
}

int indexOf(string s,string toSearch,int offset) // ok
{
   return 0;
}

int lastIndexOf(string s,char c)
{
   return 0;
}

int indexOfN(string s,char c,int n)
{
   return 0;
}

int charToInt(char c)
{
   return 0;
}

char intToChar(int i)
{
   return 'X';
}

int getDigit(int n,int i)
{
   return 0;
}

int digitCount(int n)
{
   return 0;
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
