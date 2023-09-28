/* 一个简单的单向链表库 */
#ifndef LLIST_H

#define LLIST_H

#include <stdlib.h>
#include <assert.h>
#include "../my_types.h"

typedef uint8_t llist_dtype;

struct node {
    llist_dtype data;
    struct node* next;
};

typedef struct {
    struct node* head;
    struct node* tail;
    uint16_t len;
} llist;

uint8_t llist_push(llist* list, const llist_dtype data);
uint8_t llist_pop(llist* list, llist_dtype* data);


#endif
