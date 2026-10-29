// FUNCTION: BF2 0x597e80
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

} } }

namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    struct TemplateInfo { };
    bool makeMemberScript(const TemplateInfo* info, io::IStream* stream);
};

class EffectBundleTemplate : public BundleTemplate {
public:
    bool makeMemberScript(const TemplateInfo* info, io::IStream* stream);
};

bool EffectBundleTemplate::makeMemberScript(const TemplateInfo* info, io::IStream* stream)
{
    std::ostringstream oss;
    if (!BundleTemplate::makeMemberScript(info, stream))
        return false;
    std::string s = oss.str();
    return stream->write(s.data(), s.size()) == s.size();
}

} } }
