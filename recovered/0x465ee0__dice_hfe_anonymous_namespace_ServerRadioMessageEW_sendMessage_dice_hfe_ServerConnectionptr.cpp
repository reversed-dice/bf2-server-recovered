// FUNCTION: BF2 0x465ee0
namespace dice { namespace hfe {
extern const unsigned int IID_IGameServer;
extern void* game;
enum TargetChannel { TC_Dummy = 0 };
enum ChannelMessageType { CMT_Dummy = 0 };
class Game {
public:
    void playbackRadioMessage(TargetChannel, ChannelMessageType, int, int, int);
};
class ServerConnection { public: char _pad[0x1000]; };
namespace {
struct RadioMsgData {
    char pad[0x29];
    unsigned char f29;
    unsigned char f2a;
    unsigned char f2b;
    char pad2[4];
    int f30;
    int f34;
};
class ServerRadioMessageEW {
public:
    RadioMsgData* m_data;
    virtual void sendMessage(dice::hfe::ServerConnection* conn);
};
void ServerRadioMessageEW::sendMessage(dice::hfe::ServerConnection*) {
    RadioMsgData* d = m_data;
    unsigned int b29 = d->f29;
    unsigned int b2a = d->f2a;
    unsigned int b2b = d->f2b;
    int i34 = d->f34;
    int i30 = d->f30;
    Game* g = (Game*)dice::hfe::game;
    Game* r = 0;
    if (g != 0) {
        void* s = ((void* (*)(void*, unsigned int))(*(void***)g)[0x18 / 8])(g, IID_IGameServer);
        if (s != 0)
            r = (Game*)((char*)s - 0x80);
    }
    r->playbackRadioMessage((TargetChannel)i30, (ChannelMessageType)i34, b2b, b2a, b29);
}
}
}}
