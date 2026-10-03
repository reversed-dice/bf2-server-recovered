// FUNCTION: BF2 0x72e0f0
namespace dice { namespace hfe {
extern void* fn_731400(void);
extern unsigned char fn_72d900(void* a, void* b, void* c, void* d, void* e);
unsigned char intersectRay_0x72e0f0(void* self, void* ray, void* a, void* b) {
    return fn_72d900(self, ray, fn_731400(), a, b);
}
} }
