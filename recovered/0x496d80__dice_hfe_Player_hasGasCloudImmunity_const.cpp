// FUNCTION: BF2 0x496d80
namespace dice { namespace hfe {

struct RefObj {
    char _pad[8];
    struct Inner* ptr;
};

struct Inner {
    char _pad[0x28];
    struct InnerTemplate* tmpl;
};

struct InnerTemplate {
    char _pad[0x3cf];
    unsigned char flag;
};

class Player {
public:
    char _pad0[0x90];
    RefObj* objA;
    char _pad1[0xe8 - 0x98];
    RefObj* objB;
    char _pad2[0x43c - 0xf0];
    unsigned char maskFlag;

    bool hasGasCloudImmunity() const;
};

bool Player::hasGasCloudImmunity() const {
    unsigned char b = 1;
    if (objA && objA->ptr && objB && objB->ptr && objA->ptr != objB->ptr) {
        b = objA->ptr->tmpl->flag;
    }
    if (maskFlag)
        return true;
    if (b == 0)
        return true;
    return false;
}

} }
