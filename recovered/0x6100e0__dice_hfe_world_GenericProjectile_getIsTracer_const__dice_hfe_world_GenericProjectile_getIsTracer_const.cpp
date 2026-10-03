// FUNCTION: BF2 0x6100e0
namespace dice { namespace hfe { namespace world {
class GenericProjectile {
public:
    bool getIsTracer() const;
};
bool GenericProjectile::getIsTracer() const {
    return *(float*)((char*)*(void**)((char*)this + 0x258) + 0x230) > *(float*)0xb2d910;
}
} } }
