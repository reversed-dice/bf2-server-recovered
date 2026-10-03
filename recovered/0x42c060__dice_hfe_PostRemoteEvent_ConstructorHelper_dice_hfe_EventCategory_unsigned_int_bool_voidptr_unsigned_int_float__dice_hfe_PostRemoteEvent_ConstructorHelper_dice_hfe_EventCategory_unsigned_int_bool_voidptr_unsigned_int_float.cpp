// FUNCTION: BF2 0x42c060
#include <cstring>
namespace dice { namespace hfe {
class EventCategory { public: int category; };
class PostRemoteEvent {
public:
    virtual void method_0x00();
    virtual void method_0x08();
    virtual void method_0x10();
    virtual void method_0x18();
    virtual void method_0x20();
    virtual void method_0x28();
    virtual void method_0x30();
    virtual void method_0x38();
    virtual void method_0x40();
    virtual void method_0x48();
    void ConstructorHelper(
        EventCategory category,
        unsigned int u1,
        bool flag,
        void* data,
        unsigned int size,
        float f1
    );
};
void PostRemoteEvent::ConstructorHelper(
    EventCategory category,
    unsigned int u1,
    bool flag,
    void* data,
    unsigned int size,
    float f1
) {
    if (data != 0) {
        memcpy((char*)this + 0x18, data, size);
    }
    if (flag) {
        this->method_0x48();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_PostRemoteEvent_ConstructorHelper_dice_hfe_EventCategory_unsigned_int_bool_voidptr_unsigned_int_float (0x42c060)