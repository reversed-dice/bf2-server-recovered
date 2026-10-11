// FUNCTION: BF2 0x675940
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <string>

namespace dice { namespace hfe {

class IPlayerUnlockInfo {
public:
    virtual void init();
};

class HTTPRequest {
public:
    virtual ~HTTPRequest();
    char _pad[0x20];
};

class KeyParser {
public:
    ~KeyParser();
};

struct Item {
    void* m_0;
    std::string m_8;
    std::string m_10;
};

class PlayerUnlockInfo : public IPlayerUnlockInfo, public HTTPRequest {
public:
    KeyParser m_keyParser;          // 0x30
    char _pad_0x38[0x10];           // 0x38 .. 0x48
    std::vector<Item> m_items;      // 0x48
    virtual ~PlayerUnlockInfo();
};

PlayerUnlockInfo::~PlayerUnlockInfo()
{
}

} }
