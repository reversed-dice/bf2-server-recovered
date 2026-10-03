// FUNCTION: BF2 0x814b00
// remove_from_queue: remove node from doubly-linked list
long remove_from_queue(long node, long queue) {
    if (__builtin_expect(node == 0, 0)) {
        node = *(long*)(queue + 8);
    }
    if (__builtin_expect(node != 0, 1)) {
        long prev = *(long*)(node + 0x10);
        *(long*)(prev + 8) = *(long*)(node + 8);
        if (*(long*)(node + 8) != 0) {
            *(long*)(*(long*)(node + 8) + 0x10) = prev;
        }
    }
    return node;
}
