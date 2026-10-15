// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5e5b60
#include <string>

namespace dice { namespace hfe {
namespace world { class IObject; class IPlayer; class GenericFireArm; }
template <class T> struct WeakPtrHandle {
    void release() { if (--refs == 0) delete this; }
    int refs;
    T* obj;
};
template <class T> class WeakPtr {
public:
    WeakPtr() : m_h(0) {}
    WeakPtr(const WeakPtr& o) : m_h(o.m_h) { if (m_h) ++m_h->refs; }
    WeakPtr& operator=(const WeakPtr& o)
    {
        if (o.m_h) ++o.m_h->refs;
        if (m_h) m_h->release();
        m_h = o.m_h;
        return *this;
    }
    ~WeakPtr() { if (m_h) m_h->release(); }
    void clear() { if (m_h) m_h->release(); m_h = 0; }
    T* get() const { return m_h ? m_h->obj : 0; }
    WeakPtrHandle<T>* m_h;
};
namespace io { struct IStream { int d; }; struct PlayerInput { int d; }; }
struct Mat4 { int d; };
struct Vec3 { int d; };
class IBase { public: virtual ~IBase(); int d; };
namespace world {
struct CollisionFaceInfo { int d; };
struct CullerObject { int d; };
struct FireRate { int d; };
struct ObjectLodType { int d; };
struct TemplateMessage { int d; };
struct UpdateFreqencyType { int d; };
struct WeaponState { int d; };
}
} }

namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IItemContainerObject;

class IObject {
public:
    virtual void addRef() = 0;
    virtual void getRef() = 0;
    virtual void release() = 0;
    virtual void* queryInterface(unsigned int iid) = 0;
};

class IPlayer {
public:
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual ::dice::hfe::WeakPtr<IObject> getWeakPtr() = 0;
};

class IItemContainerObject {
public:
    virtual void _pad0() = 0;
    virtual void _pad1() = 0;
    virtual void _pad2() = 0;
    virtual void _pad3() = 0;
    virtual void _pad4(GenericFireArm* a, unsigned int b) = 0;
    virtual void _pad5() = 0;
    virtual void _pad6() = 0;
    virtual void _pad7() = 0;
    virtual void _pad8() = 0;
    virtual void _pad9() = 0;
    virtual void drop(IPlayer* player, IObject* obj) = 0;
};

} } }

// dice::hfe::world::GenericFireArm
// Return types are not in the symbols: void below, fix the ones a call uses.
namespace dice { namespace hfe { namespace world { 
class GenericFireArm {
public:
    virtual void addRef();                                       // +0x0 slot 0
    virtual void getRef();                                       // +0x8 slot 1
    virtual void release();                                      // +0x10 slot 2
    virtual void queryInterface(unsigned int) const;             // +0x18 slot 3
    virtual void getClassID() const;                             // +0x20 slot 4
    virtual ~GenericFireArm();                                   // +0x28 slot 5-6 (complete, deleting)
    virtual void getWeakPtr();                                   // +0x38 slot 7
    virtual void init();                                         // +0x40 slot 8
    virtual void disableCachedObject();                          // +0x48 slot 9
    virtual void enableCachedObject();                           // +0x50 slot 10
    virtual void getObjectCacheID();                             // +0x58 slot 11
    virtual void setObjectCacheID(unsigned int);                 // +0x60 slot 12
    virtual void destroy(bool);                                  // +0x68 slot 13
    virtual void forceDestroy();                                 // +0x70 slot 14
    virtual void isObjectDestroyed();                            // +0x78 slot 15
    virtual void setObjectInDestroyList(bool);                   // +0x80 slot 16
    virtual void getObjectInDestroyList() const;                 // +0x88 slot 17
    virtual void setGridCullerObject(dice::hfe::world::CullerObject*); // +0x90 slot 18
    virtual void getGridCullerObject() const;                    // +0x98 slot 19
    virtual void setLatencyCullerObject(dice::hfe::world::CullerObject*); // +0xa0 slot 20
    virtual void getLatencyCullerObject() const;                 // +0xa8 slot 21
    virtual void setComponent(unsigned int, dice::hfe::IBase*);  // +0xb0 slot 22
    virtual void queryComponent(unsigned int, unsigned int);     // +0xb8 slot 23
    virtual void updateFlags(unsigned int, unsigned int);        // +0xc0 slot 24
    virtual void getName() const;                                // +0xc8 slot 25
    virtual void setName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&); // +0xd0 slot 26
    virtual void getAbsolutePosition() const;                    // +0xd8 slot 27
    virtual void setAbsolutePosition(dice::hfe::Vec3 const&);    // +0xe0 slot 28
    virtual void getAbsolutePositionSecondary() const;           // +0xe8 slot 29
    virtual void setAbsolutePositionSecondary(dice::hfe::Vec3 const&); // +0xf0 slot 30
    virtual void getRotationSecondary();                         // +0xf8 slot 31
    virtual void setRotationSecondary(dice::hfe::Vec3 const&);   // +0x100 slot 32
    virtual void getAbsoluteTransformation() const;              // +0x108 slot 33
    virtual void getInvAbsoluteTransformation() const;           // +0x110 slot 34
    virtual void setAbsoluteTransformation(dice::hfe::Mat4 const&); // +0x118 slot 35
    virtual void getVisualAbsoluteTransformation() const;        // +0x120 slot 36
    virtual void getVisualBoundingRadius() const;                // +0x128 slot 37
    virtual void getPhysicBoundingRadius() const;                // +0x130 slot 38
    virtual void getBoundingRadiusModifier() const;              // +0x138 slot 39
    virtual void getFullBoundingBox();                           // +0x140 slot 40
    virtual void getMineBoundingBox();                           // +0x148 slot 41
    virtual void handleVisualUpdate(float, float);               // +0x150 slot 42
    virtual void handleFrameUpdate(float);                       // +0x158 slot 43
    virtual void handleUpdate(float, unsigned int);              // +0x160 slot 44
    virtual void handleCollision(dice::hfe::world::IObject*, dice::hfe::Vec3 const&, dice::hfe::Vec3 const&, dice::hfe::Vec3 const&, int, int, dice::hfe::world::CollisionFaceInfo*, dice::hfe::world::CollisionFaceInfo*); // +0x168 slot 45
    virtual void updateGeometry();                               // +0x170 slot 46
    virtual void getUpdateFrequency() const;                     // +0x178 slot 47
    virtual void getUpdateFrequencyType() const;                 // +0x180 slot 48
    virtual void setUpdateFrequencyType(dice::hfe::world::UpdateFreqencyType); // +0x188 slot 49
    virtual void getGeometryPart() const;                        // +0x190 slot 50
    virtual void hasCollisionLod(int) const;                     // +0x198 slot 51
    virtual void getMaterial() const;                            // +0x1a0 slot 52
    virtual void SetActiveLod(dice::hfe::world::ObjectLodType);  // +0x1a8 slot 53
    virtual void getNetworkable() const;                         // +0x1b0 slot 54
    virtual void getDecalObject() const;                         // +0x1b8 slot 55
    virtual void getRelativePosition() const;                    // +0x1c0 slot 56
    virtual void setRelativePosition(dice::hfe::Vec3 const&);    // +0x1c8 slot 57
    virtual void getRelativeTransformation() const;              // +0x1d0 slot 58
    virtual void setRelativeTransformation(dice::hfe::Mat4 const&); // +0x1d8 slot 59
    virtual void getChild() const;                               // +0x1e0 slot 60
    virtual void addChild(dice::hfe::world::IObject*);           // +0x1e8 slot 61
    virtual void removeChild(dice::hfe::world::IObject*);        // +0x1f0 slot 62
    virtual void resetCachedRootParents();                       // +0x1f8 slot 63
    virtual void handlePlayerInput(dice::hfe::world::IPlayer*, dice::hfe::io::PlayerInput const&, float, unsigned int); // +0x200 slot 64
    virtual void handleMessage(dice::hfe::world::TemplateMessage, dice::hfe::world::IPlayer*, bool); // +0x208 slot 65
    virtual void getInputId() const;                             // +0x210 slot 66
    virtual void setInputId(char);                               // +0x218 slot 67
    virtual void getChildId() const;                             // +0x220 slot 68
    virtual void setChildId(char);                               // +0x228 slot 69
    virtual void getAlpha();                                     // +0x230 slot 70
    virtual void getLayer();                                     // +0x238 slot 71
    virtual void setLayer(unsigned char);                        // +0x240 slot 72
    virtual void getGroup();                                     // +0x248 slot 73
    virtual void setGroup(unsigned char);                        // +0x250 slot 74
    virtual void setIsOvergrowth(bool);                          // +0x258 slot 75
    virtual void getIsOvergrowth();                              // +0x260 slot 76
    virtual void setNotInAI(bool);                               // +0x268 slot 77
    virtual void getNotInAI() const;                             // +0x270 slot 78
    virtual void setLightSourceMask(int);                        // +0x278 slot 79
    virtual void getLightSourceMask() const;                     // +0x280 slot 80
    virtual void getDisableChildren();                           // +0x288 slot 81
    virtual void setDisableChildren(bool);                       // +0x290 slot 82
    virtual void getArmorInfo();                                 // +0x298 slot 83
    virtual void isCreatedByLocalPlayer() const;                 // +0x2a0 slot 84
    virtual void internal_assignNewObjectID();                   // +0x2a8 slot 85
    virtual void destroyObject();                                // +0x2b0 slot 86
    virtual void addSibling(dice::hfe::world::IObject*);         // +0x2b8 slot 87
    virtual void removeSibling(dice::hfe::world::IObject*);      // +0x2c0 slot 88
    virtual void setParent(dice::hfe::world::IObject*);          // +0x2c8 slot 89
    virtual void makeScript(dice::hfe::io::IStream*);            // +0x2d0 slot 90
    virtual void getLayerId() const;                             // +0x2d8 slot 91
    virtual void setLayerId(char);                               // +0x2e0 slot 92
    virtual void updateFlagsRecursive(unsigned int, unsigned int); // +0x2e8 slot 93
    virtual void initNetworkableComp();                          // +0x2f0 slot 94
    virtual void analyseNetworkableObject();                     // +0x2f8 slot 95
    virtual void setTriggerMessage(int);                         // +0x300 slot 96
    virtual void clearTriggerMessage(int);                       // +0x308 slot 97
    virtual void setActiveAnimationSystem(int);                  // +0x310 slot 98
    virtual void getActiveAnimationSystem();                     // +0x318 slot 99
    virtual void setAmmoInMag(unsigned int, int);                // +0x320 slot 100
    virtual void setFireRate(dice::hfe::world::FireRate);        // +0x328 slot 101
    virtual void setZoom(int);                                   // +0x330 slot 102
    virtual void setWeaponState(unsigned int);                   // +0x338 slot 103
    virtual void setStateSync(dice::hfe::world::WeaponState const&); // +0x340 slot 104
    virtual void getAbilityObjectList() const;                   // +0x348 slot 105
    virtual void getAbilityWorking() const;                      // +0x350 slot 106
    virtual void getAbility() const;                             // +0x358 slot 107
    virtual void handlePickup(dice::hfe::world::IPlayer*, dice::hfe::world::IObject*); // +0x360 slot 108
    virtual void handleDrop(dice::hfe::world::IPlayer*, dice::hfe::world::IObject*); // +0x368 slot 109
    virtual void setOwnerId(int);                                // +0x370 slot 110
    virtual void getOwnerId();                                   // +0x378 slot 111
    virtual void getPlayer();                                    // +0x380 slot 112
    virtual void setPlayer(dice::hfe::world::IPlayer*);          // +0x388 slot 113
    virtual void setItemType(int);                               // +0x390 slot 114
    virtual void getItemType() const;                            // +0x398 slot 115
    virtual void isReadyToUse();                                 // +0x3a0 slot 116
    virtual void enableItem();                                   // +0x3a8 slot 117
    virtual void disableItem();                                  // +0x3b0 slot 118
    virtual unsigned int getItemIndex();                                 // +0x3b8 slot 119
    virtual void setNetworkSafeItemIndex(int);                   // +0x3c0 slot 120
    virtual void getNetworkSafeItemIndex() const;                // +0x3c8 slot 121
    virtual void getRank() const;                                // +0x3d0 slot 122
    virtual void getKitPartIndex();                              // +0x3d8 slot 123
    virtual void getActiveWeaponGeometry() const;                // +0x3e0 slot 124
    virtual void getWeaponState() const;                         // +0x3e8 slot 125
    virtual void getZoom();                                      // +0x3f0 slot 126
    virtual void getMouseSpeedMod();                             // +0x3f8 slot 127
    virtual void getZoomFactor(unsigned int) const;              // +0x400 slot 128
    virtual void getFlags() const;                               // +0x408 slot 129
    virtual void setFlags(unsigned int);                         // +0x410 slot 130
    virtual void getHeat() const;                                // +0x418 slot 131
    virtual void setHeat(float);                                 // +0x420 slot 132
    virtual void getHasHeat() const;                             // +0x428 slot 133
    virtual void getUsesHeat() const;                            // +0x430 slot 134
    virtual void getReloadTimeLeftInPercent() const;             // +0x438 slot 135
    virtual void getTotalReloadTimeLeftInPercent() const;        // +0x440 slot 136
    virtual void getTotalAmmo() const;                           // +0x448 slot 137
    virtual void setCurrentNrOfMags(int);                        // +0x450 slot 138
    virtual void getAmmoInMag(unsigned int) const;               // +0x458 slot 139
    virtual void getAmmoType();                                  // +0x460 slot 140
    virtual void getMagSize();                                   // +0x468 slot 141
    virtual void getCurrentNrOfMags() const;                     // +0x470 slot 142
    virtual void getMag0Size();                                  // +0x478 slot 143
    virtual void needsReload() const;                            // +0x480 slot 144
    virtual void deviatePosition(dice::hfe::Vec3&, int);         // +0x488 slot 145
    virtual void setProjectileDeviationFixed(dice::hfe::Vec3&, int); // +0x490 slot 146
    virtual void updateDeviation(dice::hfe::io::PlayerInput, bool); // +0x498 slot 147
    virtual void getDeviation();                                 // +0x4a0 slot 148
    virtual void getMinDeviation();                              // +0x4a8 slot 149
    virtual void getMaxDeviation();                              // +0x4b0 slot 150
    virtual void getProjectileOrigin();                          // +0x4b8 slot 151
    virtual void isAnimationReadyToUse();                        // +0x4c0 slot 152
    virtual void getUseScope();                                  // +0x4c8 slot 153
    virtual void canBeRefilled();                                // +0x4d0 slot 154
    virtual void reloadAmmo(unsigned int, bool);                 // +0x4d8 slot 155
    virtual void reloadAmmoPercent(float, bool);                 // +0x4e0 slot 156
    virtual void isFiring() const;                               // +0x4e8 slot 157
    virtual void isReadyToUseFire();                             // +0x4f0 slot 158
    virtual void detonateProjectiles();                          // +0x4f8 slot 159
    virtual void isReloading() const;                            // +0x500 slot 160
    virtual void getTimeToNotAllowChange();                      // +0x508 slot 161
    virtual void getDevMod();                                    // +0x510 slot 162
    virtual void shouldReload() const;                           // +0x518 slot 163
    virtual void enableWeapon();                                 // +0x520 slot 164
    virtual void disableWeapon();                                // +0x528 slot 165
    virtual void getDisableOnFire();                             // +0x530 slot 166
    virtual void isSelectable() const;                           // +0x538 slot 167
    virtual void isUnselectable() const;                         // +0x540 slot 168
    virtual void getShowHudIcon() const;                         // +0x548 slot 169
    virtual void getWorksInWater() const;                        // +0x550 slot 170
    virtual void getTargetSystemType() const;                    // +0x558 slot 171
    virtual void getPrevCameraId() const;                        // +0x560 slot 172
    virtual void getChangeCameraId() const;                      // +0x568 slot 173
    virtual void getTargetObject() const;                        // +0x570 slot 174
    virtual void hasTargetLock() const;                          // +0x578 slot 175
    virtual void getLastFiredProjectileId() const;               // +0x580 slot 176
    virtual void setTargetDirection(dice::hfe::Vec3, dice::hfe::Vec3); // +0x588 slot 177
    virtual void getMaxTargetDistance() const;                   // +0x590 slot 178
    virtual void getMaxTargetAngle() const;                      // +0x598 slot 179
    virtual void hasMissileConnection() const;                   // +0x5a0 slot 180
    virtual void ownsProjectile(dice::hfe::world::IObject*) const; // +0x5a8 slot 181
    virtual void releaseProjectile(dice::hfe::world::IObject*);  // +0x5b0 slot 182
    virtual void projectileWasReset(dice::hfe::world::IObject*); // +0x5b8 slot 183
    virtual void addProjectileReference(dice::hfe::world::IObject*); // +0x5c0 slot 184
    virtual void isWaitingForMissileConfirm() const;             // +0x5c8 slot 185
    virtual void getHasRecoilForce();                            // +0x5d0 slot 186
    virtual void getRecoilForceLeftRight();                      // +0x5d8 slot 187
    virtual void getRecoilForceUp();                             // +0x5e0 slot 188
    virtual void getGoBackOnRecoil();                            // +0x5e8 slot 189
    virtual void getRecoilForceModifier() const;                 // +0x5f0 slot 190
    virtual void getRecoilVector() const;                        // +0x5f8 slot 191
    virtual void getPitchRecoil();                               // +0x600 slot 192
    virtual void getYawRecoil();                                 // +0x608 slot 193
    virtual void getFireInput() const;                           // +0x610 slot 194
    virtual void getAltFireInput() const;                        // +0x618 slot 195
    virtual void launchesProjectile(int) const;                  // +0x620 slot 196
    virtual void getReloadTime() const;                          // +0x628 slot 197
    virtual void getAutoReload() const;                          // +0x630 slot 198
    virtual void getFireRate();                                  // +0x638 slot 199
    virtual void getProjectileTemplate() const;                  // +0x640 slot 200
    virtual void addNetworkableParts();                          // +0x648 slot 201
    virtual void removeNetworkableParts();                       // +0x650 slot 202
    virtual void getVelocity() const;                            // +0x658 slot 203
    virtual void getMaxNrOfMags() const;                         // +0x660 slot 204
    virtual void getFireAtTick() const;                          // +0x668 slot 205
    virtual void setAIDeviation(float);                          // +0x670 slot 206
    virtual void getProjectile() const;                          // +0x678 slot 207
    virtual void getNoisy() const;                               // +0x680 slot 208
private:
    unsigned char _pad0[0x288];
    void* m_x;
    unsigned char _pad1[0x90];
    ::dice::hfe::WeakPtr< ::dice::hfe::world::IObject > m_player;
};
} } }

namespace dice { namespace hfe { namespace world {

void GenericFireArm::handlePickup(IPlayer* player, IObject* obj)
{
    if (player != 0)
        m_player = player->getWeakPtr();
    else
        m_player.clear();
    IItemContainerObject* c = 0;
    if (obj != 0)
        c = reinterpret_cast<IItemContainerObject*>(obj->queryInterface(IID_IItemContainerObject));
    c->_pad4(this, getItemIndex());
    if (m_x != 0)
        ((void (*)(void*))(*(void***)m_x)[30])(m_x);
}

} } }
