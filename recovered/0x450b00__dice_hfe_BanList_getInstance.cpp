// FUNCTION: BF2 0x450b00
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <map>
#include <string>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    static const std::string ignoredString_;
};

class IConsole {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual bool executeCommand(const std::string& cmd, std::string& result, int a, int b,
                                int c, int d, int e);
    virtual void c4();
    virtual void c5();
    virtual void c6();
    virtual void c7();
    virtual void c8();
    virtual void c9();
    virtual void execute(const std::string& file, const std::string& a1, const std::string& a2,
                         const std::string& a3, const std::string& a4, const std::string& a5,
                         const std::string& a6, const std::string& a7, const std::string& a8,
                         const std::string& ignored);
};

extern IConsole* mainConsole;

} } }

namespace dice { namespace hfe {

class Game {
public:
    virtual void* addRef();
    virtual void* release();
    virtual void* getInterfaceId();
    virtual void* queryInterface(unsigned int);
};

extern Game* game;
extern unsigned int IID_IGameServer;

class BanList {
public:
    char pad[0x78];

    BanList();
    static BanList* getInstance();
};

extern BanList* banList;
extern std::string banFileName[];

BanList* BanList::getInstance()
{
    // TRICK: 2 (the pointer test is predicted likely by gcc 4.0: an expect
    // on the game check puts the cold block after the epilogue)
    if (__builtin_expect(game == 0, 0))
        return 0;
    if (game->queryInterface(IID_IGameServer) == 0)
        return 0;

    if (banList == 0) {
        banList = new BanList();

        io::mainConsole->execute(banFileName[0], "", "", "", "", "", "", "", "",
                                 io::Console::ignoredString_);
    }

    return banList;
}

} } // namespace
