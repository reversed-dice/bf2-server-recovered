// BF2_FLAGS: -fno-strict-aliasing -fno-tree-dominator-opts

// FUNCTION: BF2 0x5c4f00
#include <string>
#include <vector>

namespace dice { namespace hfe {

namespace io {
class IConsoleSaveable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void makeScript(void*);
};
}

namespace world {

class IWeaponHudCompTemplate {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void getClassID() const;
    virtual void getInterfaceID();
    virtual void createComponent();
    virtual void objectCreated(void*);
    virtual void objectDestroyed(void*);
    virtual void setTemplate(void*);
    virtual void queryImplementation(unsigned int);
    virtual ~IWeaponHudCompTemplate();
};

class WeaponHudCompTemplate : public IWeaponHudCompTemplate, public io::IConsoleSaveable {
public:
    int m_refCount;                     // 0x10
    bool m_active;                      // 0x14
    std::string m_s1;                   // 0x18
    std::string m_s2;                   // 0x20
    std::string m_s3;                   // 0x28
    std::string m_s4;                   // 0x30
    std::string m_s5;                   // 0x38
    std::string m_s6;                   // 0x40
    std::string m_s7;                   // 0x48
    int m_50;                           // 0x50
    int m_54;                           // 0x54
    int m_58;                           // 0x58
    int m_5c;                           // 0x5c
    int m_60;                           // 0x60
    int m_crosshairIconSize;            // 0x64
    std::vector<int> m_showOnCamModes;  // 0x68
    bool m_b0;                          // 0x80
    bool m_b1;                          // 0x81
    bool m_b2;                          // 0x82
    bool m_b3;                          // 0x83
    bool m_b4;                          // 0x84
    bool m_b5;                          // 0x85
    bool m_b6;                          // 0x86
    bool m_b7;                          // 0x87
    bool m_b8;                          // 0x88
    bool m_b9;                          // 0x89
    int m_8c;                           // 0x8c
    std::string m_i0;                   // 0x90
    std::string m_i1;                   // 0x98
    std::string m_i2;                   // 0xa0
    std::string m_i3;                   // 0xa8
    std::string m_i4;                   // 0xb0
    std::string m_i5;                   // 0xb8
    std::string m_i6;                   // 0xc0
    std::string m_i7;                   // 0xc8
    std::string m_i8;                   // 0xd0
    std::string m_i9;                   // 0xd8

    WeaponHudCompTemplate();
};

WeaponHudCompTemplate::WeaponHudCompTemplate()
    : m_refCount(1),
      m_active(true)
{
    m_i0 = "";
    m_i1 = "";
    m_i3 = "";
    m_i2 = "";
    m_i4 = "";
    m_i5 = "";
    m_showOnCamModes.push_back(1);
    m_crosshairIconSize = 0x20;
    m_s3 = " ";
    m_50 = 5;
    m_54 = -1;
    m_58 = 10;
    m_5c = 1000;
    m_60 = 0;
    m_8c = -1;
    m_b3 = true;
    m_b2 = true;
    m_b4 = false;
    m_b5 = false;
    m_b1 = false;
    m_b7 = true;
    m_b6 = true;
    m_b0 = true;
    m_b8 = false;
    m_b9 = false;
    m_s5 = "";
    m_s6 = "";
    m_s7 = "";
}

} } }
