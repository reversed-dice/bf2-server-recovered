// BF2_FLAGS: -fno-strict-aliasing --param large-function-growth=0 --param large-function-insns=16450
// FUNCTION: BF2 0x8b69b0
// The listing inlines the std::string destructor of the ClassRegInfo member at
// entries 1 to 55 only (entry 0 and 56 to 72 call it, the name temporaries never
// inline it): the inliner ran out of function budget. push and the constructor
// are always_inline so that only that destructor meets the limit, and the limit
// is set in instructions (large-function-insns) to stop after the 55th.
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

extern void* create_ItemTemplate(unsigned int);   // ClassFactory<ItemTemplate>::create
extern void* create_ItemContainerTemplate(unsigned int);   // ClassFactory<ItemContainerTemplate>::create
extern void* create_DestroyableWindowsBundleTemplate(unsigned int);   // ClassFactory<DestroyableWindowsBundleTemplate>::create
extern void* create_DestroyableWindowTemplate(unsigned int);   // ClassFactory<DestroyableWindowTemplate>::create
extern void* create_DestroyableObjectTemplate(unsigned int);   // ClassFactory<DestroyableObjectTemplate>::create
extern void* create_KitTemplate(unsigned int);   // ClassFactory<KitTemplate>::create
extern void* create_MaskObjectTemplate(unsigned int);   // ClassFactory<MaskObjectTemplate>::create
extern void* create_AntennaObjectTemplate(unsigned int);   // ClassFactory<AntennaObjectTemplate>::create
extern void* create_AnimatedBundleTemplate(unsigned int);   // ClassFactory<AnimatedBundleTemplate>::create
extern void* create_SoldierTemplate(unsigned int);   // ClassFactory<SoldierTemplate>::create
extern void* create_GenericFireArmTemplate(unsigned int);   // ClassFactory<GenericFireArmTemplate>::create
extern void* create_ObjectSpawnerTemplate(unsigned int);   // ClassFactory<ObjectSpawnerTemplate>::create
extern void* create_PlayerControlObjectTemplate(unsigned int);   // ClassFactory<PlayerControlObjectTemplate>::create
extern void* create_ParachuteTemplate(unsigned int);   // ClassFactory<ParachuteTemplate>::create
extern void* create_KitPartTemplate(unsigned int);   // ClassFactory<KitPartTemplate>::create
extern void* create_SupplyDepotTemplate(unsigned int);   // ClassFactory<SupplyDepotTemplate>::create
extern void* create_SupplyObjectTemplate(unsigned int);   // ClassFactory<SupplyObjectTemplate>::create
extern void* create_ControlPointTemplate(unsigned int);   // ClassFactory<ControlPointTemplate>::create
extern void* create_ObstacleTemplate(unsigned int);   // ClassFactory<ObstacleTemplate>::create
extern void* create_AreaObjectTemplate(unsigned int);   // ClassFactory<AreaObjectTemplate>::create
extern void* create_TargetObjectTemplate(unsigned int);   // ClassFactory<TargetObjectTemplate>::create
extern void* create_LadderTemplate(unsigned int);   // ClassFactory<LadderTemplate>::create
extern void* create_LadderContainerTemplate(unsigned int);   // ClassFactory<LadderContainerTemplate>::create
extern void* create_ZiplineRopeTemplate(unsigned int);   // ClassFactory<ZiplineRopeTemplate>::create
extern void* create_ZiplineTemplate(unsigned int);   // ClassFactory<ZiplineTemplate>::create
extern void* create_ZiplineContainerTemplate(unsigned int);   // ClassFactory<ZiplineContainerTemplate>::create
extern void* create_GrapplingHookRopeTemplate(unsigned int);   // ClassFactory<GrapplingHookRopeTemplate>::create
extern void* create_RopeLinkTemplate(unsigned int);   // ClassFactory<RopeLinkTemplate>::create
extern void* create_HookLinkTemplate(unsigned int);   // ClassFactory<HookLinkTemplate>::create
extern void* create_GrapplingHookRopeContainerTemplate(unsigned int);   // ClassFactory<GrapplingHookRopeContainerTemplate>::create
extern void* create_RemoteControlledObjectTemplate(unsigned int);   // ClassFactory<RemoteControlledObjectTemplate>::create
extern void* create_TurnableRemoteControlledObjectTemplate(unsigned int);   // ClassFactory<TurnableRemoteControlledObjectTemplate>::create
extern void* create_TriggerTemplate(unsigned int);   // ClassFactory<TriggerTemplate>::create
extern void* create_AmbientEffectAreaTemplate(unsigned int);   // ClassFactory<AmbientEffectAreaTemplate>::create
extern void* create_TriggerableTemplate(unsigned int);   // ClassFactory<TriggerableTemplate>::create
extern void* create_TriggerableTargetTemplate(unsigned int);   // ClassFactory<TriggerableTargetTemplate>::create
extern void* create_UAVVehicleTemplate(unsigned int);   // ClassFactory<UAVVehicleTemplate>::create
extern void* create_DropVehicleTemplate(unsigned int);   // ClassFactory<DropVehicleTemplate>::create
extern void* create_SingleFireCompTemplate(unsigned int);   // ClassFactory<SingleFireCompTemplate>::create
extern void* create_MultiFireCompTemplate(unsigned int);   // ClassFactory<MultiFireCompTemplate>::create
extern void* create_DefaultAmmoCompTemplate(unsigned int);   // ClassFactory<DefaultAmmoCompTemplate>::create
extern void* create_ReplenishingAmmoCompTemplate(unsigned int);   // ClassFactory<ReplenishingAmmoCompTemplate>::create
extern void* create_DefaultZoomCompTemplate(unsigned int);   // ClassFactory<DefaultZoomCompTemplate>::create
extern void* create_ToggleCameraCompTemplate(unsigned int);   // ClassFactory<ToggleCameraCompTemplate>::create
extern void* create_DefaultSoundCompTemplate(unsigned int);   // ClassFactory<DefaultSoundCompTemplate>::create
extern void* create_SoldierBasedRecoilCompTemplate(unsigned int);   // ClassFactory<SoldierBasedRecoilCompTemplate>::create
extern void* create_WeaponBasedRecoilCompTemplate(unsigned int);   // ClassFactory<WeaponBasedRecoilCompTemplate>::create
extern void* create_SoldierDeviationCompTemplate(unsigned int);   // ClassFactory<SoldierDeviationCompTemplate>::create
extern void* create_SimpleDeviationCompTemplate(unsigned int);   // ClassFactory<SimpleDeviationCompTemplate>::create
extern void* create_TargetDeviationCompTemplate(unsigned int);   // ClassFactory<TargetDeviationCompTemplate>::create
extern void* create_DefaultAnimationCompTemplate(unsigned int);   // ClassFactory<DefaultAnimationCompTemplate>::create
extern void* create_ThrownAnimationCompTemplate(unsigned int);   // ClassFactory<ThrownAnimationCompTemplate>::create
extern void* create_MultiFireArmTargetCompTemplate(unsigned int);   // ClassFactory<MultiFireArmTargetCompTemplate>::create
extern void* create_LPTargetCompTemplate(unsigned int);   // ClassFactory<LPTargetCompTemplate>::create
extern void* create_SimpleTargetCompTemplate(unsigned int);   // ClassFactory<SimpleTargetCompTemplate>::create
extern void* create_LPFireCompTemplate(unsigned int);   // ClassFactory<LPFireCompTemplate>::create
extern void* create_SpawnObjectFireCompTemplate(unsigned int);   // ClassFactory<SpawnObjectFireCompTemplate>::create
extern void* create_ThrownFireCompTemplate(unsigned int);   // ClassFactory<ThrownFireCompTemplate>::create
extern void* create_ExplosivesFireCompTemplate(unsigned int);   // ClassFactory<ExplosivesFireCompTemplate>::create
extern void* create_GenericProjectileTemplate(unsigned int);   // ClassFactory<GenericProjectileTemplate>::create
extern void* create_DefaultCollisionCompTemplate(unsigned int);   // ClassFactory<DefaultCollisionCompTemplate>::create
extern void* create_ReplenishCollisionCompTemplate(unsigned int);   // ClassFactory<ReplenishCollisionCompTemplate>::create
extern void* create_ResurrectCollisionCompTemplate(unsigned int);   // ClassFactory<ResurrectCollisionCompTemplate>::create
extern void* create_StickyCollisionCompTemplate(unsigned int);   // ClassFactory<StickyCollisionCompTemplate>::create
extern void* create_DefaultDetonationCompTemplate(unsigned int);   // ClassFactory<DefaultDetonationCompTemplate>::create
extern void* create_ReplenishDetonationCompTemplate(unsigned int);   // ClassFactory<ReplenishDetonationCompTemplate>::create
extern void* create_DefaultProjectileSoundCompTemplate(unsigned int);   // ClassFactory<DefaultProjectileSoundCompTemplate>::create
extern void* create_DefaultPenetrateCompTemplate(unsigned int);   // ClassFactory<DefaultPenetrateCompTemplate>::create
extern void* create_DefaultRicochetCompTemplate(unsigned int);   // ClassFactory<DefaultRicochetCompTemplate>::create
extern void* create_SeekClosestTargetCompTemplate(unsigned int);   // ClassFactory<SeekClosestTargetCompTemplate>::create
extern void* create_FixedTargetCompTemplate(unsigned int);   // ClassFactory<FixedTargetCompTemplate>::create
extern void* create_DefaultFollowCompTemplate(unsigned int);   // ClassFactory<DefaultFollowCompTemplate>::create
extern void* create_PreDestinedFollowCompTemplate(unsigned int);   // ClassFactory<PreDestinedFollowCompTemplate>::create
extern const int TYPE_ItemTemplate;   // .rodata 0xc7d040 = 38034
extern const int TYPE_ItemContainerTemplate;   // .rodata 0xc7cf7c = 38041
extern const int TYPE_DestroyableWindowsBundleTemplate;   // .rodata 0xc7ce4c = 50396
extern const int TYPE_DestroyableWindowTemplate;   // .rodata 0xc7ce48 = 50397
extern const int TYPE_DestroyableObjectTemplate;   // .rodata 0xc7ce50 = 50384
extern const int TYPE_KitTemplate;   // .rodata 0xc7d038 = 38038
extern const int TYPE_MaskObjectTemplate;   // .rodata 0xc7d034 = 38039
extern const int TYPE_AntennaObjectTemplate;   // .rodata 0xc7cf70 = 38045
extern const int TYPE_AnimatedBundleTemplate;   // .rodata 0xc7cf74 = 38044
extern const int TYPE_SoldierTemplate;   // .rodata 0xc7d03c = 38035
extern const int TYPE_GenericFireArmTemplate;   // .rodata 0xc7d02c = 38099
extern const int TYPE_ObjectSpawnerTemplate;   // .rodata 0xc7cf68 = 38049
extern const int TYPE_PlayerControlObjectTemplate;   // .rodata 0xc7ce78 = 50370
extern const int TYPE_ParachuteTemplate;   // .rodata 0xc7ce10 = 50600
extern const int TYPE_KitPartTemplate;   // .rodata 0xc7cf60 = 38051
extern const int TYPE_SupplyDepotTemplate;   // .rodata 0xc7cf5c = 38052
extern const int TYPE_SupplyObjectTemplate;   // .rodata 0xc7ced4 = 40007
extern const int TYPE_ControlPointTemplate;   // .rodata 0xc7cf58 = 38053
extern const int TYPE_ObstacleTemplate;   // .rodata 0xc7cf30 = 38063
extern const int TYPE_AreaObjectTemplate;   // .rodata 0xc7cf20 = 38067
extern const int TYPE_TargetObjectTemplate;   // .rodata 0xc7cef4 = 38078
extern const int TYPE_LadderTemplate;   // .rodata 0xc7cef0 = 40000
extern const int TYPE_LadderContainerTemplate;   // .rodata 0xc7ced8 = 40006
extern const int TYPE_ZiplineRopeTemplate;   // .rodata 0xc7cec0 = 40012
extern const int TYPE_ZiplineTemplate;   // .rodata 0xc7cecc = 40009
extern const int TYPE_ZiplineContainerTemplate;   // .rodata 0xc7ced0 = 40008
extern const int TYPE_GrapplingHookRopeTemplate;   // .rodata 0xc7cebc = 40013
extern const int TYPE_RopeLinkTemplate;   // .rodata 0xc7ceb8 = 40014
extern const int TYPE_HookLinkTemplate;   // .rodata 0xc7ceac = 40017
extern const int TYPE_GrapplingHookRopeContainerTemplate;   // .rodata 0xc7ceb4 = 40015
extern const int TYPE_RemoteControlledObjectTemplate;   // .rodata 0xc7cee8 = 40002
extern const int TYPE_TurnableRemoteControlledObjectTemplate;   // .rodata 0xc7cee4 = 40003
extern const int TYPE_TriggerTemplate;   // .rodata 0xc7cedc = 40005
extern const int TYPE_AmbientEffectAreaTemplate;   // .rodata 0xc7cee0 = 40004
extern const int TYPE_TriggerableTemplate;   // .rodata 0xc7cec8 = 40010
extern const int TYPE_TriggerableTargetTemplate;   // .rodata 0xc7ceb0 = 40016
extern const int TYPE_UAVVehicleTemplate;   // .rodata 0xc7cea8 = 40019
extern const int TYPE_DropVehicleTemplate;   // .rodata 0xc7cea4 = 40020
extern const int TYPE_SingleFireCompTemplate;   // .rodata 0xc7d00c = 38107
extern const int TYPE_MultiFireCompTemplate;   // .rodata 0xc7d008 = 38108
extern const int TYPE_DefaultAmmoCompTemplate;   // .rodata 0xc7cff8 = 38112
extern const int TYPE_ReplenishingAmmoCompTemplate;   // .rodata 0xc7cfc4 = 38125
extern const int TYPE_DefaultZoomCompTemplate;   // .rodata 0xc7cfe4 = 38117
extern const int TYPE_ToggleCameraCompTemplate;   // .rodata 0xc7cfe0 = 38118
extern const int TYPE_DefaultSoundCompTemplate;   // .rodata 0xc7cfdc = 38119
extern const int TYPE_SoldierBasedRecoilCompTemplate;   // .rodata 0xc7cfec = 38115
extern const int TYPE_WeaponBasedRecoilCompTemplate;   // .rodata 0xc7cfe8 = 38116
extern const int TYPE_SoldierDeviationCompTemplate;   // .rodata 0xc7cff4 = 38113
extern const int TYPE_SimpleDeviationCompTemplate;   // .rodata 0xc7cff0 = 38114
extern const int TYPE_TargetDeviationCompTemplate;   // .rodata 0xc7cfc0 = 38126
extern const int TYPE_DefaultAnimationCompTemplate;   // .rodata 0xc7cfd8 = 38120
extern const int TYPE_ThrownAnimationCompTemplate;   // .rodata 0xc7cfd4 = 38121
extern const int TYPE_MultiFireArmTargetCompTemplate;   // .rodata 0xc7cfd0 = 38122
extern const int TYPE_LPTargetCompTemplate;   // .rodata 0xc7cfcc = 38123
extern const int TYPE_SimpleTargetCompTemplate;   // .rodata 0xc7cfc8 = 38124
extern const int TYPE_LPFireCompTemplate;   // .rodata 0xc7d004 = 38109
extern const int TYPE_SpawnObjectFireCompTemplate;   // .rodata 0xc7cfbc = 38127
extern const int TYPE_ThrownFireCompTemplate;   // .rodata 0xc7d000 = 38110
extern const int TYPE_ExplosivesFireCompTemplate;   // .rodata 0xc7cffc = 38111
extern const int TYPE_GenericProjectileTemplate;   // .rodata 0xc7cfb4 = 38201
extern const int TYPE_DefaultCollisionCompTemplate;   // .rodata 0xc7cfb0 = 38202
extern const int TYPE_ReplenishCollisionCompTemplate;   // .rodata 0xc7cf88 = 38212
extern const int TYPE_ResurrectCollisionCompTemplate;   // .rodata 0xc7cf84 = 38213
extern const int TYPE_StickyCollisionCompTemplate;   // .rodata 0xc7cf80 = 38214
extern const int TYPE_DefaultDetonationCompTemplate;   // .rodata 0xc7cfac = 38203
extern const int TYPE_ReplenishDetonationCompTemplate;   // .rodata 0xc7cfa8 = 38215
extern const int TYPE_DefaultProjectileSoundCompTemplate;   // .rodata 0xc7cfa4 = 38204
extern const int TYPE_DefaultPenetrateCompTemplate;   // .rodata 0xc7cf9c = 38206
extern const int TYPE_DefaultRicochetCompTemplate;   // .rodata 0xc7cfa0 = 38205
extern const int TYPE_SeekClosestTargetCompTemplate;   // .rodata 0xc7cf98 = 38208
extern const int TYPE_FixedTargetCompTemplate;   // .rodata 0xc7cf94 = 38209
extern const int TYPE_DefaultFollowCompTemplate;   // .rodata 0xc7cf90 = 38210
extern const int TYPE_PreDestinedFollowCompTemplate;   // .rodata 0xc7cf8c = 38211

typedef void* (*CreateFn)(unsigned int);

struct ClassRegInfo {
    int type;
    std::string name;
    CreateFn create;
    __attribute__((always_inline)) ClassRegInfo(int t, const std::string& n, CreateFn c)
        : type(t), name(n), create(c) {}
};

struct ClassList : public std::vector<ClassRegInfo> {
    __attribute__((always_inline)) void push(const ClassRegInfo& x)
    {
        if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage) {
            std::_Construct(this->_M_impl._M_finish, x);
            ++this->_M_impl._M_finish;
        } else
            _M_insert_aux(end(), x);
    }
};

class GameLogicObjTemplBFModule {
public:
    void getClassList(std::vector<ClassRegInfo>& out);
};

void GameLogicObjTemplBFModule::getClassList(std::vector<ClassRegInfo>& out)
{
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ItemTemplate, std::string("dice.hfe.world.ObjectTemplate.Item"), create_ItemTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ItemContainerTemplate, std::string("dice.hfe.world.ObjectTemplate.ItemContainer"), create_ItemContainerTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DestroyableWindowsBundleTemplate, std::string("dice.hfe.world.ObjectTemplate.DestroyableWindowsBundle"), create_DestroyableWindowsBundleTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DestroyableWindowTemplate, std::string("dice.hfe.world.ObjectTemplate.DestroyableWindow"), create_DestroyableWindowTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DestroyableObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.DestroyableObject"), create_DestroyableObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_KitTemplate, std::string("dice.hfe.world.ObjectTemplate.Kit"), create_KitTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_MaskObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.MaskObject"), create_MaskObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_AntennaObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.AntennaObject"), create_AntennaObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_AnimatedBundleTemplate, std::string("dice.hfe.world.ObjectTemplate.AnimatedBundle"), create_AnimatedBundleTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SoldierTemplate, std::string("dice.hfe.world.ObjectTemplate.Soldier"), create_SoldierTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_GenericFireArmTemplate, std::string("dice.hfe.world.ObjectTemplate.GenericFireArm"), create_GenericFireArmTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ObjectSpawnerTemplate, std::string("dice.hfe.world.ObjectTemplate.ObjectSpawner"), create_ObjectSpawnerTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_PlayerControlObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.PlayerControlObject"), create_PlayerControlObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ParachuteTemplate, std::string("dice.hfe.world.ObjectTemplate.Parachute"), create_ParachuteTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_KitPartTemplate, std::string("dice.hfe.world.ObjectTemplate.KitPart"), create_KitPartTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SupplyDepotTemplate, std::string("dice.hfe.world.ObjectTemplate.SupplyDepot"), create_SupplyDepotTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SupplyObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.SupplyObject"), create_SupplyObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ControlPointTemplate, std::string("dice.hfe.world.ObjectTemplate.ControlPoint"), create_ControlPointTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ObstacleTemplate, std::string("dice.hfe.world.ObjectTemplate.Obstacle"), create_ObstacleTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_AreaObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.AreaObject"), create_AreaObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_TargetObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.TargetObject"), create_TargetObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_LadderTemplate, std::string("dice.hfe.world.ObjectTemplate.Ladder"), create_LadderTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_LadderContainerTemplate, std::string("dice.hfe.world.ObjectTemplate.LadderContainer"), create_LadderContainerTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ZiplineRopeTemplate, std::string("dice.hfe.world.ObjectTemplate.ZiplineRope"), create_ZiplineRopeTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ZiplineTemplate, std::string("dice.hfe.world.ObjectTemplate.Zipline"), create_ZiplineTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ZiplineContainerTemplate, std::string("dice.hfe.world.ObjectTemplate.ZiplineContainer"), create_ZiplineContainerTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_GrapplingHookRopeTemplate, std::string("dice.hfe.world.ObjectTemplate.GrapplingHookRope"), create_GrapplingHookRopeTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_RopeLinkTemplate, std::string("dice.hfe.world.ObjectTemplate.RopeLink"), create_RopeLinkTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_HookLinkTemplate, std::string("dice.hfe.world.ObjectTemplate.HookLink"), create_HookLinkTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_GrapplingHookRopeContainerTemplate, std::string("dice.hfe.world.ObjectTemplate.GrapplingHookRopeContainer"), create_GrapplingHookRopeContainerTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_RemoteControlledObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.RemoteControlledObject"), create_RemoteControlledObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_TurnableRemoteControlledObjectTemplate, std::string("dice.hfe.world.ObjectTemplate.TurnableRemoteControlledObject"), create_TurnableRemoteControlledObjectTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_TriggerTemplate, std::string("dice.hfe.world.ObjectTemplate.Trigger"), create_TriggerTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_AmbientEffectAreaTemplate, std::string("dice.hfe.world.ObjectTemplate.AmbientEffectArea"), create_AmbientEffectAreaTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_TriggerableTemplate, std::string("dice.hfe.world.ObjectTemplate.Triggerable"), create_TriggerableTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_TriggerableTargetTemplate, std::string("dice.hfe.world.ObjectTemplate.TriggerableTarget"), create_TriggerableTargetTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_UAVVehicleTemplate, std::string("dice.hfe.world.ObjectTemplate.UAVVehicle"), create_UAVVehicleTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DropVehicleTemplate, std::string("dice.hfe.world.ObjectTemplate.DropVehicle"), create_DropVehicleTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SingleFireCompTemplate, std::string("dice.hfe.world.TemplateComponent.SingleFireComp"), create_SingleFireCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_MultiFireCompTemplate, std::string("dice.hfe.world.TemplateComponent.MultiFireComp"), create_MultiFireCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultAmmoCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultAmmoComp"), create_DefaultAmmoCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ReplenishingAmmoCompTemplate, std::string("dice.hfe.world.TemplateComponent.ReplenishingAmmoComp"), create_ReplenishingAmmoCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultZoomCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultZoomComp"), create_DefaultZoomCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ToggleCameraCompTemplate, std::string("dice.hfe.world.TemplateComponent.ToggleCameraComp"), create_ToggleCameraCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultSoundCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultSoundComp"), create_DefaultSoundCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SoldierBasedRecoilCompTemplate, std::string("dice.hfe.world.TemplateComponent.SoldierBasedRecoilComp"), create_SoldierBasedRecoilCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_WeaponBasedRecoilCompTemplate, std::string("dice.hfe.world.TemplateComponent.WeaponBasedRecoilComp"), create_WeaponBasedRecoilCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SoldierDeviationCompTemplate, std::string("dice.hfe.world.TemplateComponent.SoldierDeviationComp"), create_SoldierDeviationCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SimpleDeviationCompTemplate, std::string("dice.hfe.world.TemplateComponent.SimpleDeviationComp"), create_SimpleDeviationCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_TargetDeviationCompTemplate, std::string("dice.hfe.world.TemplateComponent.TargetDeviationComp"), create_TargetDeviationCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultAnimationCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultAnimationComp"), create_DefaultAnimationCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ThrownAnimationCompTemplate, std::string("dice.hfe.world.TemplateComponent.ThrownAnimationComp"), create_ThrownAnimationCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_MultiFireArmTargetCompTemplate, std::string("dice.hfe.world.TemplateComponent.MultiFireArmTargetComp"), create_MultiFireArmTargetCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_LPTargetCompTemplate, std::string("dice.hfe.world.TemplateComponent.LPTargetComp"), create_LPTargetCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SimpleTargetCompTemplate, std::string("dice.hfe.world.TemplateComponent.SimpleTargetComp"), create_SimpleTargetCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_LPFireCompTemplate, std::string("dice.hfe.world.TemplateComponent.LPFireComp"), create_LPFireCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SpawnObjectFireCompTemplate, std::string("dice.hfe.world.TemplateComponent.SpawnObjectFireComp"), create_SpawnObjectFireCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ThrownFireCompTemplate, std::string("dice.hfe.world.TemplateComponent.ThrownFireComp"), create_ThrownFireCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ExplosivesFireCompTemplate, std::string("dice.hfe.world.TemplateComponent.ExplosivesFireComp"), create_ExplosivesFireCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_GenericProjectileTemplate, std::string("dice.hfe.world.ObjectTemplate.GenericProjectile"), create_GenericProjectileTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultCollisionCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultCollisionComp"), create_DefaultCollisionCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ReplenishCollisionCompTemplate, std::string("dice.hfe.world.TemplateComponent.ReplenishCollisionComp"), create_ReplenishCollisionCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ResurrectCollisionCompTemplate, std::string("dice.hfe.world.TemplateComponent.ResurrectCollisionComp"), create_ResurrectCollisionCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_StickyCollisionCompTemplate, std::string("dice.hfe.world.TemplateComponent.StickyCollisionComp"), create_StickyCollisionCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultDetonationCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultDetonationComp"), create_DefaultDetonationCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_ReplenishDetonationCompTemplate, std::string("dice.hfe.world.TemplateComponent.ReplenishDetonationComp"), create_ReplenishDetonationCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultProjectileSoundCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultProjSoundComp"), create_DefaultProjectileSoundCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultPenetrateCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultPenetrateComp"), create_DefaultPenetrateCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultRicochetCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultRicochetComp"), create_DefaultRicochetCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_SeekClosestTargetCompTemplate, std::string("dice.hfe.world.TemplateComponent.SeekClosestTargetComp"), create_SeekClosestTargetCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_FixedTargetCompTemplate, std::string("dice.hfe.world.TemplateComponent.FixedTargetComp"), create_FixedTargetCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_DefaultFollowCompTemplate, std::string("dice.hfe.world.TemplateComponent.DefaultFollowComp"), create_DefaultFollowCompTemplate));
    static_cast<ClassList&>(out).push(ClassRegInfo(TYPE_PreDestinedFollowCompTemplate, std::string("dice.hfe.world.TemplateComponent.PreDestinedFollowComp"), create_PreDestinedFollowCompTemplate));
}

} } }
