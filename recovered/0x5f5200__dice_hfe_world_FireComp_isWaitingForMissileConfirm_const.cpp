// FUNCTION: BF2 0x5f5200
namespace dice { namespace hfe { namespace world {
extern unsigned int fn_74aaa0();
struct GO { unsigned int m_0; };
extern GO* g_obj_1091500;
struct FC {
    unsigned char _pad[0x158];
    unsigned int m_158;
    bool isWaitingForMissileConfirm_0x5f5200() const;
};
bool FC::isWaitingForMissileConfirm_0x5f5200() const {
    return m_158 + g_obj_1091500->m_0 > fn_74aaa0();
}
} } }
