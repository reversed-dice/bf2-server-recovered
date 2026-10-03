// FUNCTION: BF2 0x40f7a0
namespace dice { namespace hfe { namespace io {
    class PlayerInput {
    public:
        char _pad[0x111];
    };
} } }

void* operator new(unsigned long);
void* memcpy(void*, const void*, unsigned long);

namespace std {
    struct _List_node_base {
        void hook(_List_node_base*);
    };
}

namespace dice { namespace hfe {

class Game {
public:
    void addPlayerInput(io::PlayerInput const&);
private:
    char _pad[0x50];
    std::_List_node_base m_inputQueue;
};

void Game::addPlayerInput(io::PlayerInput const& input) {
    std::_List_node_base* head = &m_inputQueue;
    char* node = static_cast<char*>(operator new(0x128));
    char* data = node + 0x10;
    if (data) {
        memcpy(data, &input, 0x111);
    }
    reinterpret_cast<std::_List_node_base*>(node)->hook(head);
}

} }
// REVERSED_FUNCTION: dice_hfe_Game_addPlayerInput_dice_hfe_io_PlayerInput_constref (0x40f7a0)