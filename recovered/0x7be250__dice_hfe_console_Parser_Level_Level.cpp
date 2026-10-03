// FUNCTION: BF2 0x7be250
#include <set>
namespace dice { namespace hfe {

// libstdc++ initialises a list head next-first; this target stores prev first.
struct ListHead_7be250 {
    void* next;
    void* prev;
    ListHead_7be250() { prev = this; next = this; }
};

// A real std::string member makes GCC hoist all three sentinel stores above the
// list-head init. Same instructions, wrong order; a plain pointer keeps them in
// declaration order, which is where the target has them.
struct EmptyStr_7be250 {
    void* p;
    EmptyStr_7be250() { p = (void*)0xf6c6e8; }
};

struct Level_7be250 {
    std::set<int> a;
    std::set<int> b;
    char _pad_l[0x8];
    ListHead_7be250 c;
    char _pad_s[0x8];
    EmptyStr_7be250 s1;
    EmptyStr_7be250 s2;
    EmptyStr_7be250 s3;
    Level_7be250();
};

extern void dice_hfe_console_Parser_Level_reset(Level_7be250*);

Level_7be250::Level_7be250() { dice_hfe_console_Parser_Level_reset(this); }
} }
// REVERSED_FUNCTION: dice_hfe_console_Parser_Level_Level (0x7be250)
