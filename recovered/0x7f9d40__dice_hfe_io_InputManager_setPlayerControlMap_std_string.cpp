// FUNCTION: BF2 0x7f9d40
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace io {

class ControlMapManager {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void* getMap();
    virtual void _m7();
    virtual void _m8();
    virtual void _m9();
    virtual void _m10();
    virtual void _m11();
    virtual void setActiveMap(void* map);
};

extern ControlMapManager* controlMapManager;

class InputManager {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual void _m7();
    virtual void _m8();
    virtual void _m9();
    virtual void _m10();
    virtual bool setPlayerControlMap(std::string name);

    char _pad[0x38 - sizeof(void*)];
    void* m_playerControlMap;
};

bool InputManager::setPlayerControlMap(std::string name)
{
    void* map = controlMapManager->getMap();
    m_playerControlMap = map;
    controlMapManager->setActiveMap(map);
    return m_playerControlMap != 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_InputManager_setPlayerControlMap_std_string (0x7f9d40)
