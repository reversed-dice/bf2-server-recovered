// FUNCTION: BF2 0x414190
#include <string>

namespace dice { namespace hfe {

std::string formatString(char const* fmt, ...);

class Squad {
public:
    virtual std::string const& getName();
    virtual bool isPrivate();
    virtual void vf2();
    virtual int getId();
};

class ISquadManager {
public:
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual Squad* getSquad(int type, int index);
};

extern ISquadManager* squadManager;

class Game {
public:
    std::string listSquads(int type);
};

std::string Game::listSquads(int type)
{
    std::string out;
    if (squadManager != 0) {
        for (int i = 0; i < 8; ++i) {
            Squad* s = squadManager->getSquad(type, i);
            if (s != 0) {
                out.append(formatString("id:%d ", s->getId()));
                out.append(s->getName());
                if (s->isPrivate())
                    out.append(std::string(" is private."));
                else
                    out.append(std::string(" is public."));
                out.append("\n", 1);
            }
        }
    }
    return out;
}

} }
