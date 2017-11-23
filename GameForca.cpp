#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>

char palavra[30],dica[50],palEscondida[30],letra;
char facil[][30]={"Barack Hussein Obama","Maquiavel","Mickey Mouse","duzentos e cinquenta","interrogacao","logradouro","Exercito Brasileiro","Carnaval"};
char dicaF[][50]={"presidente dos Estados Unidos de 2009 a 2017","autor de O Príncipe","principal personagem da Disney","anos em dois séculos e meio","sinal indicativo de pergunta","rua pública","missao de paz no haiti","principal evento comemorado no brasil"};
char medio[][30]={"linguagem de programacao","matematica","Renascimento","Russia","lenda","Pablo Picasso","Hades","francesa"};
char dicaM[][50]={"comunicação de instruções para um computador","ciência do raciocínio lógico e abstrato","período da história da Europa","maior país do mundo","significado de legend","autor da obra Guernica","deus grego","nacionalidade do sociólogo e filósofo Durkheim"};
char dificil[][30]={"Descartes","ciclone tropical","Guinea Bissau","Brasil","trilhares","paleolitico","mitologia","Brexit"};	
char dicaD[][50]={"frase Penso logo existo!","pertubação na atmosfera terrestre","um dos países mais pobres do mundo","local da invencao do chuveiro elétrico","casas decimais do número pi","periodo pré-histórico de descoberta do fogo","esplicacao da origem das coisas","saida do Reino Unido da União Europeia"}; 

int chance,x;
int nivel;

void SorteioPalavra(){
	srand(time(NULL));
	int sorteio;
	sorteio=rand()%8;
	switch(nivel){
		case 1:
			strcpy(palavra,facil[sorteio]);
			strcpy(dica,dicaF[sorteio]);
			break;
		case 2:
			strcpy(palavra,medio[sorteio]);
			strcpy(dica,dicaM[sorteio]);
			break;
		case 3:
			strcpy(palavra,dificil[sorteio]);
			strcpy(dica,dicaD[sorteio]);
			break;
	}
}

void wins(){
printf(	"\n``````````````.++++++++++++++++++++++++++++++++,`````````````````````````\n"
		"``````````````````````++``````````````xxxxxxxxxxxxx``````````````````````\n"
		"                     `++`                       `                        \n"
		"``````````````````````++````````````````+@@@@@@@+````````````````````````\n"
		"``````````````````````++```````````````@@@@@@@@@@#`` ````````````````````\n"
		"``````````````````````++``````````````:@@+ ````+@@: `````````````````````\n"
		"````````````````````` ++``````````````@@#```````@@@``````````````````````\n"
		"``````````````````````++``````````````@@'`````` '@@``````````````````````\n"
		",,,,,,,,,,,,,,,,,,,,,,++,,,,,,,,,,,,,,#@@;,,,,,;@@+,,,,,,,,,,,,,,,,,,,,,,\n"
		"````````````````````` +;````````````````@@@@@@@@@````````````````````````\n"
		"``````````````````````+:```````````@@```:@@@@@, ```@@`` `````````````````\n"
		"`````````````````````.+.` `````````@@@` ``'@@````@@@`````````````````````\n"
		"`````````````````````.+.````````````@@@```#@@ ``@@@``````````````````````\n"
		"`````````````````````,+``````````````@@@@@@@@@@@@````` ``````````````````\n"
		"`````````````````````:+`````````````  @@@@@@@@@ ````` ```````````````````\n"
		"`````````````````````;+````````````````` `@@``'`````````````````````````\n"
		"`````````````````````;+```````````````` ``@@`````````````````````````````\n"
		"`````````````````````'+```````````````````@@` ```````````````````````````\n"
		"`````````````````````++``````````````````#@@`````````````````````````````\n"
		"`````````````````````++```````````````  @@@@.````````````````````````````\n"
		"`````````````````````++```````````````.@@@@@@````````````````````````````\n"
		"                     ++              :@@@; @@@                           \n"
		"`````````````````````++`````````````#@@@````@@@ `````````````````````````\n"
		"`````````````````````++`````````````@@@`````,@@@ ````````````````````````\n"
		"`````````````````+++++++++````````````````````;@@, ``````````````````````\n"
		"******************VICTORY***********************************************\n\n");	
}

void gameOver(){
printf(	"\n``````````````.++++++++++++++++++++++++++++++++,`````````````````````````\n"
		"``````````````````````++````````````````````||```````````````````````````\n"
		"                     `++`                   ||  `                        \n"
		"``````````````````````++````````````````+@@@@@@@+````````````````````````\n"
		"``````````````````````++```````````````@@@@@@@@@@#`` ````````````````````\n"
		"``````````````````````++``````````````:@@+ ````+@@: `````````````````````\n"
		"````````````````````` ++``````````````@@#`X```X`@@@``````````````````````\n"
		"``````````````````````++````````````` @@.`X```X`.@@``````````````````````\n"
		",,,,,,,,,,,,,,,,,,,,,,++,,,,,,,,,,,,,x#@@.......@@+x,,,,,,,,,,,,,,,,,,,,,\n"
		"````````````````````` +;`````````````x``@@@@@@@@@``x`````````````````````\n"
		"``````````````````````+:`````````````xx``:@@@@@, `x``````````````````````\n"
		"`````````````````````.+.` ````````````xxxxxxxxxxxx``````````````````````\n"
		"`````````````````````.+.``````````````````#@@ ```````````````````````````\n"
		"`````````````````````,+`````````````````;@@@@.```````````````````````````\n"
		"`````````````````````:+`````````````  +@@@@@@@:` ````````````````````````\n"
		"`````````````````````;+`````````````#@@@@#@@@@@'`````````````````````````\n"
		"`````````````````````;+````````````#@@@+``@@`@@@#````````````````````````\n"
		"`````````````````````'+````````````,@; ```@@` @@@#```````````````````````\n"
		"`````````````````````++``````````````````.@@`` #@@```````````````````````\n"
		"`````````````````````++``````````````````;@@`````````````````````````````\n"
		"`````````````````````++```````````````  @@@@.````````````````````````````\n"
		"`````````````````````++```````````````.@@@@@@````````````````````````````\n"
		"                     ++              :@@@; @@@                           \n"
		"`````````````````````++`````````````#@@@````@@@ `````````````````````````\n"
		"`````````````````````++`````````````@@@`````,@@@ ````````````````````````\n"
		"`````````````````+++++++++````````````````````;@@, ``````````````````````\n"
		"*****************GAME OVER***********************************************\n\n");
}

void logo(){
	printf("\n   .......................SEJA BEM VINDO AO GAME........................\n"
	"   ..FFFFFFFFFFFFFFF..................................................... ...\n"
	"  ...FFFFFFFFFFFFFFF..........................................................\n"
	" ....FFFFF.................................................................... \n"
	" ....FFFF...............oOOOOOOOo......RRRRRRRRRr.....cCCCCCCCc.......AAAAAAA. \n"
	" ....FFFFFFFFFFFFF....oOOOOOOOOOOOo...RRRRRRRRRRRr..cCCCCCCCCCCC....AAAAAAAAA. \n"  
	" ....FFFFFFFFFFFFF...oOOOOO...OOOOOo..RRRRr...RRR..cCCCC ....CCc..AAAAA ..AAA. \n"
	" ....FFFF............oOOOO.....OOOOo..RRRr....RRR cCCCC... ... ..AAAA ....AAA. \n"
	" ....FFFF............oOOO.......OOOo..RRR.........cCCC...........AAAA.....AAA: \n"
	" ....FFFF............oOOO.......OOOo..RRR.........cCCC...........AAAA.....AAA. \n"
	" ....FFFF............oOOOO.....OOOo...RRR.........cCCCc..........aAAA... .AAA. \n"  
	" C...FFFF.............OOOOOOOOOOOO....RRR..........cCCCCCCCCCCCC..aAAAAAAAAAa. \n"  
	" Cc..FFFF..............oOOOOOOOOo.....RRR...........cCCCCCCCCCc....aaAAAAAAAAa \n"
	" .Ccc......................................................................... \n"         
	" ...CCc........ ..ccCCCCCCCCCC..............cCCCCCCCCCCCCCCCCCCCCc............ \n"          
	" .....cCCCCCCCCCCcc............CcC.......:CCCC...................CCCc......... \n"         
	" ................................cc...CCCCc...........................CC...... \n"       
	" .................................CCCCC.......... ... ..... ...........CCc.... \n"     
	" .... ........     .................Cc................................. CC.... \n"     
	" ...  ...............................CC...............................CCc..... \n"     
	" .................................... CCCcc........................CCC........ \n"       
	"  ........................................CcCCC.................cccCc......... \n"         
	"     .........................................ccCCCCCCCCCCCCCCCCCccCC......... "); 
}

void dificuldade(){
	printf("\n\n Selecione o nível de dificuldade: \n");
	printf(" 1- FÁCIL     2- MÉDIO      3- DIFÍCIL\n");
	scanf("%d",&nivel);
	fflush(stdin);
	do{
		if(nivel!=1&&nivel!=2&&nivel!=3){
			printf("INVÁLIDO, POR FAVOR DIGITE NOVAMENTE: ");
			scanf("%d",&nivel);
			fflush(stdin);
		}	
	}while(nivel!=1&&nivel!=2&&nivel!=3);
	system("cls");
}

void palavraSecreta(){
	system("cls");
	SorteioPalavra();
	for(int x=0;x<=strlen(palavra);x++){
		if(x!=strlen(palavra)){
			if(palavra[x]==' '){
				palEscondida[x]=' ';
			}else{
				palEscondida[x]='_';
			}
		}else{
		palEscondida[x]='\0';
		}
	}
}

void forca(){
	if(chance==4){
		printf(" _______\n");
		printf(" |     |\n");
		printf(" |     \n");
		printf(" |\n");
		printf(" |\n");
		printf(" |\n");
		printf(" |");
		printf("%s",palEscondida);	
	}
	if(chance==3){
		printf(" _______\n");
		printf(" |     |\n");
		printf(" |    (oo)\n");
		printf(" |\n");
		printf(" |\n");
		printf(" |\n");
		printf(" |");
		printf("%s",palEscondida);
	}
	if(chance==2){
		printf(" _______\n");
		printf(" |     |\n");
		printf(" |    (oo)\n");
		printf(" |     ||\n");
		printf(" |\n");
		printf(" |\n");
		printf(" |");
		printf("%s",palEscondida);
	}
	if(chance==1){
		printf(" _______\n");
		printf(" |     |\n");
		printf(" |    (oo)\n");
		printf(" |    /||%c \n",92);
		printf(" |\n");
		printf(" |\n");
		printf(" |");
		printf("%s",palEscondida);
	}
	if(chance==0){
		printf(" _______\n");
		printf(" |     |\n");
		printf(" |    (xx)\n");
		printf(" |    /||%c \n",92);
		printf(" |     /%c \n",92);
		printf(" |\n");
		printf(" |");
		printf("%s",palEscondida);
	}	
}

void logica(){
	char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char alfabetoM[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	bool letraRepetida;
	do	{
		forca();
		x=0;
		printf("\n\nDICA: %s\n",dica);
		printf("\nLETRAS NÃO UTILIZADAS: \n");
		for(int z=0;z<=25;z++){
			printf(" %c",alfabeto[z]);
		}
		letraRepetida=true;
		do{
			printf("\n\nDigite uma letra: ");
			scanf("%c",&letra);
			fflush(stdin);
			for(int a=0;a<=25;a++){
				if(letra==alfabeto[a]||tolower(letra)==alfabeto[a]||toupper(letra)==alfabetoM[a]||letra==alfabetoM[a]){
					if(alfabeto[a]=='*'){
						printf("ESTÁ LETRA JÁ FOI UTILIZADA!");
					}else{
						alfabeto[a]='*';
						letraRepetida=false;
					}
				}
			}
			if(isdigit(letra)){
				printf("\nVOCÊ NÃO DIGITOU UMA LETRA!\n");
			}
		}while(letraRepetida==true);
		system("cls");
		for(int a=0;a<strlen(palavra);a++){
			if(letra==palavra[a]||toupper(letra)==palavra[a]||tolower(letra)==palavra[a]){
				palEscondida[a]=palavra[a];
				x++;
			}
		}
		if(x==0) {
			chance--;
			if(chance==0) {
				forca();
				printf("\n SUAS CHANCES ACABARAM!");
				Sleep(3000);
				gameOver();
				break;
			}else{
				printf("\n VOCÊ ERROU! AINDA RESTAM %d CHANCES\n",chance); 
			}
		}else{
			printf("\n A LETRA (%c) PERTENCE A PALAVRA!\n\n",letra);
		}
		if(strcmp(palEscondida,palavra)==0){
		system("cls");
			printf("\n\n*****");
			printf("%s",palavra);
			printf("*****\n\n");
			printf("\n VOCÊ DESCOBRIU A PALAVRA SECRETA, PARABÉNS!\n\n");
			chance=0;
			Sleep(3000);
			wins();
		} 
	} while(chance>0);
}

int main(){
	int jogar;

	setlocale(LC_ALL, "Portuguese");
	logo();
	Sleep(3000);
do{	
	chance=4;
	system("cls");
	dificuldade();
	palavraSecreta();
	logica();
	do{
		printf("Deseja jogar novamente? ");
		printf("1- SIM   2- NÃO ");
		scanf("%d",&jogar);
		fflush(stdin);
	}while(jogar!=1&&jogar!=2);
}while(jogar==1);

system("pause");
	return 0; 
}
