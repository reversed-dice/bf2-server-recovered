// FUNCTION: BF2 0x521330
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned char _pad[0x47c];
    void setSprintStamina(float f);
};

extern void func_43e070(void*, float);

void PlayerControlObject::setSprintStamina(float f) { func_43e070((char*)this + 0x47c, f); }

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_setSprintStamina_float (0x521330)
