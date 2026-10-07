// FUNCTION: BF2 0x8d23b0
namespace dice { namespace hfe { namespace world { namespace {
class ConsoleClass279 {
public:
    int checkObjectRange(bool p);
};
int ConsoleClass279::checkObjectRange(bool p) {
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
 } } } }
