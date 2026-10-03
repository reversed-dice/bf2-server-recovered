// FUNCTION: BF2 0x409950
namespace dice { namespace hfe {

void resourceTraceFree(int*, const char*, int);

} }

namespace dice { namespace hfe { namespace memory {

struct TraceIdentifier {
    char _pad[0x114];
};

class TraceInfoManager {
public:
    static TraceIdentifier** m_resourceIdentifiers;
    static int m_resourceIdentifierCount;
    static int getIdentifier(const char*, TraceIdentifier**, int&);
};

void resourceTraceFree(int* param_1, const char* param_2, int param_3) {
    dice::hfe::resourceTraceFree(param_1, param_2, param_3);
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_resourceTraceFree_intref_char_constptr_int (0x409950)