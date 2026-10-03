// FUNCTION: BF2 0x52e880
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x230); }
};
float f_40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawner_getUseButtonRadius (0x52e880)
