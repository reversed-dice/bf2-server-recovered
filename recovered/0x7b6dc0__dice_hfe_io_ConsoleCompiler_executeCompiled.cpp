// FUNCTION: BF2 0x7b6dc0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    virtual void c0(); virtual void c1(); virtual void c2();
    virtual void run(const std::string& cmd, const std::string& ignored, int a, int b, int c, int d, int e);
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27();
    virtual void p28(); virtual void p29(); virtual void p30();
    virtual void print(const std::string& s);   // vtable slot 0x118
    static const std::string ignoredString_;
};

extern Console* mainConsole;
extern int  fn_7a3360(void*);
extern void fn_7a3310(void*, void*, unsigned int);
extern void fn_7a2d50(void*, int&);

void executeCompiled_0x7b6dc0(void* self) {
    char buf[1024];
    for (;;) {
        if (fn_7a3360(*(void**)self) == 0) break;
        char c;
        int len;
        fn_7a3310(*(void**)self, &c, 1);
        fn_7a2d50(*(void**)self, len);
        fn_7a3310(*(void**)self, buf, (unsigned int)len);
        buf[len] = 0;
        if (c == 'W') {
            mainConsole->print(std::string(buf));
        } else {
            mainConsole->run(std::string(buf), io::Console::ignoredString_, 0, 0, 0, 0, 0);
        }
    }
}

} } }
