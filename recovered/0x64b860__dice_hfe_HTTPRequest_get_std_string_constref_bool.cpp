// FUNCTION: BF2 0x64b860
// HTTPRequest get 0x64b860 — guard + ghttpGetA + cancel + return 1
#include <string>
struct HTTPReqG {
    char _pad0[8];
    char m_8;
    int m_c;
    void* m_10;
    char _pad14[4];
    int m_1c;
    int get(const std::string& url, bool flag);
};
extern "C" int ghttpGetA(const char* url, int flags, void* cb, void* ctx);
extern "C" void ghttpCancelRequest(int id);
int HTTPReqG::get(const std::string& url, bool flag) {
    if (m_8 == 0) {
        m_8 = 1;
        m_1c = 1;
        int r = ghttpGetA(url.c_str(), !flag, (void*)0x64bc00, this);
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
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_get_std_string_constref_bool (0x64b860)
