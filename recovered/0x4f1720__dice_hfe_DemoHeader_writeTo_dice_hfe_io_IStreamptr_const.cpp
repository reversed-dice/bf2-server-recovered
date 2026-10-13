// FUNCTION: BF2 0x4f1720
#include <string>
namespace dice { namespace hfe {
namespace io {
class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual int write(const void* data, int size);
};
}

static inline void writeInt(io::IStream* s, int v)
{
    s->write(&v, 4);
}

static inline void writeString(io::IStream* s, const std::string& str)
{
    int len = str.length();
    writeInt(s, len);
    s->write(str.c_str(), len);
}

class DemoHeader {
public:
    void writeTo(io::IStream* s) const;
    int m_version;
    std::string m_mapName;
    std::string m_gameMode;
    std::string m_modName;
    bool m_flag;
};

void DemoHeader::writeTo(io::IStream* s) const
{
    writeInt(s, m_version);
    writeString(s, m_mapName);
    writeString(s, m_gameMode);
    writeString(s, m_modName);
}

} }
