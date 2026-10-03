// FUNCTION: BF2 0x6ea220
namespace dice { namespace hfe {
class ResponsePhysics {
public:
    char _pad[0x44];
    int field;
    void setCollisionChecked(int v);
};
void ResponsePhysics::setCollisionChecked(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ResponsePhysics_setCollisionChecked (0x6ea220)
