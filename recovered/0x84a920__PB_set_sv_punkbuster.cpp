// FUNCTION: BF2 0x84a920
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

class ServerSettings {
public:
    char pad[0x144];
    bool m_svPunkBuster;
};

extern ServerSettings* serverSettings;

}}

extern "C" void PB_set_sv_punkbuster(int a0)
{
    using namespace dice::hfe;
    if (fileManager->v7(std::string("pb/pbsv.so"))) {
        serverSettings->m_svPunkBuster = a0 != 0;
    }
}
