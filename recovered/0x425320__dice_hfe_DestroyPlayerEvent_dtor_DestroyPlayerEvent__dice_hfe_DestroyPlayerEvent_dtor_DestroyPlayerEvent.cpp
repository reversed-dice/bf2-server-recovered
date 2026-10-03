// FUNCTION: BF2 0x425320
namespace dice { namespace hfe {

void GameEvent_dtor(void** self);

class DestroyPlayerEvent {
public:
    virtual ~DestroyPlayerEvent();
};

DestroyPlayerEvent::~DestroyPlayerEvent() {
    GameEvent_dtor(reinterpret_cast<void**>(this));
}

} }
// REVERSED_FUNCTION: dice_hfe_DestroyPlayerEvent_dtor_DestroyPlayerEvent (0x425320)