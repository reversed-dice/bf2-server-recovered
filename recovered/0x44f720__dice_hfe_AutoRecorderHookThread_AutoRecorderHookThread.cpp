// FUNCTION: BF2 0x44f720
#include <string>
namespace dice { namespace hfe {

class Thread {
public:
    Thread();
    virtual ~Thread();
    char _pad8[0x8];
};

class AutoRecorderHookThread : public Thread {
public:
    AutoRecorderHookThread();
    virtual ~AutoRecorderHookThread();
    int m_state;
    std::string m_command;
    std::string m_arguments;
    void* m_process;
    void* m_output;
    bool m_done;
};

AutoRecorderHookThread::AutoRecorderHookThread()
    : m_state(0), m_process(0), m_output(0), m_done(false)
{
}

AutoRecorderHookThread::~AutoRecorderHookThread() {}

} }
