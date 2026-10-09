// FUNCTION: BF2 0x4f09f0
#include <string>

namespace dice {
namespace hfe {

namespace io {

class FileManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual bool exists(std::string const& path); // slot 7 (+0x38)
};

extern FileManager* fileManager;

} // namespace io

class DemoConfig {
public:
    int m_mode;             // +0x0
    int m_subMode;          // +0x4
    std::string m_path1;    // +0x8
    std::string m_path2;    // +0x10

    bool fail(std::string const& msg) const;
    bool sanityCheck() const;
};

bool DemoConfig::sanityCheck() const
{
    if ((unsigned int)(m_mode - 2) <= 1) {
        if (!io::fileManager->exists(m_path1)) {
            return fail(m_path1 + " does not exist");
        }
        if (!io::fileManager->exists(m_path2)) {
            return fail(m_path2 + " does not exist");
        }
    }

    if (m_mode == 0) {
        if (!io::fileManager->exists(m_path1)) {
            return fail(m_path1 + " does not exist");
        }
        if (m_subMode == 2) {
            if (!io::fileManager->exists(m_path2)) {
                return fail(m_path2 + " does not exist");
            }
        }
    }

    return true;
}

} // namespace hfe
} // namespace dice
