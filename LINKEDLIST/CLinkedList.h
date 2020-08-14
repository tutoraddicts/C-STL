#pragma once
#ifndef C_LINKED_LIST_H
#define C_LINKED_LIST_H

#include <stdlib.h>
#include "../STRING/CString.h"

/*
 * Instruction >
 */

#define LIST(__data_type)       \
    struct {                    \
         void* next;            \
         __data_type* buffer;   \
    }* 
    
/*
 * ClinkList(dataType) -> example CLinkList(int) for int type of linked List
 */
#define CLinkList(__data_type)      \
    struct {                        \
         LIST(__data_type)* next;   \
         __data_type* buffer;       \
    }* 

/*
 * New_CLinkList(__data_type, __size) -> New_CLinkList(int, size of linked list)
 */
#define New_CLinkList(__data_type, __size) (CLinkList(__data_type)*)malloc(__size * sizeof(CLinkList(__data_type))) 

/*
 * Get the linkedList Value in certain index example for xth(0) variable pass x+1(1)
 */
// #define ClinkList_At(__CLinkList, __index)      \
//     CLinkList(__data_type) temp = __CLinkList;  \
//     while(--__index) {temp = temp->next;}       \
//     temp                                        \
    
// #define ClinkList_At(__CLinkList, __index) \
//     __CLinkList[__index] 

/*
 * return the linked list of specific index
 */
void* __ClinkList_at(void* __CLiskList, int __index){
    while(--__index) {__CLiskList = ((CLinkList(void))__CLiskList)->next;}
    return __CLiskList;
}

/*
 * Access the linked list in certain index
 */
#define ClinkList_at(__CLinkList, __data_type, __index) \
    ((CLinkList(__data_type))__ClinkList_at(__CLinkList, __index))

#define ClinkList_push_back(__CLinkList, __data_type, __data)       \
    {                                                               \
        CLinkList(__data_type) temp = __CLinkList;                  \
        CLinkList(__data_type) cur = New_CLinkList(__data_type, 1); \
        cur->next = NULL;                                           \
        cur->buffer = __data;                                       \
        while(temp->next != NULL) {temp = temp->next;}              \                                                   
        temp->next = cur;                                           \
    }



#endif