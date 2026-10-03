// FUNCTION: BF2 0x517940
namespace dice { namespace hfe { namespace world {

class DestroyableWindowsBundle {
public:
    int getRef();
};

int DestroyableWindowsBundle::getRef() {
    return *(int*)((char*)this + 0x238);
}

} } }
