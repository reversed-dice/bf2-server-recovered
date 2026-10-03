// FUNCTION: BF2 0x7f3200
namespace dice { namespace hfe { namespace io {
struct FD {
    unsigned char _pad[0x10];
    int m_10;
    int setCooperativeMode_0x7f3200(int x);
};
int FD::setCooperativeMode_0x7f3200(int x) {
    m_10 = x;
    return 1;
}
} } }
