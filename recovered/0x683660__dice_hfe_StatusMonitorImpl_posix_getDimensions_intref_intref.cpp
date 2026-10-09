// FUNCTION: BF2 0x683660
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Row { short rows; short cols; };

class StatusMonitorImpl_posix {
public:
    void getDimensions(int& w, int& h);
private:
    char m_pad[0x18];
    Row* m_list;
};

void StatusMonitorImpl_posix::getDimensions(int& w, int& h)
{
    Row* l = m_list;
    int a = -1;
    if (l) { a = *(short*)((char*)l + 4) + 1; }
    h = a;
    Row* l2 = m_list;
    int b = -1;
    if (l2) { b = *(short*)((char*)l2 + 6) + 1; }
    w = b;
}

} }
