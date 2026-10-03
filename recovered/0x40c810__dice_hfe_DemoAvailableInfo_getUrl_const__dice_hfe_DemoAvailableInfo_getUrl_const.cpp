// FUNCTION: BF2 0x40c810
namespace dice {
namespace hfe {

class DemoAvailableInfo {
public:
    const char* getUrl() const;
};

const char* DemoAvailableInfo::getUrl() const {
    return reinterpret_cast<const char*>(this);
}

} // namespace hfe
} // namespace dice

// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo_getUrl_const::dice_hfe_DemoAvailableInfo_getUrl_const (0x40c810)