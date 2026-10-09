// FUNCTION: BF2 0x747240
#include <string>
#include <map>
namespace dice { namespace hfe {
typedef std::map<std::string, bool> VSMapBool;
extern VSMapBool::iterator fnd_0x00745ba0(VSMapBool* m, const std::string& k);
void set_0x747240(void* self, const std::string& key, const bool& value) {
    VSMapBool* m = (VSMapBool*)self;
    VSMapBool::iterator it = fnd_0x00745ba0(m, key);
    *(VSMapBool::iterator*)((char*)self + 0x30) = it;
    if (it == m->end()) {
        m->insert(std::make_pair(key, value));
    } else {
        it->second = value;
    }
}
}}
