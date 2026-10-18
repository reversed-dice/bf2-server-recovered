// FUNCTION: BF2 0x410880
// BF2_FLAGS: -fno-strict-aliasing
// Game::registerGameEvents: 94 event registrations. Each event is a temporary built
// inside the argument list (string first, then the event, destroyed in reverse order).
// Events with members use a non-polymorphic stand-in (GEBase + one empty base that
// writes the derived vptr with a volatile store + volatile Vec members): that keeps
// the vptr store ahead of the member stores and leaves no compiler-generated vptr store.
#include <string>

namespace dice { namespace hfe {

// The runs of stores through a zeroed register are nested vectors with
// their own zeroing constructors, inlined into the event constructor.
struct Vec1 { float x; Vec1() { x = 0; } };
struct Vec2 { float x, y; Vec2() { x = 0; y = 0; } };
struct Vec3 { float x, y, z; Vec3() { x = 0; y = 0; z = 0; } };
struct Vec4 { float x, y, z, w; Vec4() { x = 0; y = 0; z = 0; w = 0; } };

class IGameEventMaker { public: virtual ~IGameEventMaker(); };

class GameEventRegistry {
public:
    void registerEventMaker(unsigned int type, const std::string& name,
                            IGameEventMaker* maker);
};

// GameEvent::GameEvent (0x439b10) is vptr / refCount = 1 / field = -1 and
// ~GameEvent (0x439a80) only resets the vptr: both out of line, both calls.
class GameEvent {
public:
    GameEvent();
    virtual void addRef();
    virtual int getRef() const;
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~GameEvent();
    virtual unsigned int getType() const;
    virtual void logInfo(bool, int);
    virtual void eventReceivedByRemote(void*);
    virtual void executeClient();
    virtual void executeServer(int);
    virtual void deSerialize(void*);
    virtual void serialize(void*);
protected:
    int m_refCount;
    int m_field;
};


struct VVec2 { volatile float x, y; VVec2() { x = 0; y = 0; } };
struct VVec3 { volatile float x, y, z; VVec3() { x = 0; y = 0; z = 0; } };
// Non-polymorphic stand-in for GameEvent: GameEvent() and ~GameEvent() are out of line.
struct GEBase {
    GEBase();
    ~GEBase();
    void* vptr;
    int m_refCount;
    int m_field;
};
struct VP_CreateObjectEvent { VP_CreateObjectEvent() { *(void* volatile*)this = (void*)0xb2be90; } };
class CreateObjectEventS : public GEBase, public VP_CreateObjectEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    CreateObjectEventS()  {}
    ~CreateObjectEventS() { *(void**)this = (void*)0xb2be90; }
    unsigned char m_pad10[8];
    VVec3 m_18_0;
    VVec3 m_18_3;
};

struct VP_CreateKitEvent { VP_CreateKitEvent() { *(void* volatile*)this = (void*)0xb2bd70; } };
class CreateKitEventS : public GEBase, public VP_CreateKitEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    CreateKitEventS()  {}
    ~CreateKitEventS() { *(void**)this = (void*)0xb2bd70; }
    unsigned char m_pad10[8];
    VVec3 m_18_0;
};

struct VP_HandleDropEvent { VP_HandleDropEvent() { *(void* volatile*)this = (void*)0xb2cd30; } };
class HandleDropEventS : public GEBase, public VP_HandleDropEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    HandleDropEventS()  {}
    ~HandleDropEventS() { *(void**)this = (void*)0xb2cd30; }
    unsigned char m_pad10[8];
    VVec3 m_18_0;
};

struct VP_KilledByEvent { VP_KilledByEvent() { *(void* volatile*)this = (void*)0xb2d230; } };
class KilledByEventS : public GEBase, public VP_KilledByEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    KilledByEventS() : m_10(0), m_11(0), m_12(0), m_14(0), m_18(0), m_1c(0), m_20_0(), m_2c(0) {}
    ~KilledByEventS() { *(void**)this = (void*)0xb2d230; }
    volatile unsigned char m_10;
    volatile unsigned char m_11;
    volatile unsigned char m_12;
    volatile unsigned char m_pad13[1];
    volatile unsigned short m_14;
    volatile unsigned char m_pad16[2];
    volatile int m_18;
    volatile int m_1c;
    volatile VVec3 m_20_0;
    volatile unsigned char m_2c;
};

struct VP_SpottedEvent { VP_SpottedEvent() { *(void* volatile*)this = (void*)0xb2e130; } };
class SpottedEventS : public GEBase, public VP_SpottedEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    SpottedEventS()  {}
    ~SpottedEventS() { *(void**)this = (void*)0xb2e130; }
    unsigned char m_pad10[8];
    VVec2 m_18_0;
};

struct VP_ArtilleryEvent { VP_ArtilleryEvent() { *(void* volatile*)this = (void*)0xb2b2b0; } };
class ArtilleryEventS : public GEBase, public VP_ArtilleryEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    ArtilleryEventS()  {}
    ~ArtilleryEventS() { *(void**)this = (void*)0xb2b2b0; }
    VVec2 m_10_0;
};

struct VP_AmbientEffectAreaEvent { VP_AmbientEffectAreaEvent() { *(void* volatile*)this = (void*)0xb2b190; } };
class AmbientEffectAreaEventS : public GEBase, public VP_AmbientEffectAreaEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    AmbientEffectAreaEventS()  {}
    ~AmbientEffectAreaEventS() { *(void**)this = (void*)0xb2b190; }
    VVec3 m_10_0;
};

struct VP_CommanderCamEvent { VP_CommanderCamEvent() { *(void* volatile*)this = (void*)0xb2b8b0; } };
class CommanderCamEventS : public GEBase, public VP_CommanderCamEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    CommanderCamEventS()  {}
    ~CommanderCamEventS() { *(void**)this = (void*)0xb2b8b0; }
    VVec3 m_10_0;
};

struct VP_SupplyDropEvent { VP_SupplyDropEvent() { *(void* volatile*)this = (void*)0xb2e4b0; } };
class SupplyDropEventS : public GEBase, public VP_SupplyDropEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    SupplyDropEventS()  {}
    ~SupplyDropEventS() { *(void**)this = (void*)0xb2e4b0; }
    VVec2 m_10_0;
};

struct VP_TargetDirectionEvent { VP_TargetDirectionEvent() { *(void* volatile*)this = (void*)0xb2e590; } };
class TargetDirectionEventS : public GEBase, public VP_TargetDirectionEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    TargetDirectionEventS()  {}
    ~TargetDirectionEventS() { *(void**)this = (void*)0xb2e590; }
    VVec3 m_10_0;
    VVec3 m_10_3;
};

struct VP_UAVEvent { VP_UAVEvent() { *(void* volatile*)this = (void*)0xb2e790; } };
class UAVEventS : public GEBase, public VP_UAVEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    UAVEventS()  {}
    ~UAVEventS() { *(void**)this = (void*)0xb2e790; }
    VVec2 m_10_0;
};

struct VP_DropVehicleEvent { VP_DropVehicleEvent() { *(void* volatile*)this = (void*)0xb2c490; } };
class DropVehicleEventS : public GEBase, public VP_DropVehicleEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    DropVehicleEventS()  {}
    ~DropVehicleEventS() { *(void**)this = (void*)0xb2c490; }
    VVec2 m_10_0;
};

struct VP_UpdateTriggerEvent { VP_UpdateTriggerEvent() { *(void* volatile*)this = (void*)0xb2e910; } };
class UpdateTriggerEventS : public GEBase, public VP_UpdateTriggerEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    UpdateTriggerEventS()  {}
    ~UpdateTriggerEventS() { *(void**)this = (void*)0xb2e910; }
    unsigned char m_pad10[8];
    VVec3 m_18_0;
    VVec3 m_18_3;
};

struct VP_GrapplingHookContainerDetachEvent { VP_GrapplingHookContainerDetachEvent() { *(void* volatile*)this = (void*)0xb2c9d0; } };
class GrapplingHookContainerDetachEventS : public GEBase, public VP_GrapplingHookContainerDetachEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    GrapplingHookContainerDetachEventS()  {}
    ~GrapplingHookContainerDetachEventS() { *(void**)this = (void*)0xb2c9d0; }
    unsigned char m_pad10[4];
    VVec3 m_14_0;
};

struct VP_GrapplingHookCreateEvent { VP_GrapplingHookCreateEvent() { *(void* volatile*)this = (void*)0xb2cb90; } };
class GrapplingHookCreateEventS : public GEBase, public VP_GrapplingHookCreateEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    GrapplingHookCreateEventS()  {}
    ~GrapplingHookCreateEventS() { *(void**)this = (void*)0xb2cb90; }
    unsigned char m_pad10[12];
    VVec3 m_1c_0;
    VVec3 m_1c_3;
};

struct VP_GrapplingHookUpdateEvent { VP_GrapplingHookUpdateEvent() { *(void* volatile*)this = (void*)0xb2cc70; } };
class GrapplingHookUpdateEventS : public GEBase, public VP_GrapplingHookUpdateEvent {
public:
    static const unsigned int TYPE;
    unsigned int getType() const { return TYPE; }
    GrapplingHookUpdateEventS() : m_10(0), m_12(0), m_14_0(), m_14_3(), m_2c(0) {}
    ~GrapplingHookUpdateEventS() { *(void**)this = (void*)0xb2cc70; }
    volatile unsigned short m_10;
    volatile unsigned char m_12;
    volatile unsigned char m_pad13[1];
    VVec3 m_14_0;
    VVec3 m_14_3;
    volatile unsigned char m_2c;
};

class ChallengeEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class ChallengeResponseEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class ConnectionTypeEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class DataBlockEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class CreatePlayerEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class CreateObjectEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    CreateObjectEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2be90;
        m_18_0.x = 0; m_18_0.y = 0; m_18_0.z = 0;
        m_18_3.x = 0; m_18_3.y = 0; m_18_3.z = 0;
    }
    unsigned char m_pad10[8];
    Vec3 m_18_0;
    Vec3 m_18_3;
};
class CreateKitEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    CreateKitEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2bd70;
        m_18_0.x = 0; m_18_0.y = 0; m_18_0.z = 0;
    }
    unsigned char m_pad10[8];
    Vec3 m_18_0;
};
class DestroyObjectEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class DestroyPlayerEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class EnterVehicleEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class ExitVehicleEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class PostRemoteEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    PostRemoteEvent() : m_50(0) {}
    unsigned char m_pad10[64];
    int m_50;
    unsigned char m_tail[28];
};
class ChangePlayerNameEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class HandlePickupEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class HandleDropEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    HandleDropEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2cd30;
        m_18_0.x = 0; m_18_0.y = 0; m_18_0.z = 0;
    }
    unsigned char m_pad10[8];
    Vec3 m_18_0;
};
class StringBlockEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class JoinSquadEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class LeaveSquadEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class CommanderEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class RadioMessageEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class KilledByEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    KilledByEvent() : m_10(0), m_11(0), m_12(0), m_14(0), m_18(0), m_1c(0), m_20_0(), m_2c(0) {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2d230;
    }
    volatile unsigned char m_10;
    volatile unsigned char m_11;
    volatile unsigned char m_12;
    volatile unsigned char m_pad13[1];
    volatile unsigned short m_14;
    volatile unsigned char m_pad16[2];
    volatile int m_18;
    volatile int m_1c;
    volatile Vec3 m_20_0;
    unsigned char m_2c;
};
class ChangeSquadNameEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class SetPrivateSquadEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class IssueSquadOrderEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    unsigned char m_pad10[4];
    Vec3 m_m[3];
};
class InviteEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class RankEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class KickBanEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class SetAcceptOrderEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class SetSquadLeaderEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class SpottedEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    SpottedEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2e130;
        m_18_0.x = 0; m_18_0.y = 0;
    }
    unsigned char m_pad10[8];
    Vec2 m_18_0;
};
class ArtilleryEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    ArtilleryEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2b2b0;
        m_10_0.x = 0; m_10_0.y = 0;
    }
    Vec2 m_10_0;
};
class StickyProjectileEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    StickyProjectileEvent() { m_m[3].w = 1.0f; m_m[2].z = 1.0f; m_m[1].y = 1.0f; m_m[0].x = 1.0f; }
    Vec4 m_m[4];
};
class AmbientEffectAreaEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    AmbientEffectAreaEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2b190;
        m_10_0.x = 0; m_10_0.y = 0; m_10_0.z = 0;
    }
    Vec3 m_10_0;
};
class VoipOnOffEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class CommanderCamEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    CommanderCamEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2b8b0;
        m_10_0.x = 0; m_10_0.y = 0; m_10_0.z = 0;
    }
    Vec3 m_10_0;
};
class SupplyDropEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    SupplyDropEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2e4b0;
        m_10_0.x = 0; m_10_0.y = 0;
    }
    Vec2 m_10_0;
};
class VoipPlayerMuteEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class VoteEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class TargetDirectionEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    TargetDirectionEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2e590;
        m_10_0.x = 0; m_10_0.y = 0; m_10_0.z = 0;
        m_10_3.x = 0; m_10_3.y = 0; m_10_3.z = 0;
    }
    Vec3 m_10_0;
    Vec3 m_10_3;
};
class BeginRoundEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class EndOfRoundEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class PythonCommandEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    PythonCommandEvent() : m_1c(0), m_20(0), m_24(0), m_28(0) {}
    unsigned char m_pad10[12];
    int m_1c;
    int m_20;
    int m_24;
    int m_28;
};
class RequestEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class VoipSessionEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class ToggleFreeCameraEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class MedalEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class UnlockEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class MissileInitEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class UAVEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    UAVEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2e790;
        m_10_0.x = 0; m_10_0.y = 0;
    }
    Vec2 m_10_0;
};
class ContentCheckEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class DropVehicleEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    DropVehicleEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2c490;
        m_10_0.x = 0; m_10_0.y = 0;
    }
    Vec2 m_10_0;
};
class CreateSpawnGroupEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class RemoveSpawnGroupEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class UpdateTriggerEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    UpdateTriggerEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2e910;
        m_18_0.x = 0; m_18_0.y = 0; m_18_0.z = 0;
        m_18_3.x = 0; m_18_3.y = 0; m_18_3.z = 0;
    }
    unsigned char m_pad10[8];
    Vec3 m_18_0;
    Vec3 m_18_3;
};
class GrapplingHookContainerCreateEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class GrapplingHookContainerUpdateEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class GrapplingHookContainerDetachEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    GrapplingHookContainerDetachEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2c9d0;
        m_14_0.x = 0; m_14_0.y = 0; m_14_0.z = 0;
    }
    unsigned char m_pad10[4];
    Vec3 m_14_0;
};
class GrapplingHookCreateEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    GrapplingHookCreateEvent() {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2cb90;
        m_1c_0.x = 0; m_1c_0.y = 0; m_1c_0.z = 0;
        m_1c_3.x = 0; m_1c_3.y = 0; m_1c_3.z = 0;
    }
    unsigned char m_pad10[12];
    Vec3 m_1c_0;
    Vec3 m_1c_3;
};
class GrapplingHookUpdateEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
    GrapplingHookUpdateEvent() : m_10(0), m_12(0), m_14_0(), m_14_3(), m_2c(0) {
        *(void* volatile*)((char*)this + 0) = (void*)0xb2cc70;
    }
    volatile unsigned short m_10;
    volatile unsigned char m_12;
    volatile unsigned char m_pad13[1];
    Vec3 m_14_0;
    Vec3 m_14_3;
    volatile unsigned char m_2c;
};
class PlayerTearGassedEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class SetNightVisionEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class VerifyPlayerTeamEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};
class FixPlayerTeamEvent : public GameEvent {
public:
    static const unsigned int TYPE;   // defined in another unit
    virtual unsigned int getType() const { return TYPE; }
};

extern IGameEventMaker g_maker_ChallengeEvent;
extern IGameEventMaker g_maker_ChallengeResponseEvent;
extern IGameEventMaker g_maker_ConnectionTypeEvent;
extern IGameEventMaker g_maker_DataBlockEvent;
extern IGameEventMaker g_maker_CreatePlayerEvent;
extern IGameEventMaker g_maker_CreateObjectEvent;
extern IGameEventMaker g_maker_CreateKitEvent;
extern IGameEventMaker g_maker_DestroyObjectEvent;
extern IGameEventMaker g_maker_DestroyPlayerEvent;
extern IGameEventMaker g_maker_EnterVehicleEvent;
extern IGameEventMaker g_maker_ExitVehicleEvent;
extern IGameEventMaker g_maker_PostRemoteEvent;
extern IGameEventMaker g_maker_ChangePlayerNameEvent;
extern IGameEventMaker g_maker_HandlePickupEvent;
extern IGameEventMaker g_maker_HandleDropEvent;
extern IGameEventMaker g_maker_StringBlockEvent;
extern IGameEventMaker g_maker_JoinSquadEvent;
extern IGameEventMaker g_maker_LeaveSquadEvent;
extern IGameEventMaker g_maker_CommanderEvent;
extern IGameEventMaker g_maker_RadioMessageEvent;
extern IGameEventMaker g_maker_KilledByEvent;
extern IGameEventMaker g_maker_ChangeSquadNameEvent;
extern IGameEventMaker g_maker_SetPrivateSquadEvent;
extern IGameEventMaker g_maker_IssueSquadOrderEvent;
extern IGameEventMaker g_maker_InviteEvent;
extern IGameEventMaker g_maker_RankEvent;
extern IGameEventMaker g_maker_KickBanEvent;
extern IGameEventMaker g_maker_SetAcceptOrderEvent;
extern IGameEventMaker g_maker_SetSquadLeaderEvent;
extern IGameEventMaker g_maker_SpottedEvent;
extern IGameEventMaker g_maker_ArtilleryEvent;
extern IGameEventMaker g_maker_StickyProjectileEvent;
extern IGameEventMaker g_maker_AmbientEffectAreaEvent;
extern IGameEventMaker g_maker_VoipOnOffEvent;
extern IGameEventMaker g_maker_CommanderCamEvent;
extern IGameEventMaker g_maker_SupplyDropEvent;
extern IGameEventMaker g_maker_VoipPlayerMuteEvent;
extern IGameEventMaker g_maker_VoteEvent;
extern IGameEventMaker g_maker_TargetDirectionEvent;
extern IGameEventMaker g_maker_BeginRoundEvent;
extern IGameEventMaker g_maker_EndOfRoundEvent;
extern IGameEventMaker g_maker_PythonCommandEvent;
extern IGameEventMaker g_maker_RequestEvent;
extern IGameEventMaker g_maker_VoipSessionEvent;
extern IGameEventMaker g_maker_ToggleFreeCameraEvent;
extern IGameEventMaker g_maker_MedalEvent;
extern IGameEventMaker g_maker_UnlockEvent;
extern IGameEventMaker g_maker_MissileInitEvent;
extern IGameEventMaker g_maker_UAVEvent;
extern IGameEventMaker g_maker_ContentCheckEvent;
extern IGameEventMaker g_maker_DropVehicleEvent;
extern IGameEventMaker g_maker_CreateSpawnGroupEvent;
extern IGameEventMaker g_maker_RemoveSpawnGroupEvent;
extern IGameEventMaker g_maker_UpdateTriggerEvent;
extern IGameEventMaker g_maker_GrapplingHookContainerCreateEvent;
extern IGameEventMaker g_maker_GrapplingHookContainerUpdateEvent;
extern IGameEventMaker g_maker_GrapplingHookContainerDetachEvent;
extern IGameEventMaker g_maker_GrapplingHookCreateEvent;
extern IGameEventMaker g_maker_GrapplingHookUpdateEvent;
extern IGameEventMaker g_maker_PlayerTearGassedEvent;
extern IGameEventMaker g_maker_SetNightVisionEvent;
extern IGameEventMaker g_maker_VerifyPlayerTeamEvent;
extern IGameEventMaker g_maker_FixPlayerTeamEvent;

extern GameEventRegistry* g_gameEventRegistry;

// form B: the virtual at slot 0x68 of the global at 0x10b3730
class NetworkEventRegistry {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void registerEvent(int group, int id, const std::string& name);
};
extern NetworkEventRegistry* g_networkEventRegistry;

class Game { public: static int registerGameEvents(); };

int Game::registerGameEvents()
{
    static bool s_done = false;
    if (s_done) return 1;
    s_done = true;
    { const std::string& s = std::string("ChallengeEvent"); ChallengeEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ChallengeEvent); }
    { const std::string& s = std::string("ChallengeResponseEvent"); ChallengeResponseEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ChallengeResponseEvent); }
    { const std::string& s = std::string("ConnectionTypeEvent"); ConnectionTypeEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ConnectionTypeEvent); }
    { const std::string& s = std::string("DataBlockEvent"); DataBlockEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_DataBlockEvent); }
    { const std::string& s = std::string("CreatePlayerEvent"); CreatePlayerEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_CreatePlayerEvent); }
    { const std::string& s = std::string("CreateObjectEvent"); CreateObjectEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_CreateObjectEvent); }
    { const std::string& s = std::string("CreateKitEvent"); CreateKitEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_CreateKitEvent); }
    { const std::string& s = std::string("DestroyObjectEvent"); DestroyObjectEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_DestroyObjectEvent); }
    { const std::string& s = std::string("DestroyPlayerEvent"); DestroyPlayerEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_DestroyPlayerEvent); }
    { const std::string& s = std::string("EnterVehicleEvent"); EnterVehicleEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_EnterVehicleEvent); }
    { const std::string& s = std::string("ExitVehicleEvent"); ExitVehicleEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ExitVehicleEvent); }
    { const std::string& s = std::string("PostRemoteEvent"); PostRemoteEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_PostRemoteEvent); }
    { const std::string& s = std::string("ChangePlayerNameEvent"); ChangePlayerNameEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ChangePlayerNameEvent); }
    { const std::string& s = std::string("HandlePickupEvent"); HandlePickupEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_HandlePickupEvent); }
    { const std::string& s = std::string("HandleDropEvent"); HandleDropEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_HandleDropEvent); }
    { const std::string& s = std::string("StringBlockEvent"); StringBlockEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_StringBlockEvent); }
    { const std::string& s = std::string("JoinSquadEvent"); JoinSquadEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_JoinSquadEvent); }
    { const std::string& s = std::string("LeaveSquadEvent"); LeaveSquadEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_LeaveSquadEvent); }
    { const std::string& s = std::string("CommanderEvent"); CommanderEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_CommanderEvent); }
    { const std::string& s = std::string("RadioMessageEvent"); RadioMessageEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_RadioMessageEvent); }
    { const std::string& s = std::string("KilledByEvent"); KilledByEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_KilledByEvent); }
    { const std::string& s = std::string("ChangeSquadNameEvent"); ChangeSquadNameEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ChangeSquadNameEvent); }
    { const std::string& s = std::string("SetPrivateSquadEvent"); SetPrivateSquadEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_SetPrivateSquadEvent); }
    { const std::string& s = std::string("IssueSquadOrderEvent"); IssueSquadOrderEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_IssueSquadOrderEvent); }
    { const std::string& s = std::string("InviteEvent"); InviteEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_InviteEvent); }
    { const std::string& s = std::string("RankEvent"); RankEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_RankEvent); }
    { const std::string& s = std::string("KickBanEvent"); KickBanEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_KickBanEvent); }
    { const std::string& s = std::string("SetAcceptOrderEvent"); SetAcceptOrderEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_SetAcceptOrderEvent); }
    { const std::string& s = std::string("SetSquadLeaderEvent"); SetSquadLeaderEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_SetSquadLeaderEvent); }
    { const std::string& s = std::string("SpottedEvent"); SpottedEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_SpottedEvent); }
    { const std::string& s = std::string("ArtilleryEvent"); ArtilleryEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ArtilleryEvent); }
    { const std::string& s = std::string("StickyProjectileEvent"); StickyProjectileEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_StickyProjectileEvent); }
    { const std::string& s = std::string("AmbientEffectAreaEvent"); AmbientEffectAreaEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_AmbientEffectAreaEvent); }
    { const std::string& s = std::string("VoipOnOffEvent"); VoipOnOffEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_VoipOnOffEvent); }
    { const std::string& s = std::string("CommanderCamEvent"); CommanderCamEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_CommanderCamEvent); }
    { const std::string& s = std::string("SupplyDropEvent"); SupplyDropEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_SupplyDropEvent); }
    { const std::string& s = std::string("VoipPlayerMuteEvent"); VoipPlayerMuteEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_VoipPlayerMuteEvent); }
    { const std::string& s = std::string("VoteEvent"); VoteEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_VoteEvent); }
    { const std::string& s = std::string("TargetDirectionEvent"); TargetDirectionEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_TargetDirectionEvent); }
    { const std::string& s = std::string("BeginRoundEvent"); BeginRoundEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_BeginRoundEvent); }
    { const std::string& s = std::string("EndOfRoundEvent"); EndOfRoundEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_EndOfRoundEvent); }
    { const std::string& s = std::string("PythonCommandEvent"); PythonCommandEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_PythonCommandEvent); }
    { const std::string& s = std::string("RequestEvent"); RequestEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_RequestEvent); }
    { const std::string& s = std::string("VoipSessionEvent"); VoipSessionEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_VoipSessionEvent); }
    { const std::string& s = std::string("ToggleFreeCameraEvent"); ToggleFreeCameraEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ToggleFreeCameraEvent); }
    { const std::string& s = std::string("MedalEvent"); MedalEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_MedalEvent); }
    { const std::string& s = std::string("UnlockEvent"); UnlockEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_UnlockEvent); }
    { const std::string& s = std::string("MissileInitEvent"); MissileInitEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_MissileInitEvent); }
    { const std::string& s = std::string("UAVEvent"); UAVEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_UAVEvent); }
    { const std::string& s = std::string("ContentCheckEvent"); ContentCheckEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_ContentCheckEvent); }
    { const std::string& s = std::string("DropVehicleEvent"); DropVehicleEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_DropVehicleEvent); }
    { const std::string& s = std::string("CreateSpawnGroupEvent"); CreateSpawnGroupEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_CreateSpawnGroupEvent); }
    { const std::string& s = std::string("RemoveSpawnGroupEvent"); RemoveSpawnGroupEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_RemoveSpawnGroupEvent); }
    { const std::string& s = std::string("UpdateTriggerEvent"); UpdateTriggerEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_UpdateTriggerEvent); }
    { const std::string& s = std::string("GrapplingHookContainerCreateEvent"); GrapplingHookContainerCreateEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_GrapplingHookContainerCreateEvent); }
    { const std::string& s = std::string("GrapplingHookContainerUpdateEvent"); GrapplingHookContainerUpdateEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_GrapplingHookContainerUpdateEvent); }
    { const std::string& s = std::string("GrapplingHookContainerDetachEvent"); GrapplingHookContainerDetachEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_GrapplingHookContainerDetachEvent); }
    { const std::string& s = std::string("GrapplingHookCreateEvent"); GrapplingHookCreateEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_GrapplingHookCreateEvent); }
    { const std::string& s = std::string("GrapplingHookUpdateEvent"); GrapplingHookUpdateEventS e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_GrapplingHookUpdateEvent); }
    { const std::string& s = std::string("PlayerTearGassedEvent"); PlayerTearGassedEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_PlayerTearGassedEvent); }
    { const std::string& s = std::string("SetNightVisionEvent"); SetNightVisionEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_SetNightVisionEvent); }
    { const std::string& s = std::string("VerifyPlayerTeamEvent"); VerifyPlayerTeamEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_VerifyPlayerTeamEvent); }
    { const std::string& s = std::string("FixPlayerTeamEvent"); FixPlayerTeamEvent e;
      g_gameEventRegistry->registerEventMaker(e.getType(), s,
                                             &g_maker_FixPlayerTeamEvent); }
    g_networkEventRegistry->registerEvent(0x6, 0x1, "ECNetworkNEDataBlockReady");
    g_networkEventRegistry->registerEvent(0x6, 0xb, "ECNetworkNEStringReceived");
    g_networkEventRegistry->registerEvent(0x6, 0x2, "ECNetworkNELoadComplete");
    g_networkEventRegistry->registerEvent(0x6, 0x3, "ECNetworkNEStartSimulation");
    g_networkEventRegistry->registerEvent(0x6, 0x4, "ECNetworkNEDatabaseComplete");
    g_networkEventRegistry->registerEvent(0x6, 0x5, "ECNetworkNEReset");
    g_networkEventRegistry->registerEvent(0x6, 0x6, "ECNetworkNESelectSpawnGroup");
    g_networkEventRegistry->registerEvent(0x6, 0x7, "ECNetworkNESelectTeam");
    g_networkEventRegistry->registerEvent(0x6, 0x8, "ECNetworkNESelectKit");
    g_networkEventRegistry->registerEvent(0x6, 0x9, "ECNetworkNEPlayerSpawned");
    g_networkEventRegistry->registerEvent(0x6, 0xa, "ECNetworkNEPlayerDead");
    g_networkEventRegistry->registerEvent(0x6, 0xc, "ECNetworkNESuicide");
    g_networkEventRegistry->registerEvent(0x6, 0xd, "ECNetworkNERadioMessageReceived");
    g_networkEventRegistry->registerEvent(0x6, 0xe, "ECNetworkNETraceComplete");
    g_networkEventRegistry->registerEvent(0x6, 0xf, "ECNetworkNETraceFailed");
    g_networkEventRegistry->registerEvent(0x6, 0x10, "ECNetworkNETraceResourceConnect");
    g_networkEventRegistry->registerEvent(0x6, 0x11, "ECNetworkNENetworkableDestroyed");
    g_networkEventRegistry->registerEvent(0x6, 0x12, "ECNetworkNERemoteConsoleCommand");
    g_networkEventRegistry->registerEvent(0x6, 0x13, "ECNetworkNERemoteConsoleFeedback");
    g_networkEventRegistry->registerEvent(0x6, 0x14, "ECNetworkNEEndOfRoundGuard");
    g_networkEventRegistry->registerEvent(0x1, 0x1, "ECGameGNDestroyObject");
    g_networkEventRegistry->registerEvent(0x1, 0x2, "ECGameGNDestroyPlayer");
    g_networkEventRegistry->registerEvent(0x1, 0x3, "ECGameGNCreateObject");
    g_networkEventRegistry->registerEvent(0x1, 0x4, "ECGameGNCreatePlayer");
    g_networkEventRegistry->registerEvent(0x1, 0x5, "ECGameGNImmediateCreatePlayer");
    g_networkEventRegistry->registerEvent(0x1, 0x6, "ECGameGNPlayerSpawned");
    g_networkEventRegistry->registerEvent(0x1, 0x7, "ECGameGNSelectSpawnGroup");
    g_networkEventRegistry->registerEvent(0x1, 0x8, "ECGameGNPlayerDead");
    g_networkEventRegistry->registerEvent(0x1, 0x9, "ECGameGNEnterVehicle");
    g_networkEventRegistry->registerEvent(0x1, 0xb, "ECGameGNExitVehicle");
    g_networkEventRegistry->registerEvent(0x1, 0xa, "ECGameGNFreeCameraFire");
    return 1;
}

}}
