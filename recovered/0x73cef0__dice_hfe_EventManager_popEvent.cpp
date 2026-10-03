// FUNCTION: BF2 0x73cef0
// 0x73cef0 - EventManager_popEvent (10 ins, 0 calls)
// Decompile: node = self->head; if (node == 0) return; self->head = node->next; call node->vtable[0x10]
void fn_0x73cef0(void* self) {
    void* node = *(void**)((char*)self + 0x18);
    if (node == 0) return;
    void* next = *(void**)((char*)node + 0x20);
    *(void**)((char*)self + 0x18) = next;
    // vtable call
    void** vt = *(void***)node;
    void (*fn)(void*) = (void(*)(void*))vt[0x10/8];
    fn(node);
}
