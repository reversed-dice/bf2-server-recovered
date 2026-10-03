// FUNCTION: BF2 0x44f7a0
#include <string>

namespace dice { namespace hfe {

// Declared, not defined: the target calls this dtor (0x0074b070).
struct HookThreadBase { virtual ~HookThreadBase(); };

class AutoRecorderHookThread : public HookThreadBase {
public:
    char        _pad[0x10];   // 0x08 .. 0x18
    std::string m_first;      // 0x18
    std::string m_second;     // 0x20
    virtual ~AutoRecorderHookThread();
};

AutoRecorderHookThread::~AutoRecorderHookThread() {}

} }
// REVERSED_FUNCTION: dice_hfe_AutoRecorderHookThread_dtor_AutoRecorderHookThread (0x44f7a0)
