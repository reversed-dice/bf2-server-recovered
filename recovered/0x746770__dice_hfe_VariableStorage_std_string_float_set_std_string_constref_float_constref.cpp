// FUNCTION: BF2 0x746770
#include <string>
#include <map>
namespace dice { namespace hfe {
typedef std::map<std::string, float> VSMapFloat;
extern VSMapFloat::iterator fnd_0x00745520(VSMapFloat* m, const std::string& k);
void set_0x746770(void* self, const std::string& key, const float& value) {
    VSMapFloat* m = (VSMapFloat*)self;
    VSMapFloat::iterator it = fnd_0x00745520(m, key);
    *(VSMapFloat::iterator*)((char*)self + 0x30) = it;
    if (it == m->end()) {
        m->insert(std::make_pair(key, value));
    } else {
        it->second = value;
    }
}
}}
