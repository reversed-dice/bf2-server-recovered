// FUNCTION: BF2 0x746e30
#include <map>
#include <string>

namespace dice { namespace hfe {

template <typename K, typename V>
class VariableStorage {
public:
    void set(K const& key, V const& value) {
        m_it = m_map.find(key);
        if (m_it == m_map.end())
            m_map.insert(std::make_pair(key, value));
        else
            m_it->second = value;
    }
private:
    std::map<K, V> m_map;
    typename std::map<K, V>::iterator m_it;
};

template class VariableStorage<std::string, std::string>;
}}
