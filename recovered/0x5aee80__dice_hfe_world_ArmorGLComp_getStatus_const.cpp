// FUNCTION: BF2 0x5aee80
namespace dice { namespace hfe { namespace world {

class ArmorGLCompTemplate {
public:
    char _pad[0x164];
    float m_wreckHealth;
};

class ArmorGLComp {
public:
    char _pad[0x10];
    ArmorGLCompTemplate* m_template;
    char _pad2[0x20 - 0x18];
    float m_health;

    int getStatus() const;
};

int ArmorGLComp::getStatus() const
{
    if (__builtin_expect(m_health > 0.0f, 0)) {
        return 0;
    }
    unsigned char b = !(m_health > -m_template->m_wreckHealth);
    return (int)b + 1;
}

} } }
