// FUNCTION: BF2 0x616aa0
namespace dice { namespace hfe { namespace world {

class GenericProjectileTemplate {
public:
    int getRef();
};

int GenericProjectileTemplate::getRef() {
    return *(int*)((char*)this + 0x200);
}

} } }
