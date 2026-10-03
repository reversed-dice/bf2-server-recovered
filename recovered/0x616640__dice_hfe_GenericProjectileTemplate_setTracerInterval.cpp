// FUNCTION: BF2 0x616640
namespace dice { namespace hfe {
class GenericProjectileTemplate {
public:
    char _pad[0x260];
    int field;
    void setTracerInterval(int v);
};
void GenericProjectileTemplate::setTracerInterval(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectileTemplate_setTracerInterval (0x616640)
