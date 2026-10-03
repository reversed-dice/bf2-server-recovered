// FUNCTION: BF2 0x40a700
namespace dice { namespace hfe { namespace memory {

class TraceIdentifier;

class TraceInfoManager {
public:
    static void resourceFree(int& param_1, const char* param_2, int param_3);
    static int getIdentifier(const char*, TraceIdentifier**, int&);
    static TraceIdentifier** m_resourceIdentifiers;
    static int m_resourceIdentifierCount;
};

void TraceInfoManager::resourceFree(int& param_1, const char* param_2, int param_3)
{
    int iVar3 = param_1;
    if (iVar3 == -1) {
        iVar3 = getIdentifier(param_2, reinterpret_cast<TraceIdentifier**>(0xf81520), *reinterpret_cast<int*>(0xf81508));
        param_1 = iVar3;
        if (iVar3 < 0) {
            goto done;
        }
    }
    {
        TraceIdentifier* ti = reinterpret_cast<TraceIdentifier**>(0xf81520)[iVar3];
        *reinterpret_cast<int*>(reinterpret_cast<char*>(ti) + 0x10c) -= 1;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(ti) + 0x110) -= param_3;
    }
done:;
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager::resourceFree_intref_char_constptr_int (0x40a700)