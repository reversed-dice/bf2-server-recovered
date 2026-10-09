// FUNCTION: BF2 0x6a88a0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>

namespace dice { namespace hfe { namespace io {
struct FileInfo
{
    std::string name;
};
class FileManager
{
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
    virtual void findFiles(std::string const&, bool, std::list<FileInfo>&);   // +0x68
};
extern FileManager* fileManager;
} } }

namespace dice { namespace hfe { namespace tool {
class ObjectTemplateAdm
{
public:
    std::string listTextures();
};
} } }

std::string dice::hfe::tool::ObjectTemplateAdm::listTextures()
{
    std::string res;
    std::list<dice::hfe::io::FileInfo> files;
    dice::hfe::io::fileManager->findFiles("texture/", true, files);
    for (std::list<dice::hfe::io::FileInfo>::iterator it = files.begin(); it != files.end(); ++it)
    {
        res.append(it->name);
        res.append("\n", 1);
    }
    return res;
}
// REVERSED_FUNCTION: dice_hfe_tool_ObjectTemplateAdm_listTextures (0x6a88a0)
