// FUNCTION: BF2 0x6ffbf0
namespace dice { namespace hfe { namespace world {

class HeightmapCluster {
public:
    virtual void v000();
    virtual void v001();
    virtual void v002();
    virtual void v003();
    virtual void v004();
    virtual void v005();
    virtual void v006();
    virtual void v007();
    virtual void v008();
    virtual void v009();
    virtual void v010();
    virtual void v011();
    virtual void v012();
    virtual void v013();
    virtual void v014();
    virtual void v015();
    virtual void v016();
    virtual void v017();
    virtual void v018();
    virtual void v019();
    virtual void v020();
    virtual void v021();
    virtual void v022();
    virtual void v023();
    virtual void v024();
    virtual void v025();
    virtual void v026();
    virtual void v027();
    virtual void v028();
    virtual void v029();
    virtual void v030();
    virtual void v031();
    virtual void v032();
    virtual void v033();
    virtual void v034();
    virtual void v035();
    virtual void v036();
    virtual void v037();
    virtual void v038();
    virtual void v039();
    virtual void v040();
    virtual void v041();
    virtual void v042();
    void handleEvent(int cat, unsigned int arg, void* ev, void* data);
};

void HeightmapCluster::handleEvent(int cat, unsigned int arg, void* ev, void* data)
{
    (void)ev; (void)data;
    if (cat == 5 && arg == 7)
        v042();
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_handleEvent (0x6ffbf0)
