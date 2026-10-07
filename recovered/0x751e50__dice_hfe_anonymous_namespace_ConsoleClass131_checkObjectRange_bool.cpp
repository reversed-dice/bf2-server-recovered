// FUNCTION: BF2 0x751e50
namespace dice { namespace hfe { namespace {
class ConsoleClass131 {
public:
    int checkObjectRange(bool p);
};
int ConsoleClass131::checkObjectRange(bool p) {
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
