// FUNCTION: BF2 0x752300
namespace dice { namespace hfe { namespace {

class ConsoleClass134 {
public:
    int checkObjectRange(bool p);
    int pad0(bool p);
    int pad1(bool p);
    int pad2(bool p);};
int ConsoleClass134::pad0(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        float* q = *(float**)((char*)this + 0x38);
        if (*q < 0.01f) {
            if (p) *q = 0.01f;
        } else if (*q > 30000.0f && p) {
            *q = 30000.0f;
        }
    }
    return 0;
}
int ConsoleClass134::pad1(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        float* q = *(float**)((char*)this + 0x38);
        if (*q < 0.01f) {
            if (p) *q = 0.01f;
        } else if (*q > 30000.0f && p) {
            *q = 30000.0f;
        }
    }
    return 0;
}
int ConsoleClass134::pad2(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        float* q = *(float**)((char*)this + 0x38);
        if (*q < 0.01f) {
            if (p) *q = 0.01f;
        } else if (*q > 30000.0f && p) {
            *q = 30000.0f;
        }
    }
    return 0;
}
int ConsoleClass134::checkObjectRange(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        float* q = *(float**)((char*)this + 0x38);
        if (*q < 0.01f) {
            if (p) *q = 0.01f;
        } else if (*q > 30000.0f && p) {
            *q = 30000.0f;
        }
    }
    return 0;
}
} } }
