// FUNCTION: BF2 0x753330
namespace dice { namespace hfe { namespace {
class ConsoleClass150 {
public:
    int checkObjectRange(bool p);
    int p0(bool p);
    int p1(bool p);
};
int ConsoleClass150::p0(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        float* q = *(float**)((char*)this + 0x38);
        if (*q < 0.0f) {
            if (p) { *q = 0.0f; return 0; }
        } else if (*q > 1.0f && p) {
            *q = 1.0f;
        }
    }
    return 0;
}

int ConsoleClass150::p1(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        float* q = *(float**)((char*)this + 0x38);
        if (*q < 0.0f) {
            if (p) { *q = 0.0f; return 0; }
        } else if (*q > 1.0f && p) {
            *q = 1.0f;
        }
    }
    return 0;
}

int ConsoleClass150::checkObjectRange(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        float* q = *(float**)((char*)this + 0x38);
        if (*q < 0.0f) {
            if (p) { *q = 0.0f; return 0; }
        } else if (*q > 1.0f && p) {
            *q = 1.0f;
        }
    }
    return 0;
}
 } } }
