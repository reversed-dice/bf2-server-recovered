// FUNCTION: BF2 0x7dee60
namespace dice { namespace hfe { namespace io {

extern "C" void* getEmptyString(void*);
typedef void* (*vfn0)(void*);
void* fn_0x7dee60(void* self) {
    void* p = *(void**)((char*)self+0x40);
    if (!p) return getEmptyString(p);
    void** vt = *(void***)p;
    return ((vfn0)vt[0x98/8])(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_FileManager_getRootSubstitution_const (0x7dee60)
