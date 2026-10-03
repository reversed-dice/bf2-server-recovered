// FUNCTION: BF2 0x64b720
namespace dice { namespace hfe {
struct HR {
    unsigned char _pad[0x8];
    char m_flag;
    unsigned char _pad2[0x1c - 0x9];
    int m_count;
    void onGetFileComplete_0x64b720();
};
void HR::onGetFileComplete_0x64b720() {
    m_count++;
    m_flag = 0;
}
} }
