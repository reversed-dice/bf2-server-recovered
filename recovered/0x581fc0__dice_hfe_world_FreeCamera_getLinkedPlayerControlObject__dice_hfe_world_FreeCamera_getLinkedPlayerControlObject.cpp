// FUNCTION: BF2 0x581fc0
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    char _pad[584];               // offset 0x00
    char m_field_248[32];         // offset 0x248

    const char* getLinkedPlayerControlObject();
};

const char* FreeCamera::getLinkedPlayerControlObject() {
    return reinterpret_cast<const char*>(&m_field_248);
}

} } }
