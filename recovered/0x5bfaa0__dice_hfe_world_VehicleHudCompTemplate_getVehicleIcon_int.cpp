// FUNCTION: BF2 0x5bfaa0
#include <string>
#include <vector>

class VehicleHudCompTemplate {
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
    virtual int getIconCount();
    char _pad0[0x98];
    std::vector<std::string> m_icons;
    std::string* getVehicleIcon(int i);
};

std::string* VehicleHudCompTemplate::getVehicleIcon(int i) {
    if (i < getIconCount()) return &m_icons[i];
    return &m_icons[0];
}
