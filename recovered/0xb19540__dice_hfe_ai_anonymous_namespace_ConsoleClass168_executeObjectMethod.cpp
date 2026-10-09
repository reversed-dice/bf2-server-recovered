// FUNCTION: BF2 0xb19540
#include <string>
namespace dice { namespace hfe { namespace ai {
extern void* g_010adf60;
extern void* fn_h_00795db0(void* self);
typedef int (*vfn_18)(void*);
class AITemplateUnit_x {
public:
    std::string const& getEquipmentTypeName() const;
    void setEquipmentTypeName(std::string const& s);
};
void* cb_b19540(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* r = 0;
        if (g_010adf60 != 0) {
            void* q = fn_h_00795db0(g_010adf60);
            if (q != 0) {
                if ((*(vfn_18*)((char*)*(void**)q + 0x18))(q) == 0x5)
                    r = q;
            }
        }
        ((std::string*)((char*)p + 0x110))->assign(((AITemplateUnit_x*)r)->getEquipmentTypeName());
        return (std::string*)((char*)p + 0x110);
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    std::string s(*(std::string const*)*(void**)((char*)p + 0x38));
    *(char*)((char*)p + 0x108) = 0;
    void* r = 0;
    if (g_010adf60 != 0) {
        void* q = fn_h_00795db0(g_010adf60);
        if (q != 0) {
            if ((*(vfn_18*)((char*)*(void**)q + 0x18))(q) == 0x5)
                r = q;
        }
    }
    ((AITemplateUnit_x*)r)->setEquipmentTypeName(s);
    return 0;
}
} } }
