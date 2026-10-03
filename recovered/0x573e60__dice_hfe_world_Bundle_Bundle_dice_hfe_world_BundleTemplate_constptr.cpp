// FUNCTION: BF2 0x573e60
// Bundle::Bundle(BundleTemplate*) 0x573e60 — variante 2: getIdentity sans args
namespace dice { namespace hfe { namespace world {

extern void bundle_base_ctor(void* self);
extern void* mat4_getIdentity();

void bundle_ctor(void* p) {
    bundle_base_ctor(p);
    *(void**)p = (void*)0xb567d0;
    *(void**)((char*)p + 0x100) = (void*)0xb56ae0;
    *(void**)((char*)p + 0x230) = mat4_getIdentity();
}

}}}
// redispatch 1786033727
// redispatch2 1786034096
// redispatch3 queue clear now 1786036218
