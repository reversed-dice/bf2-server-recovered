// FUNCTION: BF2 0x572be0
namespace dice { namespace hfe { namespace world {

class ZiplineTemplate {
public:
    char _pad[0x1C8];
    int m_unk_0x1C8;
    unsigned int release();
};

unsigned int ZiplineTemplate::release() {
    int ref = this->m_unk_0x1C8 - 1;
    this->m_unk_0x1C8 = ref;
    if (ref == 0) {
        if (this != 0) {
            ((void (**)(ZiplineTemplate*))(*(void**)this))[6](this);
        }
    }
    return ref;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ZiplineTemplate::release (0x572be0)