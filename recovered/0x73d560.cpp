typedef void (*vfn1)(void*);
extern "C" long insertEvent_73cfe0(void*, void*, float);

extern "C" long postEventNextUpdate_73d560(void* self, int cat, void* node)
{
    if (node) {
        if (*(void**)((char*)self + 0x28 + (long)cat * 8)) {
            *(int*)((char*)node + 8) = cat;
            return insertEvent_73cfe0(self, node, 0.0f);
        } else {
            ((vfn1)(*(void***)node)[0x10/8])(node);
        }
    }
    return 0;
}
