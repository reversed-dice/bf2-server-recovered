// FUNCTION: BF2 0x592340
namespace dice { namespace hfe { namespace world {
extern "C" void Object_init(void*);
typedef void (*Fn6)(void*, long, long, int, int, float);

void EditableDecal_init_592340(void* self) {
    Object_init(self);
    if (*(void**)((char*)self + 0x218) == 0)
        return;
    Fn6 fn = (Fn6)(*(void***)*(void**)((char*)self + 0x218))[0x38 / 8];
    long x70 = *(long*)((char*)*(void**)((char*)self + 0x28) + 0x70);
    fn(*(void**)((char*)self + 0x218),
       ((long (*)(void*))(*(void***)self)[0x120 / 8])(self), x70, 0, 0, 1.0f);
}
} } }
