#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include "customInclude/main/app.h"

int main(){
    overloader();
    return 0;
}