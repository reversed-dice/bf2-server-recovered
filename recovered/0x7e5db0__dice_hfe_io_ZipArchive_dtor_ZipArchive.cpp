// FUNCTION: BF2 0x7e5db0
#include <string>
struct RbTree { void erase(void*); };
extern "C" {
void std_List_base_dice_hfe_io_ZipArchive_FileHandle_std_allocator_dice_hfe_io_ZipArchive_FileHandle_M_clear(void*);
void std_List_base_dice_hfe_io_ZipArchive_FileHandleptr_std_allocator_dice_hfe_io_ZipArchive_FileHandleptr_M_clear(void*);
void dice_hfe_io_IArchive_dtor_IArchive(void*);
}
extern "C" void dtor_7e5db0(char* param_1) {
    *(void**)param_1 = (void*)0xbad0b0;
    void* obj = *(void**)(param_1 + 0x10);
    (*(void(**)(void*))((char*)(*(void**)obj) + 0x10))(obj);
    std_List_base_dice_hfe_io_ZipArchive_FileHandle_std_allocator_dice_hfe_io_ZipArchive_FileHandle_M_clear(param_1 + 0x70);
    std_List_base_dice_hfe_io_ZipArchive_FileHandleptr_std_allocator_dice_hfe_io_ZipArchive_FileHandleptr_M_clear(param_1 + 0x60);
    RbTree* t = (RbTree*)(param_1 + 0x30);
    t->erase(*(void**)((char*)t + 0x10));
    ((std::string*)(param_1 + 0x28))->~basic_string();
    ((std::string*)(param_1 + 0x20))->~basic_string();
    ((std::string*)(param_1 + 0x18))->~basic_string();
    dice_hfe_io_IArchive_dtor_IArchive(param_1);
}
// REVERSED_FUNCTION: dice_hfe_io_ZipArchive_dtor_ZipArchive (0x7e5db0)
