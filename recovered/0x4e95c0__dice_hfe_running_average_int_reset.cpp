// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4e95c0
#include <vector>
namespace dice { namespace hfe {

template <typename T>
class running_average {
public:
    unsigned long long m_a;
    unsigned long long m_window;
    unsigned long long m_total;
    unsigned long long m_value;
    std::vector<T> m_samples;

    void reset();
};

template <typename T>
void running_average<T>::reset() {
    m_samples.resize(0);
    m_samples.resize(m_window);
    m_total = 0;
    m_value = 0;
}

template class running_average<int>;

} }
