#include "E:\WorkSpace\Demo\Board\Inc\pwm.h"

uint8_t Insert(struct linkList *list, uint32_t vol)
{
    struct linkList *head = list;

    if (head->next != NULL) {
        head = head->next;
    } else {
        struct linkList *ptr = (struct linkList*)malloc(sizeof(struct linkList));
        head->next = ptr;
        head->next->data = vol;
        head->next->next = NULL;
    }
}

int main()
{
    struct linkList voltage = { 0 };
    for (int i = 0; i < 4; i++) {
        Insert(&voltage, i);
    }

    struct linkList *ptr = voltage.next;
    for (int i = 0; i < 4; i++) {
        printf_s("list%d = %d\n", i, ptr->data);
        ptr = ptr->next;
    }
}