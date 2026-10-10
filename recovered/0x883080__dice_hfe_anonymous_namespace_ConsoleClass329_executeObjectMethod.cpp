// FUNCTION: BF2 0x883080
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    static BanList* getInstance();
    std::string consoleBanPlayerKey(const std::string& key);
    std::string consoleBanPlayerKey(const std::string& key, const std::string& reason);
};

struct ConsoleObject {
    char pad_00[0x30];
    int m_30;
    char pad_34[4];
    std::string* m_38;
    std::string* m_40;
    char pad_48[0xc0];
    bool m_108;
    char pad_109[7];
    std::string m_result;
};

} }

using namespace dice::hfe;

std::string* exec(ConsoleObject* self) {
    if (self->m_30 == 1) {
        std::string a(*self->m_38);
        self->m_108 = true;
        self->m_result.assign(BanList::getInstance()->consoleBanPlayerKey(a));
        return &self->m_result;
    }
    if (self->m_30 == 2) {
        std::string a(*self->m_38);
        std::string b(*self->m_40);
        self->m_108 = true;
        self->m_result.assign(BanList::getInstance()->consoleBanPlayerKey(a, b));
        return &self->m_result;
    }
    return 0;
}
