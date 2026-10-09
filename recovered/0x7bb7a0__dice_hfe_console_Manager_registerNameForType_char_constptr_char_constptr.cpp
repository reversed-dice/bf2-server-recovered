// FUNCTION: BF2 0x7bb7a0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>

extern "C" int strcasecmp(const char*, const char*);

namespace dice { namespace hfe {
struct NoCaseStringCompare {
  bool operator()(std::string const& a, std::string const& b) const;
};
namespace console {
typedef std::map<std::string, char const*, NoCaseStringCompare> NameMap;
struct Manager {
  char _pad[0x18];
  NameMap m_names;
};
}}}

void reg_7bb7a0(void* self_, char const* name, char const* type) {
  dice::hfe::console::Manager* self = (dice::hfe::console::Manager*)self_;
  std::string key(name);
  dice::hfe::console::NameMap::iterator it = self->m_names.lower_bound(key);
  if (it == self->m_names.end() || strcasecmp(key.c_str(), it->first.c_str()) < 0) {
    it = self->m_names.insert(
        it, dice::hfe::console::NameMap::value_type(key, (char const*)0));
  }
  it->second = type;
}
