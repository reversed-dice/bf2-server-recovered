// FUNCTION: BF2 0x42f5a0
#include <stdint.h>

namespace dice {
namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

struct SetPrivateSquadEvent : GameEvent {
    unsigned char m_field_10;
    unsigned char m_field_11;
    unsigned char m_field_12;
};

void GameEvent_GameEvent(GameEvent* self);

void SetPrivateSquadEvent_constructor(SetPrivateSquadEvent* self, int param_2, int param_3, bool param_4)
{
    GameEvent_GameEvent(self);
    self->m_field_11 = static_cast<unsigned char>(param_3);
    self->m_field_10 = static_cast<unsigned char>(param_2);
    self->m_field_12 = param_4;
    self->vptr = reinterpret_cast<void*>(0xb2df90);
}

} // namespace hfe
} // namespace dice

// REVERSED_FUNCTION: dice_hfe_SetPrivateSquadEvent_SetPrivateSquadEvent_int_int_bool::dice_hfe_SetPrivateSquadEvent_SetPrivateSquadEvent_int_int_bool (0x42f600)
// REVERSED_FUNCTION: dice_hfe_SetPrivateSquadEvent_SetPrivateSquadEvent_int_int_bool (0x42f5a0)
