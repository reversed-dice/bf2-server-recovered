// FUNCTION: BF2 0x7f16a0
namespace dice { namespace hfe { namespace io {

extern const int g_joystickDuplicates[];
extern const int g_keyboardDuplicates[];

class ControlMapManager {
public:
    bool allowDuplicate(int key, bool joystick);
};

bool ControlMapManager::allowDuplicate(int key, bool joystick)
{
    if (joystick) {
        for (const int* p = g_joystickDuplicates; *p != 0x40; ++p)
            if (key == *p)
                return true;
    } else {
        for (const int* p = g_keyboardDuplicates; *p != 0x4a; ++p)
            if (*p == key)
                return true;
    }
    return false;
}

} } }
