// FUNCTION: BF2 0x44e020
namespace dice { namespace hfe {

void _Deque_base_dtor(void* self);

struct StringManager {
    ~StringManager();
};

StringManager::~StringManager() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2feb0);
    _Deque_base_dtor(reinterpret_cast<char*>(this) + 8);
}

} }
// REVERSED_FUNCTION: dice_hfe_StringManager_dtor_StringManager (0x44e010)
// REVERSED_FUNCTION: dice_hfe_StringManager_dtor_StringManager (0x44e020)
