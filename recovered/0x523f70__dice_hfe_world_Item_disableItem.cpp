// FUNCTION: BF2 0x523f70
namespace dice { namespace hfe { namespace world {

typedef void (*vfn2)(void*, int, int);
void fn_0x523f70(void* self) {
    if (*(unsigned char*)((char*)self+0x24c) == 0) return;
    *(unsigned char*)((char*)self+0x24c) = 0;
    void** vt = *(void***)self;
    ((vfn2)vt[0xc0/8])(self, 1, 0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Item_disableItem (0x523f70)
