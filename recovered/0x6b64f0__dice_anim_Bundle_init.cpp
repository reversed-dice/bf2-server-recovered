// FUNCTION: BF2 0x6b64f0
struct ListNode {
    ListNode* next;
    long _pad[2];
    long data_ptr;
};

extern "C" void dice_anim_Bundle_adjustLength();

extern "C" void dice_anim_Bundle_init(ListNode* self) {
    ListNode* cur = self->next;
    if (cur == self) goto end;
    do {
        if (*(char*)(cur->data_ptr + 1) != 0) {
            *(char*)((char*)self + 0x3a) = 1;
            goto end;
        }
        cur = cur->next;
    } while (cur != self);
end:
    dice_anim_Bundle_adjustLength();
}
