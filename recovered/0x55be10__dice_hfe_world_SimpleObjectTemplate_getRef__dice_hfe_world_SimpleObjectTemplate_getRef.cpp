// FUNCTION: BF2 0x55be10
namespace dice { namespace hfe { namespace world {

class SimpleObjectTemplate {
public:
    int getRef();
};

int SimpleObjectTemplate::getRef() {
    return *(int*)((char*)this + 0x70);
}

} } }
