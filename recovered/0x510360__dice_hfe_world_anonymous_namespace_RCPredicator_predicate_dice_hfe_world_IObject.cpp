// FUNCTION: BF2 0x510360
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
bool pred_0x510360(void* a, void* b) {
    if (b) {
        void* c = *(void**)((char*)b + 0x28);
        if (c) {
            void* r = ((void* (*)(void*, int))(*(void***)c)[0x14])(c, *(int*)0x00c7cee8);
            if (r)
                return true;
        }
    }
    return false;
}
} } } }
