// FUNCTION: BF2 0x67fa00
#include <string>
#include <map>

struct NameMap {
    std::map<int, std::string> m_names;
};

extern "C" int compareIgnoreCase(char const*, char const*, int);

void* createPlayer_67fa00(void* self, std::string const& name, std::string const& arg2, int arg3)
{
    std::map<int, std::string>& m = ((NameMap*)((char*)self + 0x60))->m_names;
    std::map<int, std::string>::iterator it = m.begin();
    std::map<int, std::string>::iterator last = m.end();
    for (; it != last; ++it) {
        if (compareIgnoreCase(name.c_str(), it->second.c_str(), (int)name.size()) == 0) {
            typedef void* (*Fn)(void*, int, std::string const&, int);
            return ((Fn)(*(void***)self)[0xe8 / 8])(self, it->first, arg2, arg3);
        }
    }
    return 0;
}
