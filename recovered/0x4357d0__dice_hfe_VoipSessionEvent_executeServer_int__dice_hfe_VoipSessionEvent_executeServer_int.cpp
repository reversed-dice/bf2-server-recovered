// FUNCTION: BF2 0x4357d0
namespace dice { namespace hfe {
namespace world {
class PlayerManager;
extern PlayerManager* playerManager;
}

class VoipSessionEvent {
public:
    unsigned long long getType() const;
    unsigned int executeServer();

    char _pad0[0x10];
    unsigned short m_unk_0x10;
};

unsigned int VoipSessionEvent::executeServer() {
    world::PlayerManager* pm = world::playerManager;
    if (pm != 0) {
        void* session = (*(void* (*)(world::PlayerManager*))(*(void***)pm)[8])(pm);
        if (session != 0) {
            (*(void (*)(void*, unsigned short))(*(void***)session)[157])(session, this->m_unk_0x10);
            return 1;
        }
    }
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_VoipSessionEvent_executeServer_int (0x4357d0)