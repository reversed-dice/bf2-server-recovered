// FUNCTION: BF2 0x4c68e0
// BF2_FLAGS: -fno-tree-dominator-opts
#include <string>
namespace dice { namespace hfe {
class VoiceMessages {
public:
    std::string getSpeech(int idx) const;
    char pad[0xe8];
    std::string* m_begin;   // +0xe8
    std::string* m_end;     // +0xf0
};
std::string VoiceMessages::getSpeech(int idx) const
{
    if (idx < 0 || idx >= (int)(m_end - m_begin))
        return std::string("");
    return m_begin[idx];
}
}}
