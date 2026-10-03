// FUNCTION: BF2 0x5163c0
namespace dice { namespace hfe { namespace world {

class DestroyableWindowTemplate {
public:
    int getRef();
};

int DestroyableWindowTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
