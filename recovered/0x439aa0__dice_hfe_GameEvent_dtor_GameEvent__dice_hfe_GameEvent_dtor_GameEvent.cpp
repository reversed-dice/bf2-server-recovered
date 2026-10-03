// FUNCTION: BF2 0x439aa0
namespace dice { namespace hfe {

class GameEvent {
public:
    ~GameEvent();
    int release();
    void* queryInterface(unsigned int id) const;
    unsigned int executeClient();
    unsigned long long executeServer();

    unsigned int m_unk_0x1;
    int m_field_08;
    int m_field_0c;
};

GameEvent::~GameEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2f0b0);
    operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEvent_dtor_GameEvent (0x439aa0)