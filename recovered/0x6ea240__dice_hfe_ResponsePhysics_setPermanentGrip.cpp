// FUNCTION: BF2 0x6ea240
namespace dice { namespace hfe {
class ResponsePhysics {
public:
    char _pad[0x10d];
    bool field;
    void setPermanentGrip(bool v);
};
void ResponsePhysics::setPermanentGrip(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ResponsePhysics_setPermanentGrip (0x6ea240)
