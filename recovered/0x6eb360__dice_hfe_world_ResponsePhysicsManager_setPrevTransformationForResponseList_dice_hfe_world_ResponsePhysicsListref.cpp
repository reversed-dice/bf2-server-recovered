// FUNCTION: BF2 0x6eb360
namespace dice { namespace hfe { namespace world {

typedef void* (*GetFn)(void*);
typedef unsigned char (*TestFn)(void*);
typedef void (*SetFn)(void*, void*);

struct List { void* head; void* tail; };
void setPrev(void* self, void** plist) {
    (void)self;
    List& list = *(List*)plist;
    void* node = list.head;
    for (;;) {
        void* tail = list.tail;
        void* end = 0;
        if (tail) end = *(void**)((char*)tail + 0x10);
        if (node == end) return;
        void* next = *(void**)((char*)node + 0x10);
        void* r = ((GetFn)(*(void***)node)[0x80 / 8])(node);
        unsigned int fl = *(unsigned int*)((char*)r + 0x8);
        if ((fl & 1) || !(fl & 0x100)) { node = next; continue; }
        do {
            r = ((GetFn)(*(void***)node)[0x80 / 8])(node);
            fl = *(unsigned int*)((char*)r + 0x8);
            if (!(fl & 1) && (fl & 0x100)) {
                void* r2 = ((GetFn)(*(void***)node)[0x80 / 8])(node);
                void* p88 = *(void**)((char*)r2 + 0x88);
                if (((TestFn)(*(void***)node)[0x38 / 8])(node)) {
                    void* v = ((GetFn)(*(void***)r2)[0x108 / 8])(r2);
                    ((SetFn)(*(void***)p88)[0xa8 / 8])(p88, v);
                }
            }
            node = ((GetFn)(*(void***)node)[0xc0 / 8])(node);
        } while (node != 0);
        node = next;
    }
}

} } }
