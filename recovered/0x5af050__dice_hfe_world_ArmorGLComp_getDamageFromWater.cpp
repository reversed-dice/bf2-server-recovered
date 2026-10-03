// FUNCTION: BF2 0x5af050
namespace dice { namespace hfe { namespace world {
class ArmorGLComp {
public:
    bool getDamageFromWater();
};
bool ArmorGLComp::getDamageFromWater() {
    return *(float*)((char*)*(void**)((char*)this + 0x10) + 0x1bc) > *(float*)0xb2d910;
}
} } }
