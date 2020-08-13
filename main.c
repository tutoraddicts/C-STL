#include <stdio.h>
#include "clib.h"
/*
 * for testing the header files
 */

void testSting();

int main ( ) {
    bool print = false;
    bool pritnft = 45;

    printf("%d\n", print ? 0 : pritnft);
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

    // CLinkList(int) test = New_CLinkList(int, 3);
    // CLinkList(int) test2 = New_CLinkList(int, 3);

    // ClinkList_At(test, 0).next = test2;
    // ClinkList_At(test, 0).buffer = 100;

    // printf("%u, %d\n", test->next ,test->buffer);
    // testSting();;
    return 0;
}

void testSting(){
    CString name;
    name = "pritam";
    CStringSetSize(name, 10);
    long size = CStringLen(name);
    printf("%s : %d\n", name, size);
}