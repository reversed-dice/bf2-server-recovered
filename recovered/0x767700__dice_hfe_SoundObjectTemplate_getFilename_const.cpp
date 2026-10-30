// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x767700
#include <sstream>
#include <string>

namespace dice { namespace hfe {

class ISoundTemplate {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual char** getFilenames(int* count) const;
};

class SoundObjectTemplate {
public:
    unsigned char _pad0[0x78];
    ISoundTemplate* m_sound;
    std::string getFilename() const;
};

std::string SoundObjectTemplate::getFilename() const
{
    std::stringstream ss;
    int count = 0;
    char** fileNames = m_sound->getFilenames(&count);
    for (int i = 0; i < count; ++i) {
        if (fileNames[i] != 0)
            ss << fileNames[i];
        if (i != count - 1)
            ss << ',';
    }

    return ss.str();
}

} }
