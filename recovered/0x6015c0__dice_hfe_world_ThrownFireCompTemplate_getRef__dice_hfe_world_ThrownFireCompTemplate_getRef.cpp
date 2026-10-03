// FUNCTION: BF2 0x6015c0
namespace dice { namespace hfe { namespace world {

class ThrownFireCompTemplate {
public:
    int getRef();
};

int ThrownFireCompTemplate::getRef() {
    return *(int*)((char*)this + 0x8c);
}

} } }
