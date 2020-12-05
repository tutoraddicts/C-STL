#ifndef C_LIB_H
#define C_LIB_H

/*
 * Documentation part of the clib library
 */

    #include "CBool.h"
    #define bool __bool
    #define false __false
    #define true __true

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


    #include "array.h"
    /* create an array of any_type ex arr(int) my_array;*/
    #define arr(__dt, args...) array(__dt, args)

    /* allocate the memory of the array with size ex. new_arr(int, 10)*/
    #define new_arr(__dt, __s) array_new(__dt, __s)
    
    /* resize the memory allocation with certain size ex. = resize_arr(int, 20)*/
    #define resize_arr(__dt, __s) array_resize(__data_type, __size)
    
    /* array_delet(my_array)*/
    #define del_arr(__var) array_delet(__var)
    
    /* get array value in certain index if index is higher them return -1 ex. data = arr_at(my_array, index)*/
    #define arr_at(__var, __i) array_at(__var, __i)
    
    /* push value in the end of the array ex. arr_pushback(int, my_array, 57)*/ 
    #define arr_pushback(__dt, __var, __d) array_push_back(__dt, __var, __d)
    
#endif // !C_STD_L

