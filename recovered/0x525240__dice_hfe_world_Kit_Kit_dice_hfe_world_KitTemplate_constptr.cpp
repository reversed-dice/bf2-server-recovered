// FUNCTION: BF2 0x525240
// BF2_FLAGS: -fno-strict-aliasing
// v5: deux maps SEPARES (0x258 et 0x288), base inlinee portant le CALL Item + vptrs

#include <map>

namespace dice { namespace hfe { namespace world {

struct KitTemplate {
    char  pad0[0x218];
    int   f_218;
    char  pad1[0x230 - 0x21c];
    int   f_230;
    char  pad2[0x260 - 0x234];
    float f_260;
};

extern void dice_hfe_world_Item_Item(void* self, const void* tpl);

class Item {
public:
    void* vptr;                       // 0x000
    char  pad008[0xf8];               // 0x008
    void* vptr100;                    // 0x100
    char  pad108[0x130];              // 0x108
    void* vptr238;                    // 0x238
    char  pad240[0x18];               // 0x240
    Item(const void* tpl)
    {
        dice_hfe_world_Item_Item(this, tpl);
        vptr    = (void*)0xb445f0;
        vptr100 = (void*)0xb44978;
        vptr238 = (void*)0xb449b0;
    }
};

class Kit : public Item {
public:
    Kit(const KitTemplate* tpl);
    std::map<int, int> m_a;           // 0x258
    std::map<int, int> m_b;           // 0x288
    void* m_2b8;                      // 0x2b8
    float m_2c0;                      // 0x2c0
    int   m_2c4;                      // 0x2c4
    int   m_2c8;                      // 0x2c8
    int   m_2cc;                      // 0x2cc
    int   m_2d0;                      // 0x2d0
    char  pad2d4[4];
    const KitTemplate* m_2d8;         // 0x2d8
};

Kit::Kit(const KitTemplate* tpl) : Item(tpl)
{
    m_2b8 = 0;
    m_2c0 = (tpl->f_260 != -1.0f) ? 1.0f : -1.0f;
    m_2c4 = -1;
    m_2c8 = tpl->f_218;
    m_2cc = tpl->f_218;
    m_2d0 = tpl->f_230;
    m_2d8 = tpl;
}

} } }
