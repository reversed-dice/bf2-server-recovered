// FUNCTION: BF2 0x6165e0
namespace dice { namespace hfe {
class GenericProjectileTemplate {
public:
    char _pad[0x29c];
    bool field;
    void setLocalPredictOnClient(bool v);
};
void GenericProjectileTemplate::setLocalPredictOnClient(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectileTemplate_setLocalPredictOnClient (0x6165e0)
