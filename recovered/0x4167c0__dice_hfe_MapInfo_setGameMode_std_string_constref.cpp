// FUNCTION: BF2 0x4167c0
namespace dice { namespace hfe {
extern void func_408238(void*);
class MapInfo {
public:
    char _pad[0x26];
    bool dirty;
    void setGameMode(const void* mode);
};
void MapInfo::setGameMode(const void* mode) {
    func_408238((void*)this);
    dirty = true;
}
}
}

// REVERSED_FUNCTION: dice_hfe_MapInfo_setGameMode_std_string_constref (0x4167c0)
