// FUNCTION: BF2 0x42d1a0
namespace dice { namespace hfe {

class PythonCommandEvent {
public:
    ~PythonCommandEvent();
    unsigned int m_unk_0x3;
    int m_unk_0x5;
    unsigned int m_unk_0x14;
    int m_unk_0x18;
    void* m_unk_0x1C;
    unsigned int m_unk_0x20;
    void* m_unk_0x24;
    int m_unk_0x2C;
};

void GameEvent_dtor(void** self);

PythonCommandEvent::~PythonCommandEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2d970);
    GameEvent_dtor(reinterpret_cast<void**>(this));
}

} }
// REVERSED_FUNCTION: dice_hfe_PythonCommandEvent_dtor_PythonCommandEvent (0x42d1a0)