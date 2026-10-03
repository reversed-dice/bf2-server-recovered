// FUNCTION: BF2 0x63b220
namespace dice { namespace hfe { namespace world {

enum TemplateMessage { TM_0 = 0 };
class IPlayer;

class Bundle {
public:
    void handleMessage(TemplateMessage message, IPlayer* player, bool flag);
};

class Spring : public Bundle {
public:
    void handleMessage(TemplateMessage message, IPlayer* player, bool flag);
};

void Spring::handleMessage(TemplateMessage message, IPlayer* player, bool flag)
{
    switch (message) {
    case 2: {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x23a) = 1;
        Bundle::handleMessage((TemplateMessage)2, player, flag);
        return;
    }
    case 3: {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x23a) = 0;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x268) = 0;
        Bundle::handleMessage((TemplateMessage)3, player, flag);
        return;
    }
    default:
        Bundle::handleMessage(message, player, flag);
        return;
    }
}

} } }
