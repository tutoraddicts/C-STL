#pragma once
#ifndef C_DUO_LINKED_LIST_H
#define C_DUO_LINKED_LIST_H

#include <stdlib.h>

/*
 * How to create the variable
 * ClinkList(type) _var = New_CLinkList(int, __size)
 * make sure you use New_ClinkList when ever you create new varaibele
 * __size is the size of the linkedList
 */

/*
 * return the linked list of specific index
 */
void* __DuoClinkList_at(void* __CDuoLiskList, int __index);

#define DuoList(__data_type)\
    struct {\
         void* right;\
         void* left;\
         __data_type* buffer;\
    }

/*
 * ClinkList(dataType) -> example CLinkList(int) for int type of linked List
 */
#define CDuoLinkList(__data_type)\
    struct {\
         DuoList(__data_type)* right;\
         DuoList(__data_type)* left;\
         __data_type* buffer;\
    }*

/*
 * New_CLinkList(__data_type, __size) -> New_CLinkList(int, size of linked list)
 */
#define New_CDuoLinkList(__data_type)\
    (CDuoLinkList(__data_type))malloc(sizeof(DuoList(__data_type)))

/*
 * Access the linked list in certain index
 */
#define CDuolinkList_at(__CDuoLiskList, __data_type, __index)\
    ((CDuoLinkList(__data_type))__ClinkList_at(__CDuoLiskList, __index))

#define CDuolinkList_push_back(__CDuoLiskList, __data_type, __data)\
    {\
        CDuoLinkList(__data_type) temp = __CLinkList;\
        while(__CLinkList->next != NULL){__CLinkList = __CLinkList->left;}\                                                   
        __CLinkList->left = New_CDuoLinkList(__data_type);\
        __CLinkList->left->buffer = __data\
    }

#define CDuolinkList_push_front(__CDuoLiskList, __data_type, __data)\
    {\
        CDuoLinkList(__data_type) temp = __CLinkList;\
        while(__CLinkList->right != NULL){__CLinkList = __CLinkList->right;}\                                                   
        __CLinkList->right = New_CDuoLinkList(__data_type);\
        __CLinkList->right->buffer = __data;\
        __CLinkList = temp;\
    }

#endif