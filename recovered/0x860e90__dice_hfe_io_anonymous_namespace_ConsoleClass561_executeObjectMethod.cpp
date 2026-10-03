// FUNCTION: BF2 0x860e90
#include <string>
namespace dice { namespace hfe {
struct FM {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual bool f8(std::string const&);
};
extern "C" FM* dice_hfe_io_fileManager;

long cb(long p) {
    long r = 0;
    if (*(int*)(p + 0x30) == 1) {
        std::string s(**(std::string**)(p + 0x38));
        r = p + 0x10a;
        *(char*)(p + 0x108) = 1;
        *(char*)(p + 0x10a) = dice_hfe_io_fileManager->f8(s);
    }
    return r;
}
} }
