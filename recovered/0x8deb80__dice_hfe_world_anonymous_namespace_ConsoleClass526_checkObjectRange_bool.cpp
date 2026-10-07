// FUNCTION: BF2 0x8deb80
namespace dice { namespace hfe { namespace world { namespace {
class ConsoleClass526 {
public:
    int checkObjectRange(bool p);
    int p0(bool p);
    int p1(bool p);
    int p2(bool p);
};
int ConsoleClass526::p0(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        int* q = *(int**)((char*)this + 0x38);
        if (*q < 0) {
            if (p) { *q = 0; return 0; }
        } else if (*q > 0x6 && p) {
            *q = 0x6;
        }
    }
    return 0;
}

int ConsoleClass526::p1(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        int* q = *(int**)((char*)this + 0x38);
        if (*q < 0) {
            if (p) { *q = 0; return 0; }
        } else if (*q > 0x6 && p) {
            *q = 0x6;
        }
    }
    return 0;
}

int ConsoleClass526::p2(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        int* q = *(int**)((char*)this + 0x38);
        if (*q < 0) {
            if (p) { *q = 0; return 0; }
        } else if (*q > 0x6 && p) {
            *q = 0x6;
        }
    }
    return 0;
}

int ConsoleClass526::checkObjectRange(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        int* q = *(int**)((char*)this + 0x38);
        if (*q < 0) {
            if (p) { *q = 0; return 0; }
        } else if (*q > 0x6 && p) {
            *q = 0x6;
        }
    }
    return 0;
}
} } } }
