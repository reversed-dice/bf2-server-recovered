// FUNCTION: BF2 0x7546e0
namespace dice { namespace hfe {
extern int fn_407628(void* a, const char* b);
int getValueForArgType_0x7546e0(void* self, void* s) {
    return ~-(int)(fn_407628(s, "std::string") == 0);
}
} }
