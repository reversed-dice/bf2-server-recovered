// FUNCTION: BF2 0x6366c0
namespace dice { namespace hfe { namespace world {
extern int fn_586aa0(void* a, int b, void* c, bool d);
int handleMessage_0x6366c0(void* self, int msg, void* data, bool v) {
    if (msg == 4)
        ((void (*)(void*, int, int))(*(void***)self)[0x18])(self, 0x800, 0);
    return fn_586aa0(self, msg, data, v);
}
} } }
