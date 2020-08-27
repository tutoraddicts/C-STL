#include "CLinkedList.h"

void* __ClinkList_at(void* __CLiskList, int __index){
    while(--__index) {__CLiskList = ((CLinkList(void))__CLiskList)->next;}
    return __CLiskList;
}