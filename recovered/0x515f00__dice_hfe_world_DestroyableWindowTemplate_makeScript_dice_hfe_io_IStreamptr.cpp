// FUNCTION: BF2 0x515f00
#include <ostream>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

// This target has ~basic_ostringstream fully INLINED (locale destructor, VTT
// and vtable rewrites, ios_base::~ios_base), which is what a plain local
// gives. The noinline-destructor holder used by the sibling ostringstream
// families would emit a CALL here instead.
struct OssHolder_515f00 {
    std::ostringstream ss;
    OssHolder_515f00() : ss(std::ios_base::out) {}
};

typedef unsigned int (*wfn_515f00)(void*, const char*, unsigned int);

// Declared and not defined: the target CALLs the base class version.
// Target callee: 0x0058cc70
bool baseMakeScript_515f00(void* self, void* stream);

struct T_515f00 {
    bool makeScript(void* stream);
};

bool T_515f00::makeScript(void* stream)
{
    if (!baseMakeScript_515f00(this, stream)) return false;
    OssHolder_515f00 h;
    {
        std::string str;
        {
            const char* base = reinterpret_cast<const char*>(&h);
            const char* pp = *reinterpret_cast<const char* const*>(base + 0x30);
            if (pp) {
                const char* eg = *reinterpret_cast<const char* const*>(base + 0x20);
                // Unnamed temporaries on purpose: two same-typed named locals
                // in sibling scopes share one stack slot, the target uses two.
                if (pp > eg) {
                    str.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), pp));
                } else {
                    str.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), eg));
                }
            } else {
                str.assign(*reinterpret_cast<const std::string*>(base + 0x50));
            }
        }
        wfn_515f00 f = *(wfn_515f00*)(*(char**)stream + 0x28);
        // The size is read twice: truncated for the argument, in full AFTER
        // the call for the comparison, which is where the target reads it.
        unsigned int n = f(stream, str.data(), (unsigned int)str.size());
        return n == str.size();
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_world_DestroyableWindowTemplate_makeScript_dice_hfe_io_IStreamptr (0x515f00)
