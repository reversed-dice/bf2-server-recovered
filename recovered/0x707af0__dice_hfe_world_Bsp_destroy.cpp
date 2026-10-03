// FUNCTION: BF2 0x707af0
// Bsp::destroy 0x707af0
// Uses raw pointer offsets to avoid struct alignment issues
namespace dice { namespace hfe { namespace world {

extern "C" {
    void _ZdlPv(void* p);  // operator delete
    void _ZdaPv(void* p);  // operator delete[]
    void dice_hfe_world_BspV8_dtor_BspV8(void* p);
    void dice_hfe_world_BspNode_destroy(void* p);
}

void destroy(char* self) {
    // self+0x78: field_78 pointer
    void* field_78 = *(void**)(self + 0x78);
    if (field_78 != 0) {
        dice_hfe_world_BspV8_dtor_BspV8(field_78);
        _ZdlPv(field_78);
    }
    // self+0x00: byte flag
    if (self[0] == 0) {
        dice_hfe_world_BspNode_destroy(self + 0x08);
    }
    // Zero fields at +0x08 (4 bytes) and +0x10 (8 bytes)
    *(int*)(self + 0x08) = 0;
    *(long*)(self + 0x10) = 0;
    // Zero fields at +0x30 (8 bytes) and +0x38 (8 bytes)
    *(long*)(self + 0x30) = 0;
    *(long*)(self + 0x38) = 0;
    // self+0x50: delete[]
    void* field_50 = *(void**)(self + 0x50);
    if (field_50 != 0) {
        _ZdaPv(field_50);
        *(void**)(self + 0x50) = 0;
    }
    // self+0x48: delete[]
    void* field_48 = *(void**)(self + 0x48);
    if (field_48 != 0) {
        _ZdaPv(field_48);
        *(void**)(self + 0x48) = 0;
    }
    // Zero remaining fields
    self[0] = 0;
    *(int*)(self + 0x58) = 0;
    *(int*)(self + 0x40) = 0;
    *(int*)(self + 0x44) = 0;
}

} } }
