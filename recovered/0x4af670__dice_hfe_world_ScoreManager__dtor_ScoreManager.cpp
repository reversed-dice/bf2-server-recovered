// FUNCTION: BF2 0x4af670
namespace dice { namespace hfe { namespace io {
class NetworkableBase {
public:
    ~NetworkableBase();
};
} } }

namespace dice { namespace hfe { namespace world {
class ScoreManager {
public:
    ~ScoreManager();
    char _pad_0x00[0x1E0];
    void* m_unk_0x1E0;
};

ScoreManager::~ScoreManager() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb36030);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 8) = reinterpret_cast<void*>(0xb36230);
    if (__builtin_expect(m_unk_0x1E0 != 0, 1))
        operator delete[](m_unk_0x1E0);
    reinterpret_cast<dice::hfe::io::NetworkableBase*>(reinterpret_cast<char*>(this) + 8)->~NetworkableBase();
    ::operator delete(this);
}
} } }
// REVERSED_FUNCTION: dice::hfe::world::ScoreManager::dtor_ScoreManager (0x4af670)