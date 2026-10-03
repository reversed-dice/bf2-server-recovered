// FUNCTION: BF2 0x4bd6e0
namespace dice { namespace hfe { namespace world {

class SoldierTemplate {
public:
    unsigned char __pad[0x220];
    int m_refCount;

    int release();
};

int SoldierTemplate::release() {
    int ref = --m_refCount;
    if (ref == 0) {
        if (this != 0) {
            typedef void (*DeleteFn)(SoldierTemplate*);
            ((DeleteFn*)(*(void**)(this)))[6](this);
        }
    }
    return ref;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierTemplate::release (0x558b10)