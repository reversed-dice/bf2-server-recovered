// FUNCTION: BF2 0x840e90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>
#include <new>

extern "C" {
void fn_74af10(void*);
void fn_74af20(void*);
void* fn_846eb0();
void fn_846ef0(void*, int, char const*);
int fn_842e40(void*, unsigned int, unsigned int, std::string, int);
}

namespace BF2VoipServer {

class CBF2VoipServerInstance {
public:
    CBF2VoipServerInstance();
    char _pad[0x12a8];
};

class CBF2VoipServer {
public:
    int CreateInstance(unsigned int a, std::string s, int& out);

    unsigned char m_started;                            // 0x0
    char _pad0[0xf];                                    // 0x1
    char m_mutex[8];                                    // 0x10
    std::vector<CBF2VoipServerInstance*> m_instances;   // 0x18
    int m_count;                                        // 0x30
};

int CBF2VoipServer::CreateInstance(unsigned int a, std::string s, int& out)
{
    void* mutex = (char*)this + 0x10;
    fn_74af10(mutex);
    out = -1;
    int result;
    if (m_started == 0) {
        fn_846ef0(fn_846eb0(), 3, "Attempted to create an instance while server has not been started");
        result = -4;
    } else {
        CBF2VoipServerInstance* inst = 0;
        inst = new CBF2VoipServerInstance();
        int r = fn_842e40(inst, a, 0xd753, std::string(s), m_count);
        result = 1;
        if (r == 1) {
            m_instances.push_back(inst);
            out = m_count;
            m_count++;
        }
    }
    fn_74af20(mutex);
    return result;
}

}
