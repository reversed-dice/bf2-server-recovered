// FUNCTION: BF2 0x453940
namespace dice {
namespace hfe {
namespace world {
    class IObject;
}
namespace io {
    class NetworkManager {
    public:
        world::IObject* getObject(unsigned short);
    };
    extern NetworkManager* networkManager;
}

class GameServer {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
    virtual void _v5();
    virtual void _v6();
    virtual void _v7();
    virtual void _v8();
    virtual void _v9();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual void _v20();
    virtual void _v21();
    virtual void _v22();
    virtual void _v23();
    virtual void _v24();
    virtual void _v25();
    virtual void _v26();
    virtual void _v27();
    virtual void _v28();
    virtual void _v29();
    virtual void _v30();
    virtual void _v31();
    virtual void _v32();
    virtual void _v33();
    virtual void _v34();
    virtual void _v35();
    virtual void _v36();
    virtual void _v37();
    virtual void _v38();
    virtual void _v39();
    virtual bool destroyObject(world::IObject*);

    bool destroyObject(int id);
};

bool GameServer::destroyObject(int id)
{
    return destroyObject(dice::hfe::io::networkManager->getObject(id));
}
}
}
