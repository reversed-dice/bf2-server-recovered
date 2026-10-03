// FUNCTION: BF2 0x5106e0
namespace dice { namespace hfe { namespace world {
class ControlPoint {
public:
    unsigned char _pad[0x248];
    void* m_248;
    unsigned char _pad2[0x10];
    unsigned char m_260;
    int getAreaValueTeam1() const;
};
int ControlPoint::getAreaValueTeam1() const {
    if (!m_260) return 0;
    return *(int*)((char*)m_248 + 0x23c);
}
} } }
