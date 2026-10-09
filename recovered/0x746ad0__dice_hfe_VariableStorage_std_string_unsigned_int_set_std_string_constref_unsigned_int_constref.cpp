// FUNCTION: BF2 0x746ad0
#include <string>
#include <map>
namespace dice { namespace hfe {
typedef std::map<std::string, unsigned int> VSMapUInt;
extern VSMapUInt::iterator fnd_0x007457d0(VSMapUInt* m, const std::string& k);
void set_0x746ad0(void* self, const std::string& key, const unsigned int& value) {
    VSMapUInt* m = (VSMapUInt*)self;
    VSMapUInt::iterator it = fnd_0x007457d0(m, key);
    *(VSMapUInt::iterator*)((char*)self + 0x30) = it;
    if (it == m->end()) {
        m->insert(std::make_pair(key, value));
    } else {
        it->second = value;
    }
}
}}
