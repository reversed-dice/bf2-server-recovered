// FUNCTION: BF2 0x7e7a00
namespace dice { namespace hfe {
class ZipArchive {
public:
    char _pad[0x80];
    bool field;
    void setContentCheck(bool v);
};
void ZipArchive::setContentCheck(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ZipArchive_setContentCheck (0x7e7a00)
