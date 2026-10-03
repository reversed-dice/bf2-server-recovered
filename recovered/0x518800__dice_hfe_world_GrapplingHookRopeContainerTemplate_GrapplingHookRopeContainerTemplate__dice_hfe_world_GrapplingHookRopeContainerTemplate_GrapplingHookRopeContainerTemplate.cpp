// FUNCTION: BF2 0x518800
namespace dice {
namespace hfe {
namespace world {

class ObjectTemplate {
public:
    void updateFlags(unsigned int, unsigned int);
};

class PlayerControlObjectTemplate : public ObjectTemplate {
public:
    PlayerControlObjectTemplate();
};

class GrapplingHookRopeContainerTemplate : public PlayerControlObjectTemplate {
public:
    GrapplingHookRopeContainerTemplate();
};

GrapplingHookRopeContainerTemplate::GrapplingHookRopeContainerTemplate()
    : PlayerControlObjectTemplate()
{
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb42d10);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x10) = reinterpret_cast<void*>(0xb431b0);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x68) = reinterpret_cast<void*>(0xb431e8);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x1c8) = reinterpret_cast<void*>(0xb43268);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x1f8) = reinterpret_cast<void*>(0xb432d0);
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x3d4) = 1;
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x3d8) = 0x3fc00000;
    updateFlags(0x40, 0u);
}

}
}
}
// REVERSED_FUNCTION: dice_hfe_world_GrapplingHookRopeContainerTemplate_GrapplingHookRopeContainerTemplate (0x518800)