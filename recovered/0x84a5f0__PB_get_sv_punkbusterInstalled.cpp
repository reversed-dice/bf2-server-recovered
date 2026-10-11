// FUNCTION: BF2 0x84a5f0
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

bool PB_get_sv_punkbusterInstalled()
{
    char r = fileManager->v7(std::string("pb/pbsv.so"));
    return r != 0;
}
