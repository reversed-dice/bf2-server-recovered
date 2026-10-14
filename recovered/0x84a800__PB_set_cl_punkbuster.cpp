// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x84a800
#include <string>

namespace dice { namespace hfe { namespace io {

class FileManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual char v7(const std::string& path);
};

}}}

extern dice::hfe::io::FileManager* fileManager;

namespace dice { namespace hfe {

class Settings {
public:
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
    virtual void setValue(const std::string& name, const bool& value);
};

extern Settings* settings;

}}

extern "C" void PB_set_cl_punkbuster(int a0)
{
    using namespace dice::hfe;
    if (fileManager->v7(std::string("pb/pbcl.dll"))) {
        settings->setValue(std::string("GSClPunkBuster"), (bool)(a0 != 0));
    }
}
