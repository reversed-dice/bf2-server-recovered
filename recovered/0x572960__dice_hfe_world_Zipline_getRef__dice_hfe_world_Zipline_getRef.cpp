// FUNCTION: BF2 0x572960
namespace dice { namespace hfe { namespace world {

class Zipline {
public:
    int getRef();
};

int Zipline::getRef() {
    return *(int*)((char*)this + 0x22c);
}

} } }
