// FUNCTION: BF2 0x73e4a0
namespace dice { namespace hfe {

extern "C" void LoadStat_resetLoadStats(void*);
void fn_0x73e4a0(void* self) {
    *(long*)self = 0;
    *(long*)((char*)self+8) = 0;
    *(unsigned char*)((char*)self+0x10) = 0;
    *(unsigned char*)((char*)self+0x12) = 0;
    *(void**)((char*)self+0x18) = (void*)0xf6c6e8;
    *(void**)((char*)self+0x20) = (void*)0xf6c6e8;
    *(unsigned*)((char*)self+0x30) = 0xbf800000;
    *(unsigned char*)((char*)self+0x48) = 0;
    LoadStat_resetLoadStats(self);
}

} }
// REVERSED_FUNCTION: dice_hfe_LoadStat_LoadStat (0x73e4a0)
