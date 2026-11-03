// FUNCTION: BF2 0x791e70
namespace dice { namespace hfe { namespace ai {
class InformationCourier {
public:
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5(); virtual void s6();
    virtual void* v38(int id);
    virtual void v40(int id);
};
extern InformationCourier* m_iaiInformationCourier;
class WeaponObject {
public:
    void deleteInformation(int index);
    char pad[0x20];
    int m_ids[1];   // +0x20
};
void WeaponObject::deleteInformation(int index)
{
    if (m_ids[index] != -1) {
        if (m_iaiInformationCourier->v38(m_ids[index]))
            m_iaiInformationCourier->v40(m_ids[index]);
        m_ids[index] = -1;
    }
}
}}}
