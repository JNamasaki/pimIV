#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "login.c"
#include "cadastrar.c"

void cls(void){
    COORD coordScreen = {0, 0};
    DWORD cCharsWritten;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD dwConSize;
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
     GetConsoleScreenBufferInfo(hConsole, &csbi);
    dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
 
    FillConsoleOutputCharacter(hConsole, TEXT(' '),
                   dwConSize, coordScreen, &cCharsWritten);
 
    GetConsoleScreenBufferInfo(hConsole, &csbi);
 
    FillConsoleOutputAttribute(hConsole, csbi.wAttributes,
                               dwConSize, coordScreen, &cCharsWritten);
   
    SetConsoleCursorPosition(hConsole, coordScreen);
}


void menu(){
    int selecao;

    
     printf("  ______     ___       _______       ___           _______.___________..______        ______           \n"
            " /      |   /   \\     |       \\     /   \\         /       |           ||   _  \\      /  __  \\          \n"
            "|  ,----'  /  ^  \\    |  .--.  |   /  ^  \\       |   (----`---|  |----`|  |_)  |    |  |  |  |         \n"
            "|  |      /  /_\\  \\   |  |  |  |  /  /_\\  \\       \\   \\       |  |     |      /     |  |  |  |         \n"
            "|  `----./  _____  \\  |  '--'  | /  _____  \\  .----)   |      |  |     |  |\\  \\----.|  `--'  |         \n"
            " \\______/__/     \\__\\ |_______/ /__/     \\__\\ |_______/       |__|     | _| `._____| \\______/          \n");
    printf("            .______      ___       ______  __   _______ .__   __. .___________. _______     _______.   \n"
            "            |   _  \\    /   \\     /      ||  | |   ____||  \\ |  | |           ||   ____|   /       |   \n"
            "            |  |_)  |  /  ^  \\   |  ,----'|  | |  |__   |   \\|  | `---|  |----`|  |__     |   (----`   \n"
            "            |   ___/  /  /_\\  \\  |  |     |  | |   __|  |  . `  |     |  |     |   __|     \\   \\       \n"
            "            |  |     /  _____  \\ |  `----.|  | |  |____ |  |\\   |     |  |     |  |____.----)   |      \n"
            "            | _|    /__/     \\__\\ \\______||__| |_______||__| \\__|     |__|     |_______|_______/       \n");
    printf("                          ______   ______   ____    ____  __   _______                                 \n"
            "                         /      | /  __  \\  \\   \\  /   / |  | |       \\                                \n"
            "                        |  ,----'|  |  |  |  \\   \\/   /  |  | |  .--.  |                               \n"
            "                        |  |     |  |  |  |   \\      /   |  | |  |  |  |                               \n"
            "                        |  `----.|  `--'  |    \\    /    |  | |  '--'  |                               \n"
            "                         \\______| \\______/      \\__/     |__| |_______/                                \n");

    printf("==================================================================================================");

    printf("\n\tEste sistema matem os registros dos pacientes diagnosticados com COVID-19");
    printf("\n\n\t\t 1.Para cadastrar novos pacientes diagnosticados com COVID-19");
    printf("\n\t\t 2.Sair do sistema");
    printf("\n\t\t DIGITE A OPCAO ESCOLHIDA:");
    scanf("%d",&selecao);
    switch (selecao) {
        case 1:
            
            logar();
            cadastrar();
            break;

        case 2:

            break;

        default:
            cls();
            menu();
            break;

    }
}


