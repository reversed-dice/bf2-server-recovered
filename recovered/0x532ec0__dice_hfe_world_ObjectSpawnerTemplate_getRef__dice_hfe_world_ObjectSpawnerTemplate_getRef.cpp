// FUNCTION: BF2 0x532ec0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    int getRef();
};

int ObjectSpawnerTemplate::getRef() {
    return *(int*)((char*)this + 0x1d0);
}

} } }
