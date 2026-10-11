// FUNCTION: BF2 0x60a840
namespace dice { namespace hfe { namespace world {

class DefaultAnimationComp {
public:
    char _pad40[0x40];
    char* m_ptr;
    char m_flag;
    char _pad49[0xb];
    int m_count;

    void fireComplete(unsigned int);
    void pad0(unsigned int);
void pad1(unsigned int);
void pad2(unsigned int);
};

void DefaultAnimationComp::pad0(unsigned int) { if (m_count > 0 && m_ptr[0x18]) m_flag = 1; }
void DefaultAnimationComp::pad1(unsigned int) { if (m_count > 0 && m_ptr[0x18]) m_flag = 1; }
void DefaultAnimationComp::pad2(unsigned int) { if (m_count > 0 && m_ptr[0x18]) m_flag = 1; }

void DefaultAnimationComp::fireComplete(unsigned int) {
    if (m_count > 0 && m_ptr[0x18]) {
        m_flag = 1;
    }
}

} } }
