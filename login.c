#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

bool login(){
    char login_padrao[15] = "medico";
    char login1[15];
    char senha[15] = "teste";
    char senha1[15];
    bool result = false;
    printf("Digite o Login: ");
    scanf("%s", login1);

    printf("Digite a Senha: ");
    scanf("%s", senha1);

    if (strcmp(login_padrao, login1) == 0 && strcmp(senha, senha1) == 0){
        result = true;
    }else{
        result = false;
    }
    return result;
}

int logar() {
   
    int tentativa = 0;
    bool logado = false;
    
    for(tentativa=0;tentativa<=3; tentativa++){

    
        printf("======================================================================\n");
        printf( "\t __        ______     _______  __  .__   __. \n"
                "\t|  |      /  __  \\   /  _____||  | |  \\ |  | \n"
                "\t|  |     |  |  |  | |  |  __  |  | |   \\|  | \n"
                "\t|  |     |  |  |  | |  | |_ | |  | |  . `  | \n"
                "\t|  `----.|  `--'  | |  |__| | |  | |  |\\   | \n"
                "\t|_______| \\______/   \\______| |__| |__| \\__| \n");
        printf("======================================================================\n");

       logado = login();


        if (logado == true){
            
            cls();
            printf("Usuario Logado!");
           return 0;
        }else{
            cls();
            printf("Usuario ou Senha Incorretos\nTente novamente\n");
        }
        if(tentativa == 3){
            printf("Limite de tentativas excedido!");
            return 1;
        }
    }
    return 1;
}


