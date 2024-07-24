#ifndef _TCOLL_T_
#define _TCOLL_T_

#include <iostream>
#include "../../funciones/strings.hpp"

using namespace std;

template<typename T>
struct Coll
{
   string s;
   char separador;
   int posicionActual;
};

//Crea una colección vacía
//preparada para contener elementos de tipo T;
template<typename T>
Coll<T> coll(char sep)
{
   Coll<T> c;//definimos la coleccion
   c.s="";//la creamos vacia
   c.separador=sep;//utilizamos el separador por defecto
   return c;//retornamos
}
//Crea una colección vacía
//, preparada para contener elementos tipo T;
//Nosotros definimos el separador
template<typename T>
Coll<T> coll()
{
   Coll<T> c;
   c.s="";
   c.separador='|';//usamos un separador nosotros
   return c;
}

template<typename T>
int collSize(Coll<T> c)
{
   int cToken= tokenCount(c.s,c.separador);
   return cToken;
}
//Remueve de la colección c todos sus elementos
//, dejándola vacía.
template<typename T>
void collRemoveAll(Coll<T>& c)
{
   c.s="";
}
//>><Remueve<<< de la colección
//c el elemento ubicado en la posición p.
//tenemos un token para hacerlo?==> si!
template<typename T>
void collRemoveAt(Coll<T>& c, int p)
{
   removeTokenAt(c.s,c.separador,p);// =D
}
//Agrega el elemento t al final de la colección c.
template<typename T>
int collAdd(Coll<T>& c,T t,string tToString(T))
{
   addToken(c.s,c.separador,tToString(t));
   return tokenCount(c.s,c.separador)-1;
   //Retorna: int - La posición que ocupa
   //el elemento recientemente agregado.
   //Coincide con el tamaño de la colección, menos 1.
}
//Reemplaza por t al elemento
//que se ubica en la posición p.
template <typename T>
void collSetAt(Coll<T>& c,T t,int p,string tToString(T))
{
   setTokenAt(c.s,c.separador,tToString(t),p);
}

//Retorna: T - El elemento de c ubicado en la posición p.
template <typename T>
T collGetAt(Coll<T> c,int p,T tFromString(string))
{
   T t;
   t=tFromString(getTokenAt(c.s,c.separador,p));
   return t;
}

template <typename T, typename K>
int collFind(Coll<T> c,K k,int cmpTK(T,K),T tFromString(string))
{
   for(int i=0; i< c.size();i++){
      string stringedCurrentT = getTokenAt(c.elements,c.separador,i);
      T currentT= tFromString (stringedCurrentT);
      if(cmpTK(currentT,k)==0){
         return i;
      }
   }
   return -1;
}
// c.size == collSize(c) ?? no...
//c.size retorna el n° de elementos
//collsize toma la coleccion como argumento
//retorna su tamaño
template <typename T>
void collSort(Coll<T>& c,int cmpTT(T,T),T tFromString(string),string tToString(T))
{
   int tokenN = collSize(c);
   T a;
   T b;
   for (int i=0; i< tokenN -1; i++){
      for(int q=0;q < tokenN -1-i;i++){
         a= collGetAt(c, q, tFromString);
         b= collGetAt(c,q+1,tFromString);
         if(cmpTT(a,b)>0){
            collSetAt(c,a,q+1,tToString);
            collSetAt(c,b,q,tToString);
         }
      }
   }
}

template<typename T>//bryan resuelto
bool collHasNext(Coll<T>& c)
{
   bool hasNext =false;
   if (c.posicionActual <= collSize(c)-1){
      hasNext = true;


   }

   return hasNext;

}


template<typename T>
T collNext(Coll<T>& c,T tFromString(string))
{

   T t=collGetAt(c,c.posicionActual,tFromString);

   c.posicionActual++;
   return t;


}

template<typename T>
T collNext(Coll<T>& c,bool& endOfColl,T tFromString(string))
{
   T t= collNext(c,tFromString);
   endOfColl = collHasNext(c);
    return t;
}

template<typename T>
void collReset(Coll<T>& c)
{
   c.posicionActual=0;
}
template<typename T>
string collToString(Coll<T> c)
{
   return c.separador+c.s;
}

template<typename T>
Coll<T> collFromString(string s)
{
   Coll<T> c;
   c.separador=s[0];
   c.s=substring(s,1);
   return c;
}

#endif
