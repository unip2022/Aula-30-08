#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <iostream>

//using namespace std;

int main()
{
    //Junto do #include <locale.h>, � para adicionar acentos
    setlocale(LC_ALL,"Portuguese");
    //Foi iniciado com o numero 1 apenas para a variavel nao ficar nula, usar um valor que tenha no menu
    int continuar=1;

    do
    {
        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma op��o v�lida e aperte a tecla enter\n\n");
        printf("1. Gest�o de TI\n");
        printf("2. An�lise d Desenvolvimento de Sistemas\n");
        printf("3. Seguran�a da Informa��o\n");
        printf("4. Media do aluno\n");
        printf("5. Diferen�a maior e menor\n");
        printf("6. Em ordem tres numeros\n");
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
                ordemtresnumeros() ;
                break;

            case 0:
                sair();
                break;

            //default serve para, caso n�o seja escrito nenhum case
            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
//Fun��o que nao retorna nada, mas � usado para o codigo ficar mais organizado
void gestaoTI()
{
    printf("Gest�o de TI � a atividade que coordena todos os processos relacionados � tecnologia da informa��o dentro de uma empresa. Logo, o gestor de TI � o profissional respons�vel por garantir a m�xima efici�ncia no uso dos recursos humanos e tecnol�gicos, otimizando a performance da organiza��o.\n");
}

void analiseDesenvolvimentoSistemas()
{
    system("cls || clear");
    printf("O analista e desenvolvedor de sistemas � o profissional respons�vel por desenvolver, projetar, analisar, implementar e realizar a manuten��o de sistemas de informa��o de diversos setores.\n");
}

void segurancaInformacao()
{
    system("cls || clear");
    printf("Seguran�a da informa��o � a pr�tica que mant�m os dados sens�veis em sigilo, a defesa do que n�o � p�blico\n");
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
  	printf("O Resultado da diferen�a do maior numero pelo menor e : %d", result);
  	return 0;
}

void ordemtresnumeros()
{
    int num1, num2, num3, temp;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    cout << "Numero 3: ";
    cin >> num3;

    if(num2 > num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num3 > num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if(num3 > num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    cout <<num1<<" >= "<<num2<<" >= "<<num3<<endl;
}

void sair()
{
    printf("Obrigado por visitar nossa lista de cursos\n");
}
