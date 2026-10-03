// FUNCTION: BF2 0x5240d0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {
struct ItemTemplate { char pad[0x208]; int f_208; int f_20c; };
extern void dice_hfe_world_Bundle_Bundle(void* self, const void* tpl);
struct Item {
    void* vptr;          // 0x000
    char  pad008[0xf8];  // 0x008
    void* vptr100;       // 0x100
    char  pad108[0x130]; // 0x108
    void* vptr238;       // 0x238
    int   m_240;         // 0x240
    int   m_244;         // 0x244
    int   m_248;         // 0x248
    bool  m_24c;         // 0x24c
    char  pad24d[0x3];   // 0x24d
    int   m_250;         // 0x250
};
void dice_hfe_world_Item_Item(Item* self, const ItemTemplate* tpl)
{
    dice_hfe_world_Bundle_Bundle(self, tpl);
    self->vptr    = (void*)0xb43730;
    self->vptr100 = (void*)0xb43ab0;
    self->vptr238 = (void*)0xb43ae8;
    self->m_240 = 1;
    self->m_244 = -1;
    self->m_248 = tpl->f_208;
    self->m_24c = true;
    self->m_250 = tpl->f_20c;
}
}}}
