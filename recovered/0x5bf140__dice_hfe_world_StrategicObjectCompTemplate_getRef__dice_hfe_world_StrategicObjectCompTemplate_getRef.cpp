// FUNCTION: BF2 0x5bf140
namespace dice { namespace hfe { namespace world {

class StrategicObjectCompTemplate {
public:
    int getRef();
};

int StrategicObjectCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
