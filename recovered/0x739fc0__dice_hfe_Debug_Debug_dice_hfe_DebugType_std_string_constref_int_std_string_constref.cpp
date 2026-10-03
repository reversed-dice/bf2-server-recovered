// FUNCTION: BF2 0x739fc0
namespace dice { namespace hfe {
extern "C" void fn_407cc8(void*, void*);
extern "C" void fn_407378(void*, int);

struct Debug {
    int type;
    int pad;
    char str1[8];
    char str2[8];
    int val;
    int pad2;
    char ss[0x180];
};

extern "C" void Debug_ctor_0x739fc0(Debug* self, int type, void* s1, int val, void* s2) {
    self->type = type;
    fn_407cc8(&self->str1, s1);
    fn_407cc8(&self->str2, s2);
    self->val = val;
    fn_407378(&self->ss, 0x10);
}
} }
