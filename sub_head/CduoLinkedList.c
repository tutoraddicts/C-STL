#include "CduoLinkList.h"

void* __DuoClinkList_at(void* __CDuoLiskList, int __index){
    CDuoLinkList(void) temp = __CDuoLiskList;
    while ( temp->right != NULL ) { temp = temp->right; }
    while(--__index) { temp = temp->left; }
    return temp;
}