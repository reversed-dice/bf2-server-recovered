// FUNCTION: BF2 0x46d340
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <string.h>

namespace dice { namespace hfe {

class IServerQueryCache {
public:
    IServerQueryCache();
    virtual ~IServerQueryCache();
};

struct QueryCell {
    std::string v[8];
};

class ServerQueryCache : public IServerQueryCache {
public:
    ServerQueryCache();
    virtual ~ServerQueryCache();
private:
    std::string m_tokens[45];
    int m_pad;
    QueryCell m_cells[64];
    long* m_unk_0x1178;
};

class BuildNrUtil {
public:
    static const char* getBuildNrString();
};

std::string getOS();

ServerQueryCache::ServerQueryCache() : m_pad(0), m_unk_0x1178(0) {
    const char* buildNr = BuildNrUtil::getBuildNrString();
    m_tokens[1].assign(buildNr, strlen(buildNr));
    m_tokens[2].assign(getOS());
}

} }
