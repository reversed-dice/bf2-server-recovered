// FUNCTION: BF2 0x40a700
namespace dice { namespace hfe { namespace memory {

struct TraceIdentifier {
    char _pad[0x114];
};

class TraceInfoManager {
public:
    static TraceIdentifier** m_resourceIdentifiers;
    static int m_resourceIdentifierCount;

    static void resourceFree(int& param_1, const char* param_2, int param_3);
    static int getIdentifier(const char* param_1, TraceIdentifier** param_2, int& param_3);
};

void TraceInfoManager::resourceFree(int& param_1, const char* param_2, int param_3) {
    int val = param_1;
    if (val == -1) {
        val = getIdentifier(param_2, (TraceIdentifier**)0xf81520, m_resourceIdentifierCount);
        param_1 = val;
        if (val < 0) {
            return;
        }
    }
    TraceIdentifier* id = ((TraceIdentifier**)0xf81520)[val];
    --*(int*)((char*)id + 0x10c);
    *(int*)((char*)id + 0x110) -= param_3;
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager_resourceFree_intref_char_constptr_int (0x40a700)