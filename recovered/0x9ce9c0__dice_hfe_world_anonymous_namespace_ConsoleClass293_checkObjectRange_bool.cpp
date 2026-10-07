// FUNCTION: BF2 0x9ce9c0
namespace dice { namespace hfe { namespace world { namespace {
class ConsoleClass293 {
public:
    int checkObjectRange(bool p);
    int p0(bool p);
};
int ConsoleClass293::p0(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        int* q = *(int**)((char*)this + 0x38);
        if (*q < 0) {
            if (p) { *q = 0; return 0; }
        } else if (*q > 1 && p) {
            *q = 0x1;
        }
    }
    return 0;
}

int ConsoleClass293::checkObjectRange(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        int* q = *(int**)((char*)this + 0x38);
        if (*q < 0) {
            if (p) { *q = 0; return 0; }
        } else if (*q > 1 && p) {
            *q = 0x1;
        }
    }
    return 0;
}
} } } }
