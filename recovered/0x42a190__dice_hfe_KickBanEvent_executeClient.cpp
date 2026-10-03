// FUNCTION: BF2 0x42a190
namespace dice { namespace hfe {

class IPlayer;
class IPlayerManager {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual IPlayer* getPlayerFromId(int id);
};
class IHud {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20();
    virtual void showMessage(int type, int id, float time, const void* data);
};

extern IPlayerManager* g_playerManager;
extern IHud* g_hud;

class KickBanEvent {
public:
    bool executeClient();
    char _pad0[0x10];
    int m_playerId;
};

bool KickBanEvent::executeClient()
{
    if (g_playerManager->getPlayerFromId(m_playerId))
        g_hud->showMessage(2, 0x44, 0.0f, &m_playerId);
    return true;
}

} }
