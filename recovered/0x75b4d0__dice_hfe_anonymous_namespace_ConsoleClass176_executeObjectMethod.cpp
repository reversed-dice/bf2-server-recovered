// FUNCTION: BF2 0x75b4d0
#include <string>
namespace dice { namespace hfe {
struct Snd {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual std::string setS(std::string const&);
};
extern "C" Snd* dice_hfe_g_bfSound;

long cb(long param_1) {
    if (*(int*)(param_1 + 0x30) != 1) return 0;
    std::string tmp(**(std::string**)(param_1 + 0x38));
    *(char*)(param_1 + 0x108) = 0;
    dice_hfe_g_bfSound->setS(tmp);
    return 0;
}
} }
