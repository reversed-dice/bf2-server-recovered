// FUNCTION: BF2 0x5b9810
#include <string>

namespace dice {
namespace hfe {

class Game {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void localRadioMessage(int targetChannel, std::string const& message); // slot 23 = 0xb8
};

extern Game* game;

namespace world {

class RadioGLCompTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual std::string getDestroyedMessage(); // slot 16 = 0x80
    virtual void v17();
    virtual std::string getRepairedMessage(); // slot 18 = 0x90
};

class RadioGLComp {
public:
    virtual void v0();
    void* m_pad8;              // +0x8
    RadioGLCompTemplate* m_template; // +0x10
    void* m_pad18;             // +0x18
    unsigned char m_pad20;     // +0x20
    unsigned char m_pad21;     // +0x21
    bool m_active;             // +0x22
    bool m_flag23;             // +0x23

    virtual void playDestroyedMessage();
};

void RadioGLComp::playDestroyedMessage()
{
    if (!m_flag23)
        return;

    game->localRadioMessage(2, m_template->getDestroyedMessage());
    m_flag23 = false;
    m_active = true;
}

} // namespace world
} // namespace hfe
} // namespace dice
