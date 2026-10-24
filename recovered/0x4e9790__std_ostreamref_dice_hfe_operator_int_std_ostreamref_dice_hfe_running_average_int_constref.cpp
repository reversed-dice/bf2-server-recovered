// FUNCTION: BF2 0x4e9790
#include <ostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

namespace dice { namespace hfe {

template <typename T>
class running_average {
public:
    std::string m_name;
    char _pad[0x10];
    unsigned long m_n;
    std::vector<T> m_data;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, running_average<T> const& ra) {
    int mn;
    int mx;
    mx = *std::max_element(ra.m_data.begin(), ra.m_data.begin() + ra.m_n);
    mn = *std::min_element(ra.m_data.begin(), ra.m_data.begin() + ra.m_n);
    int sum = std::accumulate(ra.m_data.begin(), ra.m_data.begin() + ra.m_n, 0);
    os << ra.m_name << ": " << (double)sum / (double)ra.m_n
       << " [l:" << mn << "/h:" << mx << "]";
    return os;
}

template std::ostream& operator<<(std::ostream&, running_average<int> const&);

} }
