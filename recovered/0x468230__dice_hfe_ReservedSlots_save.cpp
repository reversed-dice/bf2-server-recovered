// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x468230
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {
class IFile {
public:
    virtual void v0();
    virtual void v1();
    virtual void close();
    virtual void v3();
    virtual void v4();
    virtual unsigned int write(void const* data, unsigned int len);
};
class FileManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual IFile* open(std::string const& name, int a, int b, int c);
};
extern FileManager* fileManager;
} } }

namespace dice { namespace hfe {

class ReservedSlots {
public:
    std::string m_name;
    void save(std::ostream& out);
    bool save();
};

bool ReservedSlots::save() {
    if (m_name.size() == 0)
        return false;
    dice::hfe::io::IFile* f = dice::hfe::io::fileManager->open(m_name, 0, 2, 0);
    if (!f)
        return false;
    std::stringstream ss;
    save(ss);
    std::string str = ss.str();
    unsigned int n = f->write(str.data(), (unsigned int)str.size());
    f->close();
    return n == str.size();
}

} }
