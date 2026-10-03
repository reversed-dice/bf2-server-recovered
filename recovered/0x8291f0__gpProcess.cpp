// FUNCTION: BF2 0x8291f0
namespace dice { namespace hfe {
extern int fn_82cf10(void*, int);
int gpProcess_0x8291f0(void* self) {
    if (!self)
        goto err;
    void* vt = *(void**)self;
    if (!vt)
        goto err;
    if (*(int*)((char*)vt + 0x108) == 0)
        return fn_82cf10(self, 0);
    return 0;
err:
    return 2;
}
} }
