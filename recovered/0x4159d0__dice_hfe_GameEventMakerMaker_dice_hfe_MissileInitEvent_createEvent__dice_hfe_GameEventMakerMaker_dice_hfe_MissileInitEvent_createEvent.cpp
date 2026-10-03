// FUNCTION: BF2 0x4159d0
inline void* operator new(unsigned long, void* __p) { return __p; }

namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
};

class GameEventMakerMaker {
public:
    GameEvent* createEvent();
};

GameEvent* GameEventMakerMaker::createEvent() {
    void* p = ::operator new(0x18);
    ::new (p) GameEvent();
    GameEvent* r = static_cast<GameEvent*>(p);
    *reinterpret_cast<unsigned long long*>(p) = 0xb2d470ULL;
    return r;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_MissileInitEvent_createEvent (0x4159d0)