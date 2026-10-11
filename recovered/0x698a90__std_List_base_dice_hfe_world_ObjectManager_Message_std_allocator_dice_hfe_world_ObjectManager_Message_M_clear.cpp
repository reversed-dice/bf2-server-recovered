// FUNCTION: BF2 0x698a90

extern "C" void _ZdlPv(void*);

struct RefCounted {
    int refcnt;
};

namespace dice {
namespace hfe {
namespace world {

class ObjectManager {
public:
    struct Message {
        char pad[8]; // 0x00..0x08
        RefCounted* m_data; // at 0x08 (in node: offset 0x10 + 0x08 = 0x18!)

        ~Message() {
            if (m_data) {
                if (--m_data->refcnt == 0) {
                    _ZdlPv(m_data);
                }
            }
        }
    };
};

}
}
}

namespace std {

template <class T>
class allocator {
};

template <class T, class Alloc>
class _List_base {
public:
    struct _List_node {
        _List_node* _M_next;
        _List_node* _M_prev;
        T _M_data;
    };

    _List_node _M_node;

    void _M_clear();
};

template <class T, class Alloc>
void _List_base<T, Alloc>::_M_clear()
{
    _List_node* __cur = _M_node._M_next;
    while (__cur != &_M_node)
    {
        _List_node* __tmp = __cur;
        __cur = __cur->_M_next;
        __tmp->_M_data.~T();
        _ZdlPv(__tmp);
    }
}

template class _List_base<dice::hfe::world::ObjectManager::Message, std::allocator<dice::hfe::world::ObjectManager::Message> >;

}
