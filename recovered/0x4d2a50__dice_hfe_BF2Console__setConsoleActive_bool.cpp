// FUNCTION: BF2 0x4d2a50
namespace dice { namespace hfe {

class BF2Console {
public:
    unsigned char m_active;
    void* m_unk_0x8;
    void* m_unk_0x10;

    void setConsoleActive(bool active);
};

class BF2MainConsole {
public:
    virtual void _v00();
    virtual void _v01();
    virtual void _v02();
    virtual void _v03();
    virtual void _v04();
    virtual void _v05();
    virtual void _v06();
    virtual void _v07();
    virtual void _v08();
    virtual void _v09();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual void _v20();
    virtual void _v21();
    virtual void _v22();
    virtual void _v23();
    virtual void _v24();
    virtual void _v25();
    virtual void _v26();
    virtual void _v27();
    virtual void _v28();
    virtual void _v29();
    virtual void _v30();
    virtual void _v31();
    virtual void _v32();
    virtual void _v33();
    virtual void _v34();
    virtual void _v35();
    virtual void _v36();
    virtual void _v37();
    virtual void _v38();
    virtual void _v39();
    virtual void _v40();
    virtual void setActive(unsigned int active);
};

extern BF2MainConsole* io_mainConsole;

void BF2Console::setConsoleActive(bool active) {
    m_active = active;
    io_mainConsole->setActive(active);
}

} }
// REVERSED_FUNCTION: dice_hfe_BF2Console::setConsoleActive_bool (0x4d2a50)