// FUNCTION: BF2 0x483bf0
#include <string>

namespace dice { namespace hfe {

class ServerSettings {
public:
    bool getNoVehicles();
};

extern ServerSettings* serverSettings;

class GameLogic {
public:
    virtual void vt00();
    virtual void vt01();
    virtual void vt02();
    virtual void vt03();
    virtual void vt04();
    virtual void vt05();
    virtual void vt06();
    virtual void vt07();
    virtual void vt08();
    virtual void vt09();
    virtual void vt10();
    virtual void vt11();
    virtual void vt12();
    virtual void vt13();
    virtual void vt14();
    virtual void vt15();
    virtual void vt16();
    virtual void vt17();
    virtual void vt18();
    virtual void vt19();
    virtual void vt20();
    virtual void vt21();
    virtual void vt22();
    virtual void vt23();
    virtual void vt24();
    virtual void vt25();
    virtual void vt26();
    virtual void vt27();
    virtual void vt28();
    virtual void vt29();
    virtual void vt30();
    virtual void vt31();
    virtual void vt32();
    virtual bool vt33() const;

    void setTeamDropVehicle(int idx, const std::string& v);

    char pad_0x8[0x330];
    std::string m_teamDropVehicle[2];
};

void GameLogic::setTeamDropVehicle(int idx, const std::string& v) {
    int i = idx - 1;
    if ((unsigned int)i <= 1) {
        m_teamDropVehicle[i].assign(v);
    }
    if (!serverSettings->getNoVehicles()) {
        if (!this->vt33()) {
            return;
        }
    }
    m_teamDropVehicle[i].assign("", 0);
}

} }
