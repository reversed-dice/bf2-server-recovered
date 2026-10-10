// FUNCTION: BF2 0x59e0a0
namespace dice { namespace hfe { namespace world {

class MeshParticleSystemTemplate {
public:
    void* createObject() const;
};

void* MeshParticleSystemTemplate::createObject() const
{
    if (((unsigned int (*)(void*))(*(void***)this)[0x90 / 8])((void*)this) & 0x20)
        return 0;
    ((void (*)(void*, unsigned int, unsigned int))(*(void***)this)[0x98 / 8])((void*)this, 0x20, 0);
    ((void (*)(void*))(*(void***)this)[0xd8 / 8])((void*)this);
    return 0;
}

} } }
