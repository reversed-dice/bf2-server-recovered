// FUNCTION: BF2 0x706b80
#include <string>
// BF2_FLAGS: -fcrossjumping

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

namespace dice { namespace hfe { namespace world {

class HeightmapEditable {
public:
    char pad[0x10];
    std::string m_name;
    void* m_data;
    char pad2[0x8];
    int m_28;
    int m_2c;
    int m_30;
    bool saveHeightData(std::string const& name) const;
};

bool HeightmapEditable::saveHeightData(std::string const& name) const {
    if (m_data == 0)
        return false;
    std::string path(name);
    if (path.size() == 0)
        path.assign(m_name);
    dice::hfe::io::IFile* f = dice::hfe::io::fileManager->open(path, 0, 2, 0);
    if (f == 0)
        return false;
    int n = m_28 * m_2c * m_30;
    unsigned int len = (unsigned int)(n / 8);
    unsigned int w = f->write(m_data, len);
    f->close();
    return w == len;
}
} } }
