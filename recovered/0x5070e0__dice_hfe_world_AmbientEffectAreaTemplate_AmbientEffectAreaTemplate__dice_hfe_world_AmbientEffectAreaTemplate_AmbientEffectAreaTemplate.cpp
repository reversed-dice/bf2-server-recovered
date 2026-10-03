// FUNCTION: BF2 0x5070e0
namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    BundleTemplate();
};

class AmbientEffectAreaTemplate : public BundleTemplate {
public:
    AmbientEffectAreaTemplate();
};

AmbientEffectAreaTemplate::AmbientEffectAreaTemplate() : BundleTemplate() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb3c9f0);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x10) = reinterpret_cast<void*>(0xb3cc80);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x68) = reinterpret_cast<void*>(0xb3ccb8);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x1c8) = reinterpret_cast<void*>(0xb3cd38);
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x1f4) = 1;
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x1f8) = 0;
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x1fc) = 0xffffffff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x200) = 0;
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x204) = 0;
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x208) = reinterpret_cast<void*>(0xf6c6e8);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x210) = 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x211) = 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectAreaTemplate_AmbientEffectAreaTemplate (0x5070e0)