// FUNCTION: BF2 0x415b60
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();

private:
    unsigned long long m_baseData;
};

class BeginRoundEvent : public GameEvent {
public:
    virtual ~BeginRoundEvent();

private:
    unsigned long long m_derivedData;
};

template<typename T>
class GameEventMakerMaker {
public:
    GameEvent* createEvent() const;
};

template<>
GameEvent* GameEventMakerMaker<BeginRoundEvent>::createEvent() const {
    return new BeginRoundEvent();
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_BeginRoundEvent_createEvent (0x415b60)