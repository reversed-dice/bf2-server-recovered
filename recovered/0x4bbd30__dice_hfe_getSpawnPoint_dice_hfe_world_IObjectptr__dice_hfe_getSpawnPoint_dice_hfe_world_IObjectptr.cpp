// FUNCTION: BF2 0x4bbd30
namespace dice { namespace hfe { namespace world {
class IObjectptr {
public:
    void getSpawnPoint();
};

void IObjectptr::getSpawnPoint() {
    unsigned long long vtable = *reinterpret_cast<unsigned long long*>(this);
    unsigned int iid = *reinterpret_cast<unsigned int*>(0x00c76050);
    unsigned long long funcPtr = *reinterpret_cast<unsigned long long*>(vtable + 0x18);
    void (*func)(IObjectptr*, unsigned int) = reinterpret_cast<void (*)(IObjectptr*, unsigned int)>(funcPtr);
    func(this, iid);
}
} } }
// REVERSED_FUNCTION: dice_hfe_getSpawnPoint_dice_hfe_world_IObjectptr (0x4bbd30)