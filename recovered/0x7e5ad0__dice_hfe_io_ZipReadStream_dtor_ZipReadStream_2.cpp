// FUNCTION: BF2 0x7e5ad0
namespace dice { namespace hfe { namespace io {

typedef void (*vfn0)(void*);
extern "C" void dice_hfe_io_ZipArchive_closeFileHandle_dice_hfe_io_ZipArchive_FileHandleptr(void*, void*);
void fn_0x7e5ad0(void* self) {
    *(void**)self = (void*)0xbad210;
    void* handle = *(void**)((char*)self+0x20);
    void* arch = *(void**)((char*)self+0x10);
    dice_hfe_io_ZipArchive_closeFileHandle_dice_hfe_io_ZipArchive_FileHandleptr(arch, handle);
    void* p = *(void**)((char*)self+0x10);
    void** vt = *(void***)p;
    ((vfn0)vt[0x10/8])(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_ZipReadStream_dtor_ZipReadStream (0x7e5ad0)
