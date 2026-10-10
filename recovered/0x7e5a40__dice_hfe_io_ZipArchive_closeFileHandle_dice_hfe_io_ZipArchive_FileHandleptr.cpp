// FUNCTION: BF2 0x7e5a40
#include <list>

class FileHandle {
public:
    void* m_zipFile;
};

void unzCloseCurrentFile(void* file);

class ZipArchive {
public:
    char _pad0[0x60];
    std::list<FileHandle*>* m_handles;
    void closeFileHandle(FileHandle* handle);
};

void ZipArchive::closeFileHandle(FileHandle* handle) {
    if (!handle) return;
    unzCloseCurrentFile(handle->m_zipFile);
    m_handles->push_back(handle);
}
