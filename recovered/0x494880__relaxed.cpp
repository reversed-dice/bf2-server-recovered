// FUNCTION: BF2 0x494880
namespace dice { namespace hfe {
class Player {
public:
    unsigned int getSatelliteIsReady() const;
};
unsigned int Player::getSatelliteIsReady() const {
    const void* vtable = *reinterpret_cast<const void* const*>(this);
    const void* entry = reinterpret_cast<const void* const*>(vtable)[0x228 / 8];
    bool (*func)(const Player*) = (bool (*)(const Player*))(entry);
    if (!func(this))
        goto return_zero;
    if (!*(const char*)((const char*)this + 0x136))
        goto return_zero;
    return 1;
return_zero:
    return 0;
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::getSatelliteIsReady(0x494840)