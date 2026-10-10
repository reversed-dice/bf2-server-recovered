// FUNCTION: BF2 0x6ba600
namespace dice { namespace anim {

class RagDollTemplate {
public:
    char _pad[0x118];
    float m_unk118;
};

class RagDoll {
public:
    char _pad[0x20];
    RagDollTemplate* m_template;
    char _pad2[0x50 - 0x28];
    char m_particleCollision[8];
    char m_hasCollision;
    char _pad3[3];
    float m_collisionTime;

    void* getParticleCollision();
};

void* RagDoll::getParticleCollision() {
    if (m_template->m_unk118 >= 0.0f) {
        if (m_hasCollision) {
            m_hasCollision = 0;
            m_collisionTime = 0.0f;
            return m_particleCollision;
        }
    }
    return 0;
}

} }
