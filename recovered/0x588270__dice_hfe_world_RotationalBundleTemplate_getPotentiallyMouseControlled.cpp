// FUNCTION: BF2 0x588270
namespace dice { namespace hfe { namespace world {

class RotationalBundleTemplate {
public:
    char _pad[0x254];
    int m_val1; // +0x254
    int m_val2; // +0x258
    int m_val3; // +0x25c

    bool getPotentiallyMouseControlled();
};

bool RotationalBundleTemplate::getPotentiallyMouseControlled() {
    int v1 = m_val1;
    if ((unsigned int)(v1 - 1) <= 1) return true;
    int v2 = m_val2;
    if ((unsigned int)(v2 - 1) <= 1) return true;
    int v3 = m_val3;
    if ((unsigned int)(v3 - 1) <= 1) return true;

    if ((unsigned int)(v1 - 4) <= 1) return true;
    if ((unsigned int)(v2 - 4) <= 1) return true;
    if ((unsigned int)(v3 - 4) <= 1) return true;

    return false;
}

} } }
