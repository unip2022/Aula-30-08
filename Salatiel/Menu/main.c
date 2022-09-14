#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


//using namespace std;

int main()
{
    //Junto do #include <locale.h>, é para adicionar acentos
    setlocale(LC_ALL,"Portuguese");
    //Foi iniciado com o numero 1 apenas para a variavel nao ficar nula, usar um valor que tenha no menu
    int continuar=1;

    do
    {
        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma opção válida e aperte a tecla enter\n\n");
        printf("1. Gestão de TI\n");
        printf("2. Análise d Desenvolvimento de Sistemas\n");
        printf("3. Segurança da Informação\n");
        printf("4. Media do aluno\n");
        printf("5. Diferença maior e menor\n");
        printf("6. MediaADS\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        //Abaixo serve para limpar o prompt de comando, cls e clear fazem basicamente a mesma coisa
        system("cls || clear");

        //switch case, para substituir if's encadeados, continuar vai ser substituido ali em cima, e vai entrar no que foi digitado
        switch(continuar)
        {
            case 1:
                gestaoTI();
                break;

            case 2:
                analiseDesenvolvimentoSistemas();
                break;

            case 3:
                segurancaInformacao();
                break;

            case 4:
                mediaaluno() ;
                break;

            case 5:
                difmaiormenor() ;
                break;

            case 6:
                MediaADS();
                break;

            case 0:
                sair();
                break;

            //default serve para, caso não seja escrito nenhum case
            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
//Função que nao retorna nada, mas é usado para o codigo ficar mais organizado
void gestaoTI()
{
    printf("Gestão de TI é a atividade que coordena todos os processos relacionados à tecnologia da informação dentro de uma empresa. Logo, o gestor de TI é o profissional responsável por garantir a máxima eficiência no uso dos recursos humanos e tecnológicos, otimizando a performance da organização.\n");
}

void analiseDesenvolvimentoSistemas()
{
    system("cls || clear");
    printf("O analista e desenvolvedor de sistemas é o profissional responsável por desenvolver, projetar, analisar, implementar e realizar a manutenção de sistemas de informação de diversos setores.\n");
}

void segurancaInformacao()
{
    system("cls || clear");
    printf("Segurança da informação é a prática que mantém os dados sensíveis em sigilo, a defesa do que não é público\n");
}

void mediaaluno()
{
    float nota1;
  	float nota2;
  	float nota3;
  	float nota4;
  	float mediaAnual;
  	float mediaFinal;

  	printf("Digite a nota 1 : ");
	scanf("%f", &nota1);
  	printf("Digite a nota 2 : ");
	scanf("%f", &nota2);
	printf("Digite a nota 3 : ");
	scanf("%f", &nota3);
	printf("Digite a nota 4 : ");
	scanf("%f", &nota4);

  	mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4 ;

    system("cls || clear");

	if (mediaAnual >= 7)
  	{
  		printf( "APROVADO !!!");
    }
  	else
  	{
	    printf( "REPROVADO !!!");
  	}

}

void difmaiormenor()
{
      	int n1;
  	int n2;
  	int result;

  	printf("Digite o valor do primeiro numero : ");
	scanf("%d", &n1);
  	printf("Digite o valor do segundo numero : ");
	scanf("%d", &n2);

  	if (n1 > n2)
  	{
  		result = n1 - n2;
    }
  	else
  	{
	    result = n2 - n1;
  	}
  	system("cls || clear");
  	printf("O Resultado da diferença do maior numero pelo menor e : %d", result);
  	return 0;
}

void MediaADS()
{

    float Np1;
    float Np2;
    float Pim;
    float Media;
    int   Presenca;
    int   Falta;

    printf ("Digite a nota da Np1: ");
    scanf  ("%f", &Np1);
    printf ("Digite a nota da Np2: ");
    scanf  ("%f", &Np2);
    printf ("Digite a nota do Pim: ");
    scanf  ("%f", &Pim);
    printf ("Quantas presencas voce teve no semestre: ");
    scanf  ("%d", &Presenca);

    Falta = (50-Presenca);
    Media = ((Np1*0.4) + (Np2*0.4) + (Pim*0.2));

    if (Falta>12 &&  Media>=5)
    {
        printf (
            "voce faltou %d, ou seja mais 75%\n"
            "voce foi reprovado\n", Falta);
    }

    if (Media>=5 && Falta<=12)
    {
        printf (
            "Sua Media e sua presenca foram %d,e %.2f, respectivamente. "
            "Ambas atingiram o necessario\nAprovado", Presenca,Media);
    }
    if (Falta<=12 && Media<5)
    {
        printf (
             "Sua media foi %.2f, ou seja menor que 5\n"
             "Reprovado",Media);
    }
   if  (Falta>12 && Media<5)
   {
       printf (
               "Sua media e sua nota foram %.2f e %d,respectivamente"
               ". Ambas nao atingiram o necessario\nReprovado",Media,Falta);

   }


}


void sair()
{
    printf("Obrigado por visitar nossa lista de cursos\n");
}
