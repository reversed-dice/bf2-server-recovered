// FUNCTION: BF2 0x46d7a0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class IServerQueryCache {
public:
    virtual ~IServerQueryCache();
};

struct QueryCell {
    std::string v[8];
};

class ServerQueryCache : public IServerQueryCache {
public:
    virtual ~ServerQueryCache();
private:
    std::string m_tokens[45];
    void* m_pad;
    QueryCell m_cells[64];
};

ServerQueryCache::~ServerQueryCache() {}

}}
