// FUNCTION: BF2 0x4c6c00
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>

namespace dice { namespace hfe {

std::string getLowerCase(std::string const& s);

class SoundHandle {
public:
    virtual void v_dummy_0();
    virtual void v_dummy_1();
    virtual void v_dummy_2();
    virtual void v_dummy_3();
    virtual void v_dummy_4();
    virtual void v_dummy_5();
    virtual void v_dummy_6();
    virtual void v_dummy_7();
    virtual void v_dummy_8();
    virtual void v_dummy_9();
    virtual void v_dummy_10();
    virtual void v_dummy_11();
    virtual void v_dummy_12();
    virtual void v_dummy_13();
    virtual void v_dummy_14();
    virtual void v_dummy_15();
    virtual void v_dummy_16();
    virtual void v_dummy_17();
    virtual void v_dummy_18();
    virtual int getId();
};

class SoundSlot {
public:
    virtual void v_dummy_0();
    virtual void v_dummy_1();
    virtual void v_dummy_2();
    virtual void v_dummy_3();
    virtual void v_dummy_4();
    virtual void v_dummy_5();
    virtual void v_dummy_6();
    virtual void v_dummy_7();
    virtual void v_dummy_8();
    virtual void play(int id, bool b);
    virtual void v_dummy_10();
    virtual void v_dummy_11();
    virtual void stop();
    virtual void v_dummy_13();
    virtual void v_dummy_14();
    virtual void v_dummy_15();
    virtual void v_dummy_16();
    virtual void v_dummy_17();
    virtual void v_dummy_18();
    virtual void v_dummy_19();
    virtual void v_dummy_20();
    virtual void v_dummy_21();
    virtual void v_dummy_22();
    virtual void v_dummy_23();
    virtual void v_dummy_24();
    virtual void v_dummy_25();
    virtual void v_dummy_26();
    virtual void v_dummy_27();
    virtual SoundHandle* getHandle();
};

class BfSound {
public:
    virtual void v_dummy_0();
    virtual void v_dummy_1();
    virtual void v_dummy_2();
    virtual void v_dummy_3();
    virtual void v_dummy_4();
    virtual void v_dummy_5();
    virtual void v_dummy_6();
    virtual void v_dummy_7();
    virtual void v_dummy_8();
    virtual void v_dummy_9();
    virtual void v_dummy_10();
    virtual void v_dummy_11();
    virtual void v_dummy_12();
    virtual void v_dummy_13();
    virtual void v_dummy_14();
    virtual void v_dummy_15();
    virtual void v_dummy_16();
    virtual void v_dummy_17();
    virtual void v_dummy_18();
    virtual void v_dummy_19();
    virtual void v_dummy_20();
    virtual void v_dummy_21();
    virtual void v_dummy_22();
    virtual void v_dummy_23();
    virtual void v_dummy_24();
    virtual void v_dummy_25();
    virtual void v_dummy_26();
    virtual void v_dummy_27();
    virtual void v_dummy_28();
    virtual void v_dummy_29();
    virtual void v_dummy_30();
    virtual void v_dummy_31();
    virtual void v_dummy_32();
    virtual void v_dummy_33();
    virtual void v_dummy_34();
    virtual void v_dummy_35();
    virtual void v_dummy_36();
    virtual void v_dummy_37();
    virtual void v_dummy_38();
    virtual void v_dummy_39();
    virtual void v_dummy_40();
    virtual void v_dummy_41();
    virtual void v_dummy_42();
    virtual void v_dummy_43();
    virtual void v_dummy_44();
    virtual float getVolume(int id);
};

extern BfSound* g_bfSound;

class VoiceMessages {
public:
    int playHelpMessage(std::string const& s);
private:
    char m_pad0[0xb8];
    std::map<std::string,int> m_sounds;
    char m_pad1[0x2178 - 0xb8 - sizeof(std::map<std::string,int>)];
    SoundSlot* m_handle;
};

int VoiceMessages::playHelpMessage(std::string const& s) {
    std::map<std::string,int>::iterator it = m_sounds.find(dice::hfe::getLowerCase(s));
    int r = -1;
    if (it != m_sounds.end()) {
        r = it->second;
        if (g_bfSound->getVolume(m_handle->getHandle()->getId()) > 0.05f) {
            m_handle->stop();
            m_handle->play(r, true);
        }
    }
    return r;
}

} }
