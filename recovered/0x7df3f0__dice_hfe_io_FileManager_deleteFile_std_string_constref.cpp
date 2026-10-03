// FUNCTION: BF2 0x7df3f0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace io {

class FileManager {
public:
    char  _pad0[0x40];
    void* m_fs;                     // +0x40
    bool deleteFile(const std::string& path);
};

typedef void (*ResolveFn)(void*, const std::string&, std::string*);
typedef bool (*DeleteFn)(void*, const std::string&);

bool FileManager::deleteFile(const std::string& path)
{
    std::string resolved;
    ((ResolveFn)(*(void***)this)[0x148 / 8])(this, path, &resolved);
    return ((DeleteFn)(*(void***)m_fs)[0x40 / 8])(m_fs, resolved);
}

} } }
