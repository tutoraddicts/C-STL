#pragma once

#ifndef BOOL_H
#define BOOL_H

#include <stdlib.h>
// defining bool because hah C don't have I guess

/*
 * To use bool varaible
 * just simple declear a variable 
 */

typedef enum {
    false = 0,
    true = 1
}__bool;

#define bool __bool


// typedef int bool;
// enum {false = 0, true = 1};
#endif // !BOOL_H