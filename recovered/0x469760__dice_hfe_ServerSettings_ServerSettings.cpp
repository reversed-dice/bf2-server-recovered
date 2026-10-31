// FUNCTION: BF2 0x469760
#include <string>

namespace dice { namespace hfe {

class ServerSettings {
public:
    std::string m_s00;
    std::string m_s08;
    std::string m_s10;
    bool m_b18;
    char _p19[3];
    int m_1c;
    int m_20;
    char _p24[4];
    std::string m_s28;
    std::string m_s30;
    int m_38;
    bool m_b3c;
    char _p3d[3];
    int m_40;
    int m_44;
    bool m_b48;
    bool m_b49;
    char _p4a[2];
    int m_4c;
    bool m_b50;
    char _p51[7];
    std::string m_s58;
    int m_60;
    int m_64;
    int m_68;
    char _p6c[4];
    std::string m_s70;
    bool m_b78;
    bool m_b79;
    bool m_b7a;
    bool m_b7b;
    int m_7c;
    int m_80;
    float m_84;
    int m_88;
    int m_8c;
    float m_90;
    float m_94;
    int m_98;
    int m_9c;
    int m_a0;
    int m_a4;
    int m_a8;
    int m_ac;
    int m_b0;
    int m_b4;
    char _pb8[8];
    bool m_bc0;
    char _pc1[3];
    int m_c4;
    bool m_bc8;
    char _pc9[7];
    std::string m_sd0;
    int m_d8;
    bool m_bdc;
    bool m_bdd;
    char _pde[2];
    std::string m_se0;
    std::string m_se8;
    std::string m_sf0;
    int m_f8;
    char _pfc[4];
    std::string m_s100;
    float m_108;
    bool m_b10c;
    char _p10d[3];
    float m_110;
    float m_114;
    int m_118;
    float m_11c;
    std::string m_s120;
    std::string m_s128;
    std::string m_s130;
    int m_138;
    int m_13c;
    int m_140;
    bool m_b144;
    bool m_b145;
    bool m_b146;
    bool m_b147;
    int m_148;
    int m_14c;
    bool m_b150;
    bool m_b151;

    std::string setMaxPlayers(int n);
    ServerSettings();
};

ServerSettings::ServerSettings()
    : m_s00(), m_s08(), m_s10(), m_b18(false), m_1c(0), m_20(5),
      m_s28(), m_s30(), m_38(0x40b7), m_b3c(true), m_40(0x3c), m_44(2),
      m_b48(true), m_b49(true), m_4c(3), m_b50(false), m_s58(),
      m_60(0xd755), m_64(0xd753), m_68(0xd754), m_s70(""),
      m_b78(true), m_b79(true), m_b7a(true), m_b7b(true),
      m_7c(0), m_80(2), m_84(5.0f), m_88(2), m_8c(0xa), m_90(5.0f),
      m_94(10.0f), m_98(100), m_9c(3), m_a0(0), m_a4(0), m_a8(100),
      m_ac(100), m_b0(100), m_b4(100), m_bc0(false), m_c4(3), m_bc8(true),
      m_sd0(), m_d8(0x74cc), m_bdc(false), m_bdd(false),
      m_se0(), m_se8(), m_sf0(), m_f8(1), m_s100(), m_108(30.0f),
      m_b10c(false), m_110(100.0f), m_114(50.0f), m_118(0x10), m_11c(50.0f),
      m_s120(), m_s128(), m_s130(), m_138(6), m_13c(6), m_140(0x1e),
      m_b144(false), m_b145(false), m_b146(true), m_b147(true),
      m_148(0xf), m_14c(0), m_b150(false), m_b151(false)
{
    setMaxPlayers(0x10);
}

} }
