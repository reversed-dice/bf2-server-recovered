// FUNCTION: BF2 0x52db40
namespace dice { namespace hfe { namespace world {

class Ladder {
public:
    int getRef();
};

int Ladder::getRef() {
    return *(int*)((char*)this + 0x22c);
}

} } }
