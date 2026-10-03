// FUNCTION: BF2 0x6cf340
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <sstream>
#include <string>

// dice_anim_MessageTrigger_makeScript_dice_hfe_io_IStreamptr (0x6cf340)

typedef unsigned int (*wfn_6cf340)(void*, const char*, unsigned int);
void baseMakeScript_6cf340(void* self, void* stream);

struct T_6cf340 {
    char _pad0x44[0x44];
    int m_0x44;
    void makeScript(void* stream);
};

void T_6cf340::makeScript(void* stream)
{
    baseMakeScript_6cf340(this, stream);
    std::ostringstream ss(std::ios_base::out);
    std::ostream& o = ss;
    o << "animationTrigger.message " << m_0x44 << std::endl;
    std::string str = ss.str();
    wfn_6cf340 f = *(wfn_6cf340*)(*(char**)stream + 0x28);
    f(stream, str.data(), (unsigned int)str.size());
}

// REVERSED_FUNCTION: dice_anim_MessageTrigger_makeScript_dice_hfe_io_IStreamptr (0x6cf340)
