// FUNCTION: BF2 0x746490
#include <string>
#include <map>
namespace dice { namespace hfe {
typedef std::map<std::string, int> VSMapInt;
extern VSMapInt::iterator fnd_0x004c95c0(VSMapInt* m, const std::string& k);
void set_0x746490(void* self, const std::string& key, const int& value) {
    VSMapInt* m = (VSMapInt*)self;
    VSMapInt::iterator it = fnd_0x004c95c0(m, key);
    *(VSMapInt::iterator*)((char*)self + 0x30) = it;
    if (it == m->end()) {
        m->insert(std::make_pair(key, value));
    } else {
        it->second = value;
    }
}
}}
