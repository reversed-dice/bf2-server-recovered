// FUNCTION: BF2 0x456b50
#include <string>

namespace dice { namespace hfe { namespace io {
class ChecksumContext {
public:
    ChecksumContext();
    void runMiscChecksum();
    void const* getMiscHash() const;
private:
    char m_pad[0x40];
};
std::string hash_to_string(void const*);
}}}

namespace dice { namespace hfe {
class GameServer {
public:
    bool loadMiscFingerprints();
private:
    char m_prefix[0x208];
    std::string m_miscFingerprints;
};
}}

bool dice::hfe::GameServer::loadMiscFingerprints() {
    dice::hfe::io::ChecksumContext ctx;
    ctx.runMiscChecksum();
    std::string h = dice::hfe::io::hash_to_string(ctx.getMiscHash());
    m_miscFingerprints.assign(h);
    return true;
}
