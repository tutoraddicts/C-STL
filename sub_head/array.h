#ifndef ARRAY_HEADER

#include <stdlib.h>

/* array(int) my_variable; */
#define array(__data_type)\
    __data_type* 

/* array(int, my_variable); */
#define array(__data_type, __var_name)\
    __data_type* __var_name

/* array(int, my_variable, 10); */
#define array(__data_type, __var_name, __size)\
    __data_type __var_name[__size]

/* array_new(int, 10); */
#define array_new(__data_type, __size) \
    (__data_type*)malloc(__size * sizeof(__data_type))

/* array_resize(int, 20); */
#define array_resize(__data_type, __size)\
    (__data_type*)malloc(__size * sizeof(__data_type))

/* array_resize(int, my_variable, 20); */
#define array_resize(__data_type, __var_name, __size)\
    __var_name = (__data_type*)malloc(__size * sizeof(__data_type))

/* array_delet my_variable > if error coming try array_delet(my_varaiable)*/
#define array_delet delet[]

/* array_delet(my_varaiable)*/
#define array_delet(__array)\
    free(__array)

/* int size = array_size(my_varaiable) */
#define array_size(__var_name)\
    sizeof(__var_name)/sizeof(__var_name[0])

/* int data = array_at(my_varaiable, index)*/
#define array_at(__var_name, __index)\
    array_size(__var_name) <= (index+1) ?  __var_name[index] : -1

/* array_push_back(int, my_varaiable, 55); */
#define array_push_back(__data_type, __var_name, __data)\
    {\
        long size = array_size(__var_name);\
        size++;\
        __var_name = array_resize(__data_type, size);\
        __var_name[size-1] = __data;\
    }

/* array_push_back(int, my_varaiable) = data; */
#define array_push_back(__data_type, __var_name)\
    {\
        long size = array_size(__var_name);\
        size++;\
        __var_name = array_resize(__data_type, size);\
    }\
    __var_name[size-1]

#endif // !ARRAY_HEADER