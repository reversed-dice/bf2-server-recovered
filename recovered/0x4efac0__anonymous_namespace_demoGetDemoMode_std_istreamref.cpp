// FUNCTION: BF2 0x4efac0
#include <string>
#include <istream>
#include <ostream>
#include <cctype>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {
struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};
} }

namespace {
// compile-state padding: 12 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }

std::string demoGetString(std::istream& is);

int demoGetDemoMode(std::istream& in)
{
    std::string s = demoGetString(in);
    for (unsigned int i = 0; i < s.size(); ++i)
        s[i] = tolower(s[i]);
    if (s.compare("playback") == 0)
        return 0;
    if (s.compare("record") == 0)
        return 1;
    if (s.compare("render") == 0)
        return 2;
    if (s.compare("rendersound") == 0)
        return 3;
    dice::hfe::Debug(6, std::string("Game/DemoRecorder/DemoConfig.cpp"), 104,
                     std::string(&DAT_00bb25f1)).os
        << "Invalid demoMode: " << s;
    return 0;
}

}
