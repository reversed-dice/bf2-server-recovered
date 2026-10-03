// FUNCTION: BF2 0x64bab0
// HTTPRequest getFile 0x64bab0 — guard + ghttpSaveExA 9-args + cancel + return 1
#include <string>
struct HTTPReqF {
    char _pad0[8];
    char m_8;
    int m_c;
    void* m_10;
    char _pad14[4];
    int m_1c;
    int getFile(const std::string& url, const std::string& file, unsigned char flag);
};
extern "C" int ghttpSaveExA(const char* url, const char* fname, const char* cat, long a, unsigned int b, int flags, void* cbP, void* cbG, void* ctx);
extern "C" void ghttpCancelRequest(int id);
int HTTPReqF::getFile(const std::string& url, const std::string& file, unsigned char flag) {
    if (m_8 == 0) {
        m_8 = 1;
        m_1c = 1;
        int r = ghttpSaveExA(url.c_str(), file.c_str(), (const char*)0xbb25f1, 0, 0, flag ^ 1, (void*)0x64b4d0, (void*)0x64bb50, this);
        m_c = r;
        if (r < 0) {
            m_8 = 0;
            return 0;
        }
        if (m_8 == 0) {
            ghttpCancelRequest(r);
            m_c = -1;
            return 1;
        }
        return 1;
    }
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_getFile_std_string_constref_std_string_constref_bool (0x64bab0)
