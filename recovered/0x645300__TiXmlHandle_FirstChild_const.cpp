// FUNCTION: BF2 0x645300
namespace dice { namespace hfe {
void* FirstChild_0x645300(void* self, void* arg2) {
    void* p = *(void**)arg2;
    if (p) {
        p = *(void**)((char*)p + 0x28);
        if (p) {
            *(void**)self = p;
            return self;
        }
    }
    *(void**)self = 0;
    return self;
}
} }
