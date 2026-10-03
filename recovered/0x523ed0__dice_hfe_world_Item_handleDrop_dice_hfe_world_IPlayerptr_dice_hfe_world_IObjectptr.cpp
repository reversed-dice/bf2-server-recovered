// FUNCTION: BF2 0x523ed0
namespace dice { namespace hfe { namespace world {
void handleDrop_0x523ed0(void* self, void* obj, void* picker) {
    ((void (*)(void*, int))(*(void***)self)[0x62])(self, -1);
    void* t = 0;
    if (picker)
        t = ((void* (*)(void*, int))(*(void***)picker)[0x3])(picker, *(int*)0x00c7d0e4);
    ((void (*)(void*, int))(*(void***)t)[0x6])(t, *(int*)((char*)self + 0x20));
}
} } }
