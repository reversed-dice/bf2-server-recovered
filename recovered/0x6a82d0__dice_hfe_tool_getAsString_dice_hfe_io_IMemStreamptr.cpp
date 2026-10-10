// FUNCTION: BF2 0x6a82d0
#include <string>

namespace dice { namespace hfe {
namespace io {

class IMemStream {
public:
    virtual void v0();
    // 0x70 / 8 = 14
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13();
    virtual unsigned int getLength(); // 0x70
    virtual char* getData(); // 0x78
};

}

namespace tool {

std::string getAsString(io::IMemStream* stream) {
    if (stream->getLength() == 0) {
        return "";
    }
    std::string s(stream->getData());
    s[stream->getLength()] = '\0';
    return s;
}

} } }
