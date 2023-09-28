#include "llist.h"

void main(void) {
    /*链表初始化必须这么写*/
    llist mylist = {
        .head = NULL,
        .tail = NULL,
        .len = 0
    };
    uint8_t mydata = 0;
    llist_push(&mylist, (uint8_t)1);
    llist_push(&mylist, (uint8_t)2);
    llist_push(&mylist, (uint8_t)3);
    llist_push(&mylist, (uint8_t)4);
    llist_push(&mylist, (uint8_t)5);
    llist_push(&mylist, (uint8_t)6);

    llist_pop(&mylist, &mydata);
    llist_pop(&mylist, &mydata);
    llist_pop(&mylist, &mydata);
    llist_pop(&mylist, &mydata);
    llist_pop(&mylist, &mydata);
    llist_pop(&mylist, &mydata);

    /*第7次pop会返回一个1*/
    llist_pop(&mylist, &mydata);

    return;
}
