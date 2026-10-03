// FUNCTION: BF2 0x5ac460
namespace dice { namespace hfe { namespace world {

class DecalTemplate {
public:
    unsigned int m_unk_0xD;
    int m_unk_0x68;
    long * m_unk_0x80;

    unsigned int getAnimationFrameCountX() const;
};

unsigned int DecalTemplate::getAnimationFrameCountX() const {
    void* obj = *(void* const*)((const char*)this + 0x80);
    ((unsigned int (*)(void*))(*(void**)((char*)(*(void**)obj) + 0x3b0)))(obj);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DecalTemplate::getAnimationFrameCountX_const (0x591d50)