// FUNCTION: BF2 0x76c8a0
namespace dice { namespace hfe { namespace ai {

struct AIPlayerBase { virtual ~AIPlayerBase() {} };

class AIPlayer : public AIPlayerBase {
public:
    void* m_object;    // 0x08
    virtual ~AIPlayer();
    bool  isActive();  // 0x0076c050
};

AIPlayer::~AIPlayer()
{
    void* g = *(void**)0x010ae0c0;
    if (g != 0 && ((bool (*)(void*))(*(void***)g)[0x40 / 8])(g) == false
        && m_object != 0 && isActive()) {
        void* mgr = *(void**)0x010addf8;
        void* fn = (*(void***)mgr)[0x128 / 8];
        void* r = ((void* (*)(void*))(*(void***)m_object)[0x48 / 8])(m_object);
        ((void (*)(void*, void*))fn)(mgr, r);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayer_dtor_AIPlayer (0x76c8a0)
