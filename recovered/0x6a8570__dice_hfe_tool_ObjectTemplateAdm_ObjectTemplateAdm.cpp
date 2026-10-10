// FUNCTION: BF2 0x6a8570
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace tool {

extern const char* DefaultLayer;

class ObjectTemplateAdm {
public:
    ObjectTemplateAdm();

    struct Entry {
        std::string s;
        bool b;
        Entry() : b(false) {}
        Entry(const std::string& str) : s(str), b(false) {}
    };

    bool _a;
    bool _b;
    Entry arr[128];
    void* m_stream;
};

ObjectTemplateAdm::ObjectTemplateAdm() : _a(false), _b(false), m_stream(0) {
    arr[0] = Entry(std::string(DefaultLayer));
}

} } }
