// FUNCTION: BF2 0x40c8e0
namespace dice { namespace hfe {
extern void func_408238(void*);
class DemoAvailableInfo {
public:
    char _pad[0x10];
    bool dirty;
    void setUrl(const void* url);
};
void DemoAvailableInfo::setUrl(const void* url) {
    func_408238((void*)this);
    dirty = true;
}
}
}

// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo_setUrl_std_string_constref (0x40c8e0)
