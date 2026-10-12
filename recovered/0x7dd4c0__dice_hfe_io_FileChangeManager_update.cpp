// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7dd4c0
#include <vector>
#include <string>
namespace dice { namespace hfe {

class System {
public:
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5();
    virtual double getTime();
};

extern System* g_system;

namespace io {

struct DirChange {
    std::string m_path;
    float m_time;
    unsigned int m_pad;
};

class FileChangeManager {
public:
    unsigned char _pad0[0x68];
    std::vector<DirChange> m_changes;
    float m_delay;
    unsigned char m_enabled;

    void update();
    void processChange(std::string const&);
};

void FileChangeManager::update() {
    if (!m_enabled)
        return;
    float now = (float)g_system->getTime();
    for (std::vector<DirChange>::iterator it = m_changes.begin(); it != m_changes.end(); ++it) {
        if (now > it->m_time + m_delay) {
            processChange(it->m_path);
            m_changes.erase(it);
            return;
        }
    }
}

} } }
