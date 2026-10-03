// FUNCTION: BF2 0x516cc0
namespace dice { namespace hfe { namespace world {
extern void fn_516a30(void* a, int b);
extern void fn_5742f0(void* a, int b, void* c, unsigned char d);
void handleMessage_0x516cc0(void* self, int arg2, void* arg3, unsigned char arg4) {
    if (arg2 == 0x1d) {
        fn_516a30(self, -1);
    }
    fn_5742f0(self, arg2, arg3, arg4);
}
} } }
