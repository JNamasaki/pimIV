#include <stdio.h>


void cadastrar(){
    getchar();
    cls();
    printf("\n  ______     ___       _______       ___           _______.___________..______        ______           \n"
    " /      |   /   \\     |       \\     /   \\         /       |           ||   _  \\      /  __  \\          \n"
    "|  ,----'  /  ^  \\    |  .--.  |   /  ^  \\       |   (----`---|  |----`|  |_)  |    |  |  |  |         \n"
    "|  |      /  /_\\  \\   |  |  |  |  /  /_\\  \\       \\   \\       |  |     |      /     |  |  |  |         \n"
    "|  `----./  _____  \\  |  '--'  | /  _____  \\  .----)   |      |  |     |  |\\  \\----.|  `--'  |         \n"
    " \\______/__/     \\__\\ |_______/ /__/     \\__\\ |_______/       |__|     | _| `._____| \\______/          \n");

    // Criando ponteiro do arquivo
    FILE *file;
    FILE *arquivo_existe;

    // Declarando Dados do paciente
    char *nome[100];
    char *cpf[15];
    char *telefone[9];
    char *email[100];

    char *rua[100];
    char *numero[4];
    char *bairro[100];
    char *cidade[100];
    char *estado[100];
    char *cep[10];

    char *dia1[2];
    char *mes1[2];
    char *ano1[4];
    char *dia2[2];
    char *mes2[2];
    char *ano2[4];
    char *comorbidade[100];

    
    // Abrindo arquivo
    arquivo_existe = fopen("pacientes_covid.txt","r");
    if(arquivo_existe != NULL){
        fclose(arquivo_existe);
        file = fopen("pacientes_covid.txt","a");
        fprintf(file,",");
    }else{
        file = fopen("pacientes_covid.txt","w+");
    }
    
    
    // verificando se o arquivo abriu
    if(file == NULL) {
        printf("Erro na abertura do arquivo!");
        // return 1;
    }else{
                // Coletando Dados
        printf("\n\nNome do paciente: ");
        scanf("%100[^\n]s", &nome);
        getchar();

        printf("CPF: ");
        scanf("%14s", &cpf);
        getchar();

        printf("Data de nascimento:");
        printf("\nDia: ");
        scanf("%2s", &dia1);
        getchar();

        printf("Mes: ");
        scanf("%2s", &mes1);
        getchar();

        printf("Ano: ");
        scanf("%4s", &ano1);
        getchar();



        printf("Telefone: ");
        scanf(" %9[^\n]s", &telefone);
        getchar();

        printf("Email: ");
        scanf(" %100[^\n]s", &email);
        getchar();

        printf("Rua: ");
        scanf(" %100[^\n]s", &rua);
        getchar();


        printf("Numero: ");
        scanf("%3s", &numero);
        getchar();

        printf("Bairro: ");
        scanf(" %100[^\n]s", &bairro);
        getchar();

        printf("Cidade: ");
        scanf(" %100[^\n]s", &cidade);
        getchar();

        printf("Estado: ");
        scanf(" %100[^\n]s", &estado);
        getchar();

        printf("CEP: ");
        scanf("%10s", &cep);
        getchar();

        printf("Data do diagnostico: ");
        printf("Dia: ");
        scanf("%2s", &dia2);
        getchar();
        printf("Mes: ");
        scanf("%2s", &mes2);
        getchar();
        printf("Ano: ");
        scanf("%4s", &ano2);
        getchar();
        printf("Comorbidade: ");
        scanf(" %100[^\n]s",&comorbidade);


        // Jogando na Tela
        printf( "{" );
        printf("\n\tNome: %s,", &nome);
        printf("\n\tCPF: %s",&cpf);
        printf("\n\tData de Nascimento: %s/%s/%s", &dia1,&mes1,&ano1);
        printf("\n\tRua: %s", &rua );
        printf("\n\tNumero: %s",&numero );
        printf("\n\tBairro: %s", &bairro );
        printf("\n\tCidade: %s", &cidade );
        printf("\n\tEstado: %s", &estado );
        printf("\n\tCEP: %s", cep );
        printf("\n\tData do Diagnostico:%s/%s/%s",&dia2,&mes2,&ano2);
        printf("\n\tComorbidade: %s", &comorbidade);
        printf( "\n}" );

        // Escrevendo no Arquivo
        fprintf(file, "{" );
        fprintf(file,"\n\tNome: %s,", &nome);
        fprintf(file,"\n\tCPF: %s,",&cpf);
        fprintf(file,"\n\tTelefone: %s,", &telefone);
        fprintf(file,"\n\tEmail: %s,", &email);
        fprintf(file,"\n\tData de Nascimento: %s/%s/%s,", &dia1,&mes1,&ano1);
        fprintf(file,"\n\tRua: %s,", &rua );
        fprintf(file,"\n\tNumero: %s,",&numero );
        fprintf(file,"\n\tBairro: %s,", &bairro );
        fprintf(file,"\n\tCidade: %s,", &cidade );
        fprintf(file,"\n\tEstado: %s,", &estado );
        fprintf(file,"\n\tCEP: %s,", cep );
        fprintf(file,"\n\tData do Diagnostico: %s/%s/%s,",&dia2,&mes2,&ano2);
        fprintf(file,"\n\tComorbidade: %s", &comorbidade);
        fprintf(file, "\n}" );

        // fechando  o arquivo
        fclose(file);
    }

    cls();
    menu();

    
}