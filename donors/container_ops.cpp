// Donor: the STL containers the remaining functions carry and the corpus of
// accessors never exercised -- vector growth and teardown, map lookup, the
// pointer-owning vector whose destructor deletes every element.
#include <map>
#include <string>
#include <vector>

namespace donors {

struct Item {
    int id;
    float weight;
};

void vector_push_int(std::vector<int>* v, int value)
{
    v->push_back(value);
}

void vector_push_pointer(std::vector<Item*>* v, Item* item)
{
    v->push_back(item);
}

void vector_clear(std::vector<int>* v)
{
    v->clear();
}

int vector_sum(const std::vector<int>& v)
{
    int total = 0;
    for (unsigned int i = 0; i < v.size(); ++i)
        total += v[i];
    return total;
}

void vector_erase_first(std::vector<int>* v)
{
    if (!v->empty())
        v->erase(v->begin());
}

void vector_of_pointers_delete_all(std::vector<Item*>* v)
{
    for (unsigned int i = 0; i < v->size(); ++i)
        delete (*v)[i];
    v->clear();
}

void vector_local_scope(int value, int* out)
{
    std::vector<int> tmp;
    tmp.push_back(value);
    *out = tmp[0];
}

int map_lookup(const std::map<int, int>& m, int key)
{
    std::map<int, int>::const_iterator it = m.find(key);
    if (it == m.end())
        return -1;
    return it->second;
}

void map_insert(std::map<int, int>* m, int key, int value)
{
    (*m)[key] = value;
}

void map_string_key_insert(std::map<std::string, int>* m, const char* key, int value)
{
    std::string k(key);
    (*m)[k] = value;
}

void map_clear(std::map<int, int>* m)
{
    m->clear();
}

}  // namespace donors
