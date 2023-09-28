#include "llist.h"

/**
  * @brief  往单向链表里加入一个元素
  * @param  list: 单向链表的地址
  * @param  data: 要加入的元素
  * @retval 0 添加成功
  */
uint8_t llist_push(llist* list, const llist_dtype data) {
    struct node* head;
    struct node* new_node;

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    assert(list != NULL);
    if (list->head == NULL) {
        list->head = new_node;
        list->tail = list->head;
    } else {
        list->tail->next = new_node;
        list->tail = list->tail->next;
    }
    list->len++;
    return 0;
}

/**
  * @brief  单向链表弹出第一个元素
  * @param  list: 单向链表的地址
  * @param  data: 被弹出的元素存入的目标地址
  * @retval 0 弹出成功
  * @retval 1 弹出失败，链表为空
  */
uint8_t llist_pop(llist* list, llist_dtype* data) {
    struct node* temp;
    assert(list != NULL);
    if (list->head == NULL) {
        return 1;
    }
    if (list->head == list->tail) {
        list->tail = NULL;
    }
    (*data) = list->head->data;
    temp = list->head->next;
    free(list->head);
    list->head = temp;
    list->len--;
    return 0;
}
