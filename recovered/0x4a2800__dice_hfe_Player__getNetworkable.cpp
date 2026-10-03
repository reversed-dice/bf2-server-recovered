// FUNCTION: BF2 0x4a2800
namespace dice { namespace hfe {
class Player {
public:
    void* getNetworkable() const;
    void* m_unk_0x308;
};
void* Player::getNetworkable() const { return *(void**)((char*)this + 0x308); }
} }
// REVERSED_FUNCTION: dice::hfe::Player::getNetworkable (0x4a2800)