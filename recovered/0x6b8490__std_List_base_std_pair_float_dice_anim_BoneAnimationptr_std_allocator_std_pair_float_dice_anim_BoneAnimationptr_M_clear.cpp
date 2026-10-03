// FUNCTION: BF2 0x6b8490
// std::List_base<T>::_M_clear - linked list clear with do-while
extern "C" void _ZdlPv(void*);

struct ListNode {
    ListNode* next;
};

struct List_base {
    ListNode* first;
};

void std_List_base_M_clear(List_base* self) {
    ListNode* node = self->first;
    if (node == (ListNode*)self) return;
    do {
        ListNode* next = node->next;
        _ZdlPv(node);
        if (next == (ListNode*)self) break;
        node = next;
    } while (1);
}
