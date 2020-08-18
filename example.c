#include <stdio.h>
#include "cstl.h"

/*
 * for testing the header files
 */

void testSting();

int main ( ) {
    bool print = false;
    // bool pritnft = 45;

    // printf("%d\n", print ? 0 : pritnft);
    // List *cll = (List*)malloc(sizeof(List));

    // // cll = new_Clist(NULL, 56);

    // cll[0].next = NULL;
    // cll[0].buffer = 100;
    // printf("%u, %d\n", cll[0].next ,cll[0].buffer);

    // CLinkedList cl = New_Int_CList(3);

    // cl[0].buffer = 100;
    // cl[0].next = NULL;

    // list_at(cl, 0)->buffer = "hellow";
    // list_at(cl, 0)->next = NULL;

    // printf("%u, %s\n", cl[0].next ,cl[0].buffer);

    CLinkList(int) test = New_CLinkList(int);

    test->buffer = 10;

    // ClinkList_push_back(test, int, 25);

    linklist_pushback(test, int, 20);
    linklist_pushback(test, int, 30);
    // {
    //     CLinkList(int) temp = test;
    //     CLinkList(int) cur = New_CLinkList(int, 1);
    //     cur->next = NULL;
    //     cur->buffer = 20;
    //     if (temp == NULL){
    //         temp = cur;
    //     }
    //     while(temp->next != NULL) {                             
    //         temp = temp->next;                                   
    //     }                                                       
    //     temp->next = cur;
    // }
    // temp->next->data = 20;
    {
        CLinkList(int) temp = test;
        while (true)
        {
        
            // CLinkList(int) temp = test;
            printf("%u, %d\n", temp->next ,temp->buffer);
            if (temp->next == NULL) break;
            temp = temp->next; 
            // printf("%u, %d\n", temp->next ,temp->buffer);
        }
        // return temp ;
    }
    
    int data = ClinkList_at(test, int, 2)->buffer;
    printf("%d\n",  data);

    return 0;
}

void testSting(){
    string name;
    name = "pritam";
    str_reallocsize(name, 10);
    long size = CStringLen(name);
    printf("%s : %d\n", name, size);
}