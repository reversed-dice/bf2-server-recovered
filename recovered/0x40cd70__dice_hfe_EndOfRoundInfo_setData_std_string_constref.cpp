// FUNCTION: BF2 0x40cd70
namespace dice { namespace hfe {
extern void func_408238(void*);
class EndOfRoundInfo {
public:
    char _pad[0xc];
    bool dirty;
    void setData(const void* data);
};
void EndOfRoundInfo::setData(const void* data) {
    func_408238((void*)this);
    dirty = true;
}
}
}

// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo_setData_std_string_constref (0x40cd70)
