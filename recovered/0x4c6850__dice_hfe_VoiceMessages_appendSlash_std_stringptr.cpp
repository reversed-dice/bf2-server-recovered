#include <string>
#include <vector>
namespace dice { namespace hfe {
class VoiceMessages {
public:
    char _pad[0xe8];
    std::vector<std::string> m_speeches;   // +0xe8
    std::string getSpeech(int id) const;
    void appendSlash(std::string* p);
};
}}
// FUNCTION: BF2 0x4c6850
void dice::hfe::VoiceMessages::appendSlash(std::string* p) {
    if (p->size() != 0 && (*p)[p->size() - 1] != '/') *p += '/';
}
