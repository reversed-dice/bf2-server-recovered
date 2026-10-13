// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4e98f0
#include <string>
#include <vector>
namespace dice { namespace hfe {

template <typename T>
class running_average {
public:
    running_average(const std::string& name, unsigned long window);
    std::string m_name;
    unsigned long m_window;
    unsigned long m_total;
    unsigned long m_value;
    std::vector<T> m_samples;
};

template <typename T>
running_average<T>::running_average(const std::string& name, unsigned long window)
    : m_name(name), m_window(window), m_total(0), m_value(0), m_samples(window)
{
}

template class running_average<int>;

} }
