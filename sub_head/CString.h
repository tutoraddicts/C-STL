#pragma once
#ifndef CSTRING_H
#define CSTRING_H

#include <stdlib.h>
/*
 * Header File for String in C with requred Functions
 */

typedef char* CString; // variable of string

long CStringLen(CString _string){
    if (*_string++) return (long)CStringLen(_string)+1;
    else return (long)0;
}

/*
 * Set the size of the string and set all the values with 'null'
 */
#define CStringSetSize(__size) (CString)malloc(__size*sizeof(char))

/*
 * Reallocate the memory of string according to the size you provide and the prev value remain same
 */
#define CStringReallocSize(__string, __size) (CString)realloc(__string, __size*sizeof(char))

/*
 * Fir the size og the string according to it's values
 * mostusefull function when you don't know how much calue it is going to store
 * and return the new size of the string
 */
long FitCstring(CString __string) { 
    long _size = CStringLen(__string);
    __string = CStringReallocSize(__string, _size);
    return _size;
} 


#endif