#include "CString.h"

long CStringLen(CString _string){
    if (*_string++) return (long)CStringLen(_string)+1;
    else return (long)0;
}

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