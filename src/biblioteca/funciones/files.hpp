#ifndef _TFILES_T_
#define _TFILES_T_

#include <iostream>
#include <stdio.h>

template<typename T> void write(FILE* f, T t)
{
    fseek(f,0,SEEK_CUR);
    fwrite(&t,sizeof(t),1,f);

}

template<typename T> T read(FILE* f)
{

    fseek(f,0,SEEK_CUR);

   T t;
   fread(&t,sizeof(t),1,f);
   return t;
}

template<typename T> void seek(FILE* f, int n)
{
   T t = read<T> (f);
   fseek(f,sizeof(t)*n,SEEK_SET);
}

template<typename T> int fileSize(FILE* f)
{
   fseek(f,0,SEEK_END);
   int size= ftell(f)/sizeof(T);
   return size;
}

template<typename T> int filePos(FILE* f)
{
   int pos= ftell(f)/sizeof(T);
  return pos;

   return 0;
}

#endif
