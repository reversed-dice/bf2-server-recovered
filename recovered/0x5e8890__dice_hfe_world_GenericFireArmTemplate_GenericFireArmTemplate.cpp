// FUNCTION: BF2 0x5e8890
namespace dice { namespace hfe { namespace world {

struct AnimatedBundleTemplate { AnimatedBundleTemplate(); };

class GenericFireArmTemplate : public AnimatedBundleTemplate {
public:
    GenericFireArmTemplate();
};

GenericFireArmTemplate::GenericFireArmTemplate() : AnimatedBundleTemplate() {
    float z = 0.0f;
    float one = 1.0f;
    *(unsigned long long*)this = 0xb6ebd0ULL;
    *(unsigned long long*)((char*)this + 0x10) = 0xb6ee80ULL;
    *(float*)((char*)this + 0x224) = z;
    *(float*)((char*)this + 0x238) = z;
    *(float*)((char*)this + 0x23c) = z;
    *(float*)((char*)this + 0x240) = z;
    *(unsigned long long*)((char*)this + 0x68) = 0xb6eeb8ULL;
    *(unsigned long long*)((char*)this + 0x1c8) = 0xb6ef38ULL;
    *(unsigned long long*)((char*)this + 0x218) = 0xb6efa0ULL;
    *(unsigned int*)((char*)this + 0x220) = 1;
    *(unsigned int*)((char*)this + 0x228) = 0;
    *(unsigned char*)((char*)this + 0x230) = 0;
    *(unsigned char*)((char*)this + 0x244) = 0;
    *(unsigned int*)((char*)this + 0x248) = 0xffffffffu;
    *(unsigned int*)((char*)this + 0x24c) = 0;
    *(unsigned int*)((char*)this + 0x250) = 0x44160000u;
    *(unsigned int*)((char*)this + 0x254) = 0;
    *(unsigned char*)((char*)this + 0x25c) = 0;
    *(void**)((char*)this + 0x260) = (void*)0xf6c6e8;
    *(void**)((char*)this + 0x268) = (void*)0xf6c6e8;
    *(unsigned long long*)((char*)this + 0x270) = 0;
    *(unsigned long long*)((char*)this + 0x278) = 0;
    *(unsigned int*)((char*)this + 0x280) = 0x40a00000u;
    *(unsigned char*)((char*)this + 0x284) = 1;
    *(unsigned char*)((char*)this + 0x285) = 0;
    *(unsigned char*)((char*)this + 0x286) = 0;
    *(unsigned char*)((char*)this + 0x287) = 0;
    *(float*)((char*)this + 0x288) = one;
    *(void**)((char*)this + 0x290) = (void*)0xf6c6e8;
    *(unsigned int*)((char*)this + 0x298) = 0;
    *(unsigned int*)((char*)this + 0x29c) = 0;
    *(float*)((char*)this + 0x2a0) = one;
    *(unsigned int*)((char*)this + 0x2a4) = 0x40400000u;
}

} } }
