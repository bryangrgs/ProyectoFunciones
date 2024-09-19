#ifndef _TMAP_TAD_
#define _TMAP_TAD_

#include <iostream>
#include "Array.hpp"

using namespace std;

template<typename K,typename T>
struct Map
{
   Array<K> keys;
   Array<T> values;
   int curr;
};

template<typename K,typename V>
Map<K,V> map()
{
   Map<K,V> m;
   m.keys = array<K>();
   m.values=array<V>();
   m.curr=0;
   return m;
}

template<typename K>
int cmpKK(K a,K b)
{
   return a<b?-1:a==b?0:1;
}
template<typename V>
int cmpVV(V a,V b)
{
   return a<b;
}
template<typename K,typename V>
V* mapGet(Map<K,V> m,K k)
{
   int p = arrayFind<K,K>(m.keys,k,cmpKK);
   return p>=0?arrayGet<V>(m.values,p):NULL;
}

template<typename K,typename V>
V* mapPut(Map<K,V>& m,K k,V v)
{
   int p = arrayFind<K,K>(m.keys,k,cmpKK);
   if( p<0 )
   {
      arrayAdd<K>(m.keys,k);
      arrayAdd<V>(m.values,v);
   }
   else
   {
      arraySet<V>(m.values,p,v);
   }

   return mapGet<K,V>(m,k);
}

template<typename K,typename V>
bool mapContains(Map<K,V> m,K k)
{
   return mapGet<K,V>(m,k)!=NULL;
}

template<typename K,typename V>
V mapRemove(Map<K,V>& m,K k)
{
   int p = arrayFind<V,K>(k.keks,k,cmpKK);
   arrayRemove<K>(m.keys,p);
   V t = arrayRemove<V>(m.values,p);
   return t;
}

template<typename K,typename V>
void mapRemoveAll(Map<K,V>& m)
{
   arrayRemoveAll<K>(m.keys);
   arrayRemoveAll<V>(m.values);
}

template<typename K,typename V>
int mapSize(Map<K,V> m)
{
   return arraySize<K>(m.keys);
}

template<typename K,typename V>
bool mapHasNext(Map<K,V> m)
{
   int x = arraySize<K>(m.keys);
   return m.curr<x;
}

template<typename K,typename V>
K mapNextKey(Map<K,V>& m)
{
   return *arrayGet<K>(m.keys,m.curr++);
}

template<typename K,typename V>
V* mapNextValue(Map<K,V>& m)
{
   return arrayGet<V>(m.values,m.curr++);
}

template<typename K,typename V>
void mapReset(Map<K,V>& m)
{
   m.curr=0;
}

template<typename K,typename V>
V* mapDiscover(Map<K,V>& m,K k,V v)
{
   V* x = mapGet<K,V>(m,k);
   if( x==NULL )
   {
      x = mapPut<K,V>(m,k,v);
   }

   return x;
}

template<typename K,typename V>
void mapSortByKeys(Map<K,V>& m,int cmpKK(K,K))
{
   bool ordenado=true;
   while(!ordenado)
   {
   ordenado=false;
   for(int i=0; i<mapSize(m); i++)
   {
      if( cmpKK(m.keys.arr[i],m.keys.arr[i+1])>0 )
      {
         K k = m.keys.arr[i];
         m.keys.arr[i] = m.keys.arr[i+1];
         m.keys.arr[i+1] = k;

         V v= m.values.arr[i];
         m.values.arr[i] = m.values.arr[i+1];
         m.values.arr[i+1] = v;

         ordenado=true;
      }
   }
}

}

template<typename K,typename V>
void mapSortByValues(Map<K,V>& m,int cmpVV(V,V))
{
   bool ordenado=true;
      while(!ordenado)
      {
      ordenado=false;
      for(int i=0; i<mapSize(m); i++)
      {
         if( cmpVV(m.values.arr[i],m.values.arr[i+1])>0 )
         {
            K k = m.keys.arr[i];
            m.keys.arr[i] = m.keys.arr[i+1];
            m.keys.arr[i+1] = k;

            V v = m.values.arr[i];
            m.values.arr[i] = m.values.arr[i+1];
            m.values.arr[i+1] = v;

            ordenado=true;
         }
      }
   }


}

#endif
