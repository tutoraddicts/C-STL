#ifndef C_LIB_H
#define C_LIB_H

/*
 * Documentation part of the clib library
 */

    #include "CBool.h"
    #define bool __bool
    #define false __false
    #define true __true

    #include "CString.h"
    #define string CString
    /* 
     * Return the size of the string you are passing __s 
     */
    #define str_len(__s) CStringLen(__s)
    /* 
     * Set the size of the string str_setsize(string, size you want) 
     */
    #define str_setsize(__s, __size) CStringSetSize(__s, __size)
    /* 
     * Reallocate or resize the string 
     */
    #define str_reallocsize(__s, __size) CStringReallocSize(__s, __size)
    /* 
     * Set the size accortding to it's data inside string 
     */
    #define str_fitsize(__s) FitCstring(__s)


    // linked list
    #include "CLinkedList.h"
    /* 
     * Create linked list linkelist(data_type) ex. linkelist(int) for int type linkedlist
     */
    #define linkelist(__t) CLinkList(__t)
    /* 
     * Allocate memory for linkedlist importent when you are creating new linked list 
     * new_linkedlist(data_type) ex. new_likedlist(int) for int type linkedlist
     */
    #define new_linkedlist(__t) New_CLinkList(__t)
    /* 
     * Fetch the linked list value of certain index linklist_at(linkedlist, data_type, index)
     * ex. linklist_at(my_variable, int, 20)
     */
    #define lisklist_at(__ob, __t, __i) ClinkList_at(__ob, __t, __i)
    /*
     * push data in the end of the linked list linklist_pushback(linkedlist, data_type, data)
     * ex. linklist_pushback(my_variable, int, 20)
     */
    #define linklist_pushback(__ob, __t, __d) ClinkList_push_back(__ob, __t, __d)


    // double linkedlist
    #include "CduoLinkList.h"
    /* 
     * Create linked list Dlinkelist(data_type) ex. Dlinkelist(int) for int type linkedlist
     */
    #define Dlinkelist(__t) CDuoLinkList(__t)
    /* 
     * Allocate memory for linkedlist importent when you are creating new linked list 
     * new_linkedlist(data_type) ex. new_likedlist(int) for int type linkedlist
     */
    #define new_Dlinkedlist(__t) New_CDuoLinkList(__t)
    /* 
     * Fetch the linked list value of certain index linklist_at(linkedlist, data_type, index)
     * ex. linklist_at(my_variable, int, 20)
     */
    #define Dlisklist_at(__ob, __t, __i) CDuolinkList_at(__ob, __t, __i)
    /*
     * push data in the end of the linked list linklist_pushback(linkedlist, data_type, data)
     * ex. linklist_pushback(my_variable, int, 20)
     */
    #define Dlinklist_pushback(__ob, __t, __d) CDuolinkList_push_back(__ob, __t, __d)
    /*
     * push data in the front of the linked list linklist_pushback(linkedlist, data_type, data)
     * ex. linklist_pushback(my_variable, int, 20)
     */
    #define Dlinklist_pushfront(__ob, __t, __d) CDuolinkList_push_front(__ob, __t, __d)

#endif // !C_STD_L

