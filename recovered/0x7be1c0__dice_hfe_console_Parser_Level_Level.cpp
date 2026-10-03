// FUNCTION: BF2 0x7be1c0
#include <set>
namespace dice { namespace hfe {

// libstdc++ initialises a list head next-first; this target stores prev first.
struct ListHead_7be1c0 {
    void* next;
    void* prev;
    ListHead_7be1c0() { prev = this; next = this; }
};

// A real std::string member makes GCC hoist all three sentinel stores above the
// list-head init. Same instructions, wrong order; a plain pointer keeps them in
// declaration order, which is where the target has them.
struct EmptyStr_7be1c0 {
    void* p;
    EmptyStr_7be1c0() { p = (void*)0xf6c6e8; }
};

struct Level_7be1c0 {
    std::set<int> a;
    std::set<int> b;
    char _pad_l[0x8];
    ListHead_7be1c0 c;
    char _pad_s[0x8];
    EmptyStr_7be1c0 s1;
    EmptyStr_7be1c0 s2;
    EmptyStr_7be1c0 s3;
    Level_7be1c0();
};

extern void dice_hfe_console_Parser_Level_reset(Level_7be1c0*);

Level_7be1c0::Level_7be1c0() { dice_hfe_console_Parser_Level_reset(this); }
} }
// REVERSED_FUNCTION: dice_hfe_console_Parser_Level_Level (0x7be1c0)
