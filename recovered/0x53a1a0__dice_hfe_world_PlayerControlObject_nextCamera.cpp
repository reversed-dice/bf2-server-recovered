// BF2_FLAGS: -fno-if-conversion
// FUNCTION: BF2 0x53a1a0
#include <string>

namespace dice { namespace hfe {
class IBase;
class Vec3;
class Mat4;
namespace io {
class PlayerInput;
class IStream;
}
namespace world {
class CullerObject;
class CollisionFaceInfo;
class IPlayer;
typedef int UpdateFreqencyType;
typedef int ObjectLodType;
typedef int TemplateMessage;
}
} }

namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    IObject* m_child;         // +0x8
    char pad_0x10[0x40];      // 0x10 .. 0x4f
    IObject* m_next;          // +0x50
};

struct CountPair {
    int m_count;
    int m_extra;
};
union Count64 {
    long m_asLong;
    CountPair m_pair;
};
struct CameraSub {
    char pad_0x0[0x28];
    Count64 m_cnt;             // +0x28 (8 bytes)
};

extern unsigned int IID_IPlayerControlObject;

class IPlayerControlObject {
public:
    virtual void addRef();                                       // +0x0 slot 0
    virtual void getRef();                                       // +0x8 slot 1
    virtual void release();                                      // +0x10 slot 2
    virtual void queryInterface(unsigned int) const;             // +0x18 slot 3
    virtual void getOccupingPlayer() const;                      // +0x20 slot 4
    virtual void getOccupingObject() const;                      // +0x28 slot 5
    virtual void isOccupied() const;                             // +0x30 slot 6
    virtual void enter(dice::hfe::world::IPlayer*);              // +0x38 slot 7
    virtual void exit();                                         // +0x40 slot 8
    virtual void exitPlayer();                                   // +0x48 slot 9
    virtual void onEnter(dice::hfe::world::IObject*);            // +0x50 slot 10
    virtual void onExit();                                       // +0x58 slot 11
    virtual void getPcoId() const;                               // +0x60 slot 12
    virtual void setPcoId(int);                                  // +0x68 slot 13
    virtual void getCameras();                                   // +0x70 slot 14
    virtual void getOwnCameras();                                // +0x78 slot 15
    virtual void nextCamera();                                   // +0x80 slot 16
};

class PlayerControlObject {
public:
    virtual void addRef();                                       // +0x0 slot 0
    virtual void getRef();                                       // +0x8 slot 1
    virtual void release();                                      // +0x10 slot 2
    virtual void queryInterface(unsigned int) const;             // +0x18 slot 3
    virtual void getClassID() const;                             // +0x20 slot 4
    virtual ~PlayerControlObject();                              // +0x28 slot 5-6 (complete, deleting)
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
    virtual void setActiveAnimationSystem(int);                  // +0x300 slot 96
    virtual void getActiveAnimationSystem();                     // +0x308 slot 97
    virtual void getOccupingPlayer() const;                      // +0x310 slot 98
    virtual void getOccupingObject() const;                      // +0x318 slot 99
    virtual void isOccupied() const;                             // +0x320 slot 100
    virtual void enter(dice::hfe::world::IPlayer*);              // +0x328 slot 101
    virtual void exit();                                         // +0x330 slot 102
    virtual void exitPlayer();                                   // +0x338 slot 103
    virtual void onEnter(dice::hfe::world::IObject*);            // +0x340 slot 104
    virtual void onExit();                                       // +0x348 slot 105
    virtual void getPcoId() const;                               // +0x350 slot 106
    virtual void setPcoId(int);                                  // +0x358 slot 107
    virtual void getCameras();                                   // +0x360 slot 108
    virtual void getOwnCameras();                                // +0x368 slot 109
    virtual void nextCamera();                                   // +0x370 slot 110
    virtual void getActiveCamera();                              // +0x378 slot 111
    virtual void setActiveCamera(int);                           // +0x380 slot 112
    // members (offsets read from the target listing)
    char pad_0x8[0x268];   // 0x8 .. 0x26f
    IObject* m_node;       // +0x270
    CameraSub m_sub;       // +0x278 (size 0x30)
    int m_index;           // +0x2a8
};

void PlayerControlObject::nextCamera() {
    CameraSub* sub;
    int i;
    if (m_node != 0 && m_node->m_child != 0) {
        sub = &m_sub;
        if (sub->m_cnt.m_asLong != 0) goto incr;
        {
            IPlayerControlObject* p = 0;
            IObject* o = m_node->m_child;
            do {
                p = (IPlayerControlObject*)o->queryInterface(IID_IPlayerControlObject);
                if (p) break;
                o = o->m_next;
            } while (o != 0);
            p->nextCamera();
        }
        return;
    }
    sub = &m_sub;
    goto incr;
incr:
    i = m_index + 1;
    int cnt = sub->m_cnt.m_pair.m_count;
    if (i >= cnt) i = 0;
    setActiveCamera(i);
}

} } }
