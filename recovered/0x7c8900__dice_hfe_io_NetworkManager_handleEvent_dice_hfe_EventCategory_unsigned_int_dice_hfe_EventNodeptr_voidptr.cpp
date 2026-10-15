// FUNCTION: BF2 0x7c8900
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {
class Settings {
public:
    virtual void vt00();
    virtual void vt01();
    virtual void vt02();
    virtual void vt03();
    virtual void vt04();
    virtual void vt05();
    virtual void vt06();
    virtual void vt07();
    virtual void vt08();
    virtual void vt09();
    virtual void vt10();
    virtual void vt11();
    virtual int* f12(std::string const& key, int* defVal);
};
extern Settings* settings;
struct EventNode { unsigned int m_type; };
class NetworkManager {
public:
    char _pad[0x118];
    int m_interpolationTime;
    int m_extrapolationTime;
};

extern "C" void f_0x7c8900(NetworkManager* self, int cat, unsigned int id, void* userData, EventNode* node)
{
    if (cat == 5) {
        if (id == 1) {
            int defE, defI;
            if (node->m_type == 0x3ed) {
                self->m_interpolationTime = *settings->f12(std::string("GSInterpolationTime"), (defI = 100, &defI));
            } else if (node->m_type == 0x3ee) {
                self->m_extrapolationTime = *settings->f12(std::string("GSExtrapolationTime"), (defE = 0x4b0, &defE));
            }
        }
    }
}
} }
