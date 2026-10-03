// FUNCTION: BF2 0x4e6080
// BF2_FLAGS: -fno-tree-dominator-opts
// Demo::openFileForWriting(const char*) at 0x4e6080
#include <string>

extern "C" {
    extern void* dice_hfe_io_fileManager;
}

class Demo {
public:
    void* openFileForWriting(const char* filename);
};

static inline void* force_load_fm() {
    return *(void* volatile*)&dice_hfe_io_fileManager;
}

void* Demo::openFileForWriting(const char* filename) {
    void* fm = *(void**)dice_hfe_io_fileManager;
    void* fn = *(void**)((char*)fm + 0x30);
    std::string key(filename);
    // Force reload of global after string constructor call
    void* fm2 = force_load_fm();
    void* result = ((void*(*)(void*, const std::string&, int, int, int))fn)(fm2, key, 0, 2, 0);
    return result;
}
