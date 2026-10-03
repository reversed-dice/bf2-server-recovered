// FUNCTION: BF2 0x7bae50
namespace dice { namespace hfe { namespace console {
struct IC {
    unsigned char _pad[0x258];
    void** m_cb;
    void setExitCallBack_0x7bae50(void* cb, void* arg);
};
void IC::setExitCallBack_0x7bae50(void* cb, void* arg) {
    m_cb[0] = cb;
    m_cb[1] = arg;
}
} } }
