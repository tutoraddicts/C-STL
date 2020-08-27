#pragma once
#ifndef C_LINKED_LIST_H
#define C_LINKED_LIST_H

#include <stdlib.h>

#define LIST(__data_type)\
    struct {\
         void* next;\
         __data_type* buffer;\
    }
    
/*
 * ClinkList(dataType) -> example CLinkList(int) for int type of linked List
 */
#define CLinkList(__data_type)\
    struct {\
         LIST(__data_type)* next;\
         __data_type* buffer;\
    }* 

/*
 * New_CLinkList(__data_type, __size) -> New_CLinkList(int, size of linked list)
 */
#define New_CLinkList(__data_type) (CLinkList(__data_type))malloc(sizeof(LIST(__data_type))) 

/*
 * return the linked list of specific index
 */
void* __ClinkList_at(void* __CLiskList, int __index);

/*
 * Access the linked list in certain index
 */
#define ClinkList_at(__CLinkList, __data_type, __index) \
    ((CLinkList(__data_type))__ClinkList_at(__CLinkList, __index))

#define ClinkList_push_back(__CLinkList, __data_type, __data)\
    {\
        CLinkList(__data_type) temp = __CLinkList;\
        while(__CLinkList->next != NULL) { __CLinkList = __CLinkList->next; }\                                                   
        __CLinkList->next = New_CLinkList(__data_type);\
        __CLinkList->next->buffer = __data;\
        __CLinkList = temp;\
    }

#endif