// FUNCTION: BF2 0x8aeb00
namespace dice { namespace hfe { namespace anonymous_namespace {
long executeObjectMethod_8aeb00(void* self) {
    if (*(int*)((char*)self + 0x30) != 0)
        return 0;
    *(char*)((char*)self + 0x108) = 0;
    void* game = *(void**)0x010c5420;
    void* gc = 0;
    if (game) {
        gc = ((void* (*)(void*, int))(*(void***)game)[0x3])(game, *(int*)0x00c76020);
    }
    ((void (*)(void*))(*(void***)gc)[0x14])(gc);
    return 0;
}
} } }
