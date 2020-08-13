#pragma once
#ifndef C_LINKED_LIST_H
#define C_LINKED_LIST_H

#include <stdlib.h>
#include "../STRING/CString.h"

/*
 * Instruction >
 */

/*
 * How to create the variable
 * ClinkList(type) _var = New_CLinkList(int, __size)
 * make sure you use New_ClinkList when ever you create new varaibele
 * __size is the size of the linkedList
 */

#define LIST(__data_type) \
    struct { \
         void* next; \
         __data_type buffer; \
    }* \
    
/*
 * ClinkList(dataType) -> example CLinkList(int) for int type of linked List
 */
#define CLinkList(__data_type) \
    struct { \
         LIST(__data_type)* next; \
         __data_type buffer; \
    }* \

/*
 * New_CLinkList(__data_type, __size) -> New_CLinkList(int, size of linked list)
 */
#define New_CLinkList(__data_type, __size) \
    (CLinkList(__data_type)*)malloc(__size * sizeof(CLinkList(__data_type))) \

/*
 * Get the linkedList Value in certain index
 */
#define ClinkList_At(CLinkList, __index) \
    CLinkList[__index] \

#endif