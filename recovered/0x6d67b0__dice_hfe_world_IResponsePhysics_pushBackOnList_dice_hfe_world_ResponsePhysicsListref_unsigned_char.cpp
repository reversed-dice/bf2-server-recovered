// BF2_FLAGS: -fno-regmove
// FUNCTION: BF2 0x6d67b0
namespace dice { namespace hfe { namespace world {

class IResponsePhysics;

struct ResponsePhysicsList {
    IResponsePhysics* head;
    IResponsePhysics* tail;
};

class IResponsePhysics {
public:
    virtual ~IResponsePhysics();
    IResponsePhysics* prev; // +0x8
    IResponsePhysics* next; // +0x10
    unsigned char flag;     // +0x18

    bool pushBackOnList(ResponsePhysicsList& list, unsigned char val);
};

bool IResponsePhysics::pushBackOnList(ResponsePhysicsList& list, unsigned char val) {
    if (flag != 0) return false;
    if (!list.head) {
        list.head = this;
        list.tail = this;
        next = 0;
        prev = 0;
        flag = val;
        return true;
    }
    if (list.tail->next == 0) {
        list.tail->next = this;
        next = 0;
        prev = list.tail;
        list.tail = this;
        flag = val;
        return true;
    }
    next = 0;
    prev = 0;
    return false;
}

} } }
