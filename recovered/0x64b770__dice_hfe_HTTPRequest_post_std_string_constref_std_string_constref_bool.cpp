// FUNCTION: BF2 0x64b770
// HTTPRequest post 0x64b770 — guard + ghttpNewPost + PostAdd + PostA + cleanup
#include <string>
struct HTTPReq {
    char _pad0[8];
    char m_8;
    char m_9;
    char _padc[6];
    void* m_10;
    int m_18;
    long post(const std::string& url, const std::string& data, bool flag);
};
extern "C" void* ghttpNewPost();
extern "C" int ghttpPostAddStringA(void* req, const char* name, const char* val);
extern "C" int ghttpPostA(const char* url, void* req, int flags, void* cb, void* ctx);
extern "C" void ghttpCancelRequest(int id);
long HTTPReq::post(const std::string& url, const std::string& data, bool flag) {
    if (m_9 == 0) {
        m_10 = ghttpNewPost();
        if (m_10 != 0) {
            m_9 = 1;
            if (ghttpPostAddStringA(m_10, "BF2.HTTPRequest.Post", data.c_str()) == 1) {
                m_18 = ghttpPostA(url.c_str(), m_10, !flag, (void*)0x64bd00, this);
                if (m_18 >= 0) {
                    if (m_9 == 0) {
                        ghttpCancelRequest(m_18);
                        m_18 = -1;
                        if (m_10 != 0) {
                            m_10 = 0;
                            return 1;
                        }
                    }
                    return 1;
                }
            }
            m_10 = 0;
            m_9 = 0;
            return 0;
        }
    }
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_post_std_string_constref_std_string_constref_bool (0x64b770)
