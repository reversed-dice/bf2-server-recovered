// FUNCTION: BF2 0x64a4f0
namespace dice { namespace hfe {
typedef int (*vfn_28)(void*);
extern void* fn_64a4e0(void* self, int x);
extern void* fn_64be00(void* p);
void* cb_64a4f0(void* self) {
    if (!(*(vfn_28*)((char*)*(void**)self + 0x28))(self))
        return 0;
    return fn_64be00(fn_64a4e0(self, 0));
}
} }
// REVERSED_FUNCTION: dice_hfe_GSServerSideNameValidation_getNumKeys (0x64a4f0)
