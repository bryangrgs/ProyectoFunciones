#ifndef _TCOLL_T_
#define _TCOLL_T_

#include <iostream>
#include "../../funciones/strings.hpp"

using namespace std;

template<typename T>
struct Coll
{
   string s;
   char sep;
   int pos;
};
template<typename T>
Coll<T> coll(char sep)
{
   Coll<T> c;
   c.s="";
   c.sep=sep;
   c.pos = 0;
   return c;
}

template<typename T>
Coll<T> coll()
{
   Coll<T> c;
   c.s="";
   //nosotros elegimos el separador
   c.sep='|';
   c.pos=0;
   return c;
}

template<typename T>
int collSize(Coll<T> c)
{
// int i=0;
// if (i<length(c.s)){
//    i++;
// }
   //usar tokenCount x los separadores.
   int i=tokenCount(c.s,c.sep);
   return i;
}

template<typename T>
void collRemoveAll(Coll<T>& c)
{
   bool s=false;
   if (s ==false){
      c.s="";
   }
}

template<typename T>
void collRemoveAt(Coll<T>& c, int p)
{
   cout<<"ingrese la posicion que quiera eliminar: "<<endl;
   cin>>p;
   removeTokenAt(c.s,c.sep,p);
}

template<typename T>
int collAdd(Coll<T>& c,T t,string tToString(T))
{
   addToken(c.s,c.sep,tToString(t));
   return tokenCount(c.s,c.sep)-1;
}

template <typename T>
void collSetAt(Coll<T>& c,T t,int p,string tToString(T))
{
   setTokenAt(c.s,c.sep,tToString(t),p);
}

template <typename T>
T collGetAt(Coll<T> c,int p,T tFromString(string))
{
   T t;
   t=tFromString(getTokenAt(c.s,c.sep,p));
   return t;
}

template <typename T, typename K>
int collFind(Coll<T> c,K k,int cmpTK(T,K),T tFromString(string))
{
   int ret=-1;
   for (int pos=0; ret==-1 && pos<collSize(c);pos++){
      T t=collGetAt<T>(c,pos,tFromString);
      int compara=cmpTK(t,k);
      if (compara==0){
         return pos;
      }
   }

   return ret;
}

template <typename T>
void collSort(Coll<T>& c,int cmpTT(T,T),T tFromString(string),string tToString(T))
{
   for (int i=0; i<collSize(c); i++)
   {
      for (int j=i+1; j<collSize(c); j++)
      {
         T elem1=collGetAt(c,i,tFromString);
         T elem2=collGetAt(c,j,tFromString);
         if (cmpTT(elem1,elem2)<0)
         {
            T aux=elem1;
            collSetAt<T>(c,elem2,i,tToString);
            collSetAt<T>(c,aux,j,tToString);
         }
      }
   }
}

template<typename T>
bool collHasNext(Coll<T> c)
{

 //for (int i=0;i<collSize(c)-1;i++){
 //   if (i==collSize(c)){
 //      return false;
 //   }
 //}
 //return true;
   bool ret;
   if (c.pos<collSize(c))
   {
      ret=true;
   }
   else
   {
      ret=false;
   }
   return ret;
}

template<typename T>
T collNext(Coll<T>& c,T tFromString(string))
{
   T t = collGetAt(c,c.pos,tFromString);
   c.pos +=1;
   return t;
}

template<typename T>
T collNext(Coll<T>& c,bool& endOfColl,T tFromString(string)) //sobrecarga
{
   T t;
   if(!endOfColl)
   {
         T t = collNext(c,tFromString);
         endOfColl=collHasNext(c);
   }
   return t;
}

template <typename T>
void collReset(Coll<T>& c)
{
   c.pos=0;
}

#endif
