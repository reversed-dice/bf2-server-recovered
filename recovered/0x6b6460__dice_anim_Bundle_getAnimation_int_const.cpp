// FUNCTION: BF2 0x6b6460
struct Node { Node* prev; void* a; void* b; void* c; void* d; };

void* getAnimation_6b6460(void* selfv, int idx) {
    Node* self = (Node*)selfv;
    Node* n = (Node*)self->prev;
    if (n == self) return 0;
    if (idx != 0) {
        int i = 0;
        do {
            n = (Node*)n->prev;
            i = i + 1;
            if (n == self) return 0;
        } while (idx != i);
    }
    return ((void**)n)[3];
}
