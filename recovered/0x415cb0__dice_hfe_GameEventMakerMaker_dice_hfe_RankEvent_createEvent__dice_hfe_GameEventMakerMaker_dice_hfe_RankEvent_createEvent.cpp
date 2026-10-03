// FUNCTION: BF2 0x415cb0
inline void* operator new(unsigned long, void* __p) { return __p; }
void* operator new(unsigned long size);

namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
};

class RankEvent : public GameEvent {
};

template<typename EventType>
class GameEventMakerMaker {
public:
    static EventType* createEvent();
};

template<>
RankEvent* GameEventMakerMaker<RankEvent>::createEvent() {
    void* p = operator new(0x20);
    ::new (p) GameEvent();
    *(void**)p = (void*)0xb2daf0;
    return (RankEvent*)p;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_RankEvent_createEvent (0x415cb0)