// FUNCTION: BF2 0x4e5bd0
namespace dice { namespace hfe {
// 0x4e5bd0 playDemo
extern "C" void fn_4effd0(void*);
extern "C" unsigned char fn_4f0c60(void*, void*);
extern "C" unsigned char fn_4e5aa0(void*, void*, void*);
extern "C" void fn_4f0130(void*);
unsigned char playDemo_0x4e5bd0(void* self, void* client, void* name) {
    char buf[0x48];
    fn_4effd0(buf);
    unsigned char r = 0;
    if (fn_4f0c60(buf, name) != 0) {
        r = fn_4e5aa0(self, client, buf);
    }
    fn_4f0130(buf);
    return r;
}
} }
