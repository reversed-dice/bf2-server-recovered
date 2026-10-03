// FUNCTION: BF2 0x778fa0
namespace dice { namespace hfe { namespace world {

extern void* materialManager;

class ProjectileVsTargetPredicator {
public:
    unsigned int m_unk_0x8;
    unsigned int m_unk_0xC;
    void* m_unk_0x10;
    void* m_unk_0x18;

    unsigned int predicateSurface_int();
};

unsigned int ProjectileVsTargetPredicator::predicateSurface_int()
{
    void* obj = (*(void* (*)(void*))((void**)(*(void**)materialManager))[9])(materialManager);
    return (*(unsigned char (*)(void*))((void**)(*(void**)obj))[31])(obj) ^ 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ProjectileVsTargetPredicator::predicateSurface_int (0x778fa0)