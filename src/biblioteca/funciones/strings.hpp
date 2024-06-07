#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int length(string s)
{
   int i = 0;
   while (s[i]!='\0')
   {
      i ++;
   }
      return i;
}

int charCount(string s,char c)
{
   int n = 0;
   for (int i = 0; s[i]!='\0'; i++)
   {
      if (s[i]==c)
      {
         n++;
      }
   }
   return n;
}

string substring(string s,int d,int h)
{
   int i = 0;
   string subCadena = "";
   int cantCaracteres = length(s);
   while (i == h || i < cantCaracteres)
   {
      if(i >= d && i < h)
      {
         subCadena = subCadena + s[i];
      }
      i++;
   }
   return subCadena;
}

string substring(string s,int d)
{
   int i = 0;
   string subCadena = "";
   int cantCaracteres = length(s);
   while (i < cantCaracteres)
   {
      if (i >= d)
      {
         subCadena = subCadena + s[i];
      }
         i++;
   }
   return subCadena;
}

int indexOf(string s,char c)
{
   int a = 0;
   while (s[a]!='\0' && s[a]!=c)
   {
      a++;
   }
   int ret = a;
   if (s[a]=='\0')
   {
      ret = -1;
   }
   return ret;
}

int indexOf(string s,char c,int offSet)
{
   while (s[offSet]!='\0' && s[offSet]!=c)
   {
      offSet++;
   }
   int ret = offSet;
   if(s[offSet]=='\0')
   {
      ret = -1;
   }
   return ret;
}

int indexOf(string s,string toSearch)
{
   int i = 0;
   int a = 0;
   while (s[i]!= toSearch[a] && s[i]!='\0')
   {
      i++;
   }
   int ret = i;
   if (s[i]=='\0')
   {
      ret = -1;
   }
   return ret;
}

int indexOf(string s,string toSearch,int offset)
{
   int a = 0;
   while (s[offset]!= toSearch[a] && s[offset]!= '\0')
   {
      offset++;
   }
   int ret = offset;
   if (s[offset]=='\0')
   {
      ret = -1;
   }
   return ret;
}

int lastIndexOf(string s,char c)
{
   int i = 0;
   int a = 0;
   int rep = charCount(s,c);
   if (rep != 0)
   {
      while (s[i]!='\0' && a < rep)
      {
         if (s[i] == c)
         {
            a++;
         }
         i++;
      }
      i = i-1;
   }
   else
   {
      i = -1;
   }
   return i;
}

int indexOfN(string s,char c,int n)
{
   int i = 0;
   int r = 0;
   if (n > charCount(s,c))
   {
      return length(s);
   }
   if (n != 0)
   {
      while (s[i]!='\0' && r < n)
      {
         i++;
         if (s[i]== c)
         {
            r++;
         }
      }
   }
   else
   {
      i=-1;
   }
   return i;
}

int charToInt(char c)
{
   if (c >= '0' && c <= '9')
   {
      return c -'0'; // caracter numérico.
   }
   else if (c >= 'a' && c <= 'z')
   {
      return c- 'a'+10; // letra minúscula.
   }
   else if (c >= 'A' && c <='Z')
   {
      return c-'A'+10; // letra mayúscula.
   }
   else
   {
      return -1 ; // caracter no válido.
   }
}

char intToChar(int i)
{
   if (i >= 0 && i <= 9)
   {
      return i +'0'; // caracter numérico.
   }
   else if ( i >= 65 && i <= 90)
   {
      return i;
   }
   else if (i <=65 )
   {
      return i;
   }
   else
   {
      return -1; // caracter no válido.
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
   if (n == 0) // 0 tiene un solo dígito.
   {
      return 1;
   }
   int contadordigito = 0;
   while (n != 0)
   {
      n /= 10;
      contadordigito++;
   }
   return contadordigito;
}

string intToString(int i)
{
   return std::to_string(i);
}

int stringToInt(string s,int b)
{
   int resultado = 0;
   int potencia = 0;
   for (int i = length(s) - 1; i >= 0; --i) // itera de derecha a izquierda.
   {
      char caracter = s[i];
      int valorDigito = charToInt(caracter);
      if (valorDigito == -1 || valorDigito >= b)
      {
         std::cerr << "Error: Caracter inválido para la base." << b << std::endl;
         return 0;
      }
     // suma el dígito multiplicado por la base elevada a la potencia.
      resultado += valorDigito * std::pow(b, potencia);
      potencia++;
   }
   return resultado;
}

int stringToInt(string s)
{
   return  std::stoi(s);
}

string charToString(char c)
{
   return std::string(1, c);
}

char stringToChar(string s)
{
   if (!s.empty())
   {
      return s[0];
   }
   else
   {
      return '\0';
   }
}

string stringToString(string s)
{
   string v = s;
   return v;
}

string doubleToString(double d)
{
   return std::to_string(d);
}

double stringToDouble(string s)
{
   return std::stod(s);
}

bool isEmpty(string s)
{
   bool a = false;
   if (s[0]=='\0')
   {
      a = true;
   }
   else
   {
      a = false;
   }
   return a;
}

bool startsWith(string s,string x)
{
   bool a = false;
   string medidor = substring(s, 0, length(x));
   if (medidor == x)
   {
      a = true;
   }
   else
   {
      a = false;
   }
   return a;
}

bool endsWith(string s,string x)
{
   bool a = false;
   int r = length(s)-length(x);
   string medidor = substring(s, r, length(s));
   if (x == medidor)
   {
      a = true;
   }
   else
   {
      a = false;
   }
   return a;
}

bool contains(string s,char c)
{
   bool a = false;
   int i = 0;
   int n = 0;
   while (s[i]!='\0')
   {
      if (s[i]==c)
      {
         n++;
      }
      i++;
   }
   if (n == 0)
   {
      a = false;
   }
   else
   {
      a = true;
   }
   return a;
}

string replace(string s,char oldChar,char newChar)
{
   int i = 0;
   while (s[i]!='\0')
   {
      if (s[i] == oldChar)
      {
         s[i] = newChar;
      }
      i++;
   }
   return s;
}

string insertAt(string s,int pos,char c)
{
   string r;
   for (int i = 0; i < length(s); ++i)
   {
      if (i == pos) // si llegamos a la posición, agregamos el caracter.
      {
         r += c;
      }
      r += s[i]; // agregamos el caracter actual de la cadena original.
   }
   if (pos == length(s)) // si la posición es al final, agregamos el char al final.
   {
      r += c;
   }
   return r;
}

string removeAt(string s,int pos)
{
   string x;
   if (pos < 0 || pos >= length(s))
   {
      x = "Fuera de rango";
   }
   else
   {
      x = substring(s,0,pos) + substring(s,pos+1);
   }
   return x;
}

string ltrim(string s)
{
   int i = 0;
   int r = 0;
   bool letra = false;
   while (i <= length(s) and letra == false )
   {
      if (s[i] == ' ')
      {
         r++;
      }
      else
      {
         letra = true;
      }
      i++;
   }
   return substring(s,r);
}

string rtrim(string s)
{
   int i = length(s) - 1;
   int r = 0;
   bool letra = false;
   while (i >= 0 && letra == false)
   {
      if (s[i] == ' ')
      {
         r++;
      }
      else
      {
         letra = true;
      }
      i--;
   }
   if (r > 0)
   {
      return substring(s,0, length(s) - r);
   }
   return s;
}

string trim(string s)
{
   string cadenita = ltrim(s);
   string cadenota = rtrim(cadenita);
   return cadenota;
}

string replicate(char c,int n)
{
   string resultado;
   int i = 0;
   for (i = 0; i < n; i++)
   {
      resultado += c;
   }
   return resultado;
}

string spaces(int n)
{
   string s;
   int i = 0;
   while (i < n)
   {
      s = s + ' ';
      i++;
   }
   return s;
}

string lpad(string s,int n,char c)
{
   string resultado = "";
   string caracter = charToString(c);
   if (length(s) < n)
   {
      int cantVeces = n - length(s);
      for (int i = 0; i < cantVeces ; i++)
      {
         resultado += caracter;
      }
      resultado += s;
   }
   else
   {
      resultado = "No es necesario completar la cadena.";
   }
   return resultado;
}

string rpad(string s,int n,char c)
{
   string caracter = charToString(c);
   if (length(s) < n)
   {
      int cantVeces = n - length(s);
      for (int i = 0; i < cantVeces ; i++)
      {
      s += caracter;
      }
   }
   else
   {
      s = "No es necesario completar la cadena.";
   }
   return s;
}

string cpad(string s,int n,char c)
{
   string resultado = "";
   string caracter = charToString(c);
   if (length(s) < n)
   {
      double cantVeces = ((n - length(s))/2);
      for (int i = 0; i <= ceil(cantVeces) ; i++)
      {
      resultado += caracter;
      }
      resultado += s;
      for (int i = 0; i < floor(cantVeces) ; i++)
      {
      resultado += caracter;
      }
   }
   else
   {
      resultado = "No es necesario completar la cadena.";
   }
   return resultado;
}

bool isDigit(char c)
{
   bool a = false;
   int r = charToInt(c);
   if (r >= 0 && r <= 9)
   {
      return c -'0';
      a = true;
   }
   else
   {
      a = false;
   }
   return a;
}

bool isLetter(char c)
{
   bool a = false;
   if (c >= 'a' && c <= 'z')
   {
      a = true;
   }
   else if (c >= 'A' && c <= 'Z')
   {
      a = true;
   }
   else
   {
      a = false;
   }
   return a;
}

bool isUpperCase(char c)
{
   bool a = false;
   if (c >= 'A' && c <= 'Z')
   {
      a = true;
   }
   else
   {
      a = false;
   }
   return a;
}

bool isLowerCase(char c)
{
   bool a = false;
   if (c >= 'a' && c <= 'z')
   {
      a = true;
   }
   else
   {
      a = false;
   }
   return a;
}

char toUpperCase(char c)
{
   if (c >= 97 && c <= 122)
   {
      c -= 32;
   }
   return c;
}

char toLowerCase(char c)
{
   if (c >= 65 && c <= 90)
   {
      c += 32;
   }
   return c;
}

string toUpperCase(string s)
{
   int i = 0;
   while (s[i]!= '\0' && i <length(s))
   {
     char p = s[i];
     s[i] = toUpperCase(p);
     i++;
   }
   return s;
}

string toLowerCase(string s)
{
   int i = 0;
   while (s[i]!= '\0' && i < length(s))
   {
      char p = s[i];
      s[i] = toLowerCase(p);
      i++;
   }
   return s;
}

int cmpString(string a,string b)
{
   return a > b?1:a < b?-1:0;
}

int cmpDouble(double a,double b)
{
   return a > b?1:a < b?-1:0;
}

#endif
