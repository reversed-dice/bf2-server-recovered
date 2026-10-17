// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x84acf0
#include <string>
namespace dice { namespace hfe { namespace io {

class Console {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void output(const std::string& str, const std::string& ignored, int a, int b, int c, int d, int e);
};
extern Console* mainConsole;
extern const std::string ignoredString_;

} } }

// compile-state padding: 12 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" void PB_issueConsoleCommand(const char* cmd)
{
    using namespace dice::hfe::io;
    std::string s(cmd);
    s += '\n';
    if (mainConsole)
        mainConsole->output(s, ignoredString_, 0, 0, 0, 0, 0);
}
