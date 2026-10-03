// FUNCTION: BF2 0x707960
namespace dice { namespace hfe {
class HeightmapEditable {
public:
    char _pad[0x108];
    bool field;
    void setModified(bool v);
};
void HeightmapEditable::setModified(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_HeightmapEditable_setModified (0x707960)
