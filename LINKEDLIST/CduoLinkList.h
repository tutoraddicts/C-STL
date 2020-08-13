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

#define DuoList(__data_type) \
    struct { \
         void* right; \
         void* left; \
         __data_type buffer; \
    }* \

/*
 * ClinkList(dataType) -> example CLinkList(int) for int type of linked List
 */
#define CDuoLinkList(__data_type) \
    struct { \
         DuoList(__data_type)* right; \
         DuoList(__data_type)* left; \
         __data_type buffer; \
    }* \

/*
 * New_CLinkList(__data_type, __size) -> New_CLinkList(int, size of linked list)
 */
#define New_CDuoLinkList(__data_type, __size) \
    (CDuoLinkList(__data_type)*)malloc(__size * sizeof(CDuoLinkList(__data_type))) \

/*
 * Get the linkedList Value in certain index
 */
#define CDuolinkList_At(CLinkList, __index) \
    (CLinkList+__index) \

#endif