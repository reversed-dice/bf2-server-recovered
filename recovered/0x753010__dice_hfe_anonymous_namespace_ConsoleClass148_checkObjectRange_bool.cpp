// FUNCTION: BF2 0x753010
namespace dice { namespace hfe { namespace {
class ConsoleClass148 {
public:
    int checkObjectRange(bool p);
};
int ConsoleClass148::checkObjectRange(bool p) {
    if (*(int*)((char*)this + 0x30) > 0) {
        float* q = *(float**)((char*)this + 0x38);
        if (*q < 0.0f) {
            if (p) { *q = 0.0f; return 0; }
        } else if (*q > 360.0f && p) {
            *q = 360.0f;
        }
    }
    return 0;
}
 } } }
