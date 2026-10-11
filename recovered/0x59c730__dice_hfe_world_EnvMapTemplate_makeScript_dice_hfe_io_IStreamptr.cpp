// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x59c730
#include <ostream>
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {
class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};
} } }

namespace dice { namespace hfe { namespace world {

bool baseMakeScript_59c730(void* self, dice::hfe::io::IStream* stream);

typedef unsigned int (*wfn_t)(void*, const char*, unsigned int);

class EnvMapTemplate {
public:
    bool getIsStatic() const;
    float getSize();
    bool makeScript(dice::hfe::io::IStream* stream);
};

bool EnvMapTemplate::makeScript(dice::hfe::io::IStream* stream) {
    if (!baseMakeScript_59c730(this, stream)) return false;
    std::ostringstream ss(std::ios_base::out);
    ss << "ObjectTemplate.isStatic " << getIsStatic() << std::endl;
    ss << "ObjectTemplate.size " << (double)getSize() << std::endl;
    std::string str = ss.str();
    wfn_t f = *(wfn_t*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

} } }
