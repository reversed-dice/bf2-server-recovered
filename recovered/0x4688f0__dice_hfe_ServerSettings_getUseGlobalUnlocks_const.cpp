// FUNCTION: BF2 0x4688f0
// BF2_FLAGS: -fno-tree-dominator-opts
namespace dice { namespace hfe {
class ServerSettings {
public:
    bool getUseGlobalUnlocks() const;
};
bool ServerSettings::getUseGlobalUnlocks() const {
    const char* p = reinterpret_cast<const char*>(this);
    if (p[0x145]) return true;
    return p[0x18] && p[0x147];
}
} }
