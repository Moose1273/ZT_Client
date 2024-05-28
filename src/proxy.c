#include "proxy.h"
#include "../suricata/suricata/src/suricata.h"
void startSuricata(int argc, char** argv)
{
    SuricataMain(argc, argv);
}

//处理数据包的逻辑
void separateFlow()
{
    
}

void stopSuricata()
{
    EngineStop();
}

