// FUNCTION: BF2 0x642300
#include <string>

extern "C" {
    const char* dice_hfe_world_WindAffectorTypeNames[4];
    int dice_hfe_compareIgnoreCase_char_constptr_char_constptr(const char* a, const char* b);
    void _ZNSs6assignERKSs(void* this_ptr, const std::string* other);
}

namespace dice { namespace hfe { namespace world {

struct WindAffectorTemplate {
    char _pad[0x18];
    int m_type;        // offset 0x18
    std::string m_name; // offset 0x20
};

void setWindType_0x642300(WindAffectorTemplate* self, const std::string* arg) {
    int i = 0;
    const char** names = dice_hfe_world_WindAffectorTypeNames;
    do {
        if (dice_hfe_compareIgnoreCase_char_constptr_char_constptr(arg->c_str(), *names) == 0) {
            self->m_type = i;
            self->m_name.assign(*arg);
            return;
        }
        i++;
        names++;
    } while (i != 4);
}

} } }
