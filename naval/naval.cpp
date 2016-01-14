#include <winsock2.h> //la cabezera para usar las funciones de winsock
#include <stdio.h>
#include"iostream"
#include"conio.h"
#include"time.h";
#include"dos.h";
#include"windows.h";
/*linkamos a la libreria del winsock, también puedes hacerlo desde
  project->settings->link si usas ms visual c++ */
#pragma comment(lib,"ws2_32.lib")
using namespace std;

void main()
{
   COORD coordenada;
   int x=0,y=0,d,c=0,l=0,cont=0;
   WSADATA wsa;
   SOCKET sock;
   struct hostent *host;
   struct sockaddr_in direc;
   int conex;
   char Buffer[1024];
   int len;
/*  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 10);
cout<<"                           GUIA PARA USAR EL JUEGO"<<endl;
Sleep(700);
system("CLS");
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 10);
cout<<"Ingrese usuario"<<endl;
Sleep(1500);
cout<<"PC"<<endl;
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 7);
cout<<"presionamos ENTER para continuar"<<endl;
Sleep(1500);
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 10);
cout<<"Ingrese contraseña"<<endl;
Sleep(1500);
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 10);
cout<<"server9999"<<endl;
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 7);
cout<<"presionamos ENTER para continuar"<<endl;
Sleep(1500);
system("CLS");
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 9);
for(int x=0;x<20;x++)
{
cout<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<endl;
}
cout<<"si lo desea en el eje X presione 1 o si lo desea en el eje Y presione 2"<<endl;
Sleep(1500);
cout<<"1"<<endl;
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 7);
cout<<"presionamos ENTER para continuar"<<endl;
Sleep(1500);
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 9);
cout<<"ingrese las cordenadas en eje X"<<endl;
Sleep(1500);
cout<<"15"<<endl;
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 7);
cout<<"presionamos ENTER para continuar"<<endl;
Sleep(1500);
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 9);
cout<<"ingrese las cordenadas en eje Y"<<endl;
Sleep(1500);
cout<<"15"<<endl<<endl;
COORD co2;
	co2.X=15;
	co2.Y=15;

		SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co2);
	cout<<"000"<<endl;

SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 9);
COORD co3;
	co3.X=0;
	co3.Y=28;

		SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co3);
cout<<"ingrese disparo"<<endl;

Sleep(1500);
cout<<"12"<<endl;
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 7);
cout<<"presionamos ENTER para enviar el disparo"<<endl;
cout<<"ESPERAMOS A QUE EL USUARIO DE LA OTRA MAQUINA NOS CONTRAATAQUE"<<endl;
Sleep(1500);
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 9);
COORD co4;
	co4.X=0;
	co4.Y=32;

		SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co4);
	cout<<"Nos atacan!!"<<endl;
Sleep(1500);
cout<<"12"<<endl;


Sleep(1500);
system("cls");
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 2);
cout<<"          ,::,:,.               i::                         "<<endl;                             
cout<<"       .LEU:iuYLU7iii:U,       Y7:iYi       .         "<<endl;                                   
cout<<"       2UY.:L   L,...JL        u....r7     ;P.         "<<endl;                                  
cout<<"       NjL j   iJUi i7         L:.., 7: .:7F:Y          "<<endl;                                 
cout<<"       :J:,J   jri,.U  :L:     .U.....rP27iUi7           "<<endl;                                
cout<<"         :iu. :Uir J. ,Y:B.     :L.,.. ::,.,,7                    vX  "<<endl;                   
cout<<"              7Li:,L  j. BB      :7...  .:i:7U.ir:,              rB:   "<<endl;                  
cout<<"              vri,r,  J. vBB7     Y.  iS7LL7Y..OFXqB0:          GBB    "<<endl;                  
cout<<"              Yii.L  .Y   BBBB.  ,r  YkBiULBE BBEBBuBBB;      UBBB:    "<<endl;                  
cout<<"              Lrr.Y  :v.  BBBBBX ,  MBB7JS.B BB u5Y S7BBF   jBBBBq     "<<endl;                  
cout<<"              Yjr.L  .Y  ; YBBBBBZ.MBB: q B iB iBG 2BBBBB.FBBBBB8      "<<endl;                  
cout<<"              uN.7,   Y..U  .BBBBBBBBB:ir7B:LB YBL.BBBBBBBBBBBBJ       "<<endl;                  
cout<<"             .U,.J   ;i j     LBBBBBBBBBqULJSSMBBBBBBBBBBBBBBY         "<<endl;                  
cout<<"             ii L  .rriL7   .:. .MBBE1P7:UZBBBBBBBOk:r5BBBq,           "<<endl;                  
cout<<"             L.7i.7UYr,.jriii...:  OBMBBBBBBBBBZL .7FU.7Y              "<<endl;                  
cout<<"            ikiUJUr:     r:,.:LY,  BBBBBBBBBBB uuOBBBBOUi. .UU         "<<endl;                  
cout<<"              .             ,i15ii7BBBBBBBBBB:JYBBBBBBiBL:7rqkj.       "<<endl;                  
cout<<"                        :1OBBBBLjiiBBBBBUjri 2B:UkujJi UB7LuJMBBBBP7.  "<<endl;                  
cout<<"                      JBBBBBMSP11. :BBL::,:,:BBE:ii::.v01.. ::iYEBBBB2:,   :i "<<endl;           
cout<<"                   LivUB0r     iX  ;BB::.rMv.. .iNv.iUFr:: r,      YBB:J7 :SL  "<<endl;          
cout<<"                   i5irG       :8 ,BBB   :BBBBBBBBS  ii:r,i; :i     :L;7i j:.   "<<endl;         
cout<<"                      .kk.    iZiiBBBU    :LkBBEur    :L7;,ir: :JUr i:r: L:      "<<endl;        
cout<<"                        LNZX0ES: BBBB.             ,v. ,:r:iriir;;.:7.r i;.                   "<<endl;       
cout<<"                           .    GBBBB1             ru: :Li.7;j:iiY21.r7Y7Y7                    "<<endl;        
cout<<"                              .Bi.BBBBY            .:;:.   ,:Lv:     :...                  "<<endl;        
cout<<"                               .     r;;                    U,Yr                         "<<endl;        
cout<<"                                                            ir:                  "<<endl;        

Sleep(1500);
system("CLS");
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 2);
cout<<"\n\n\n\n\n\n       CCCCCC    KK   KK     GGGGGG     A       MM       MM EEEEEEEE  SSSSSS          "<<endl;
cout<<"           CC    KK  KK      G         A A      MMMM   MMMM EE        SS         "<<endl;
cout<<"           CC      KKKK     G   GGG   A   A     MM   MM  MM EEEEE     SSSSSS           "<<endl;
cout<<"           CC    KK  KK      G    G  AAAAAAA    MM       MM EE            SS   "<<endl;
cout<<"           CCCCCCC   KK   KK       GGGGG A       A   MM       MM EEEEEEEE  SSSSSS             "<<endl;
cout<<"\n   PPPPPPP  RRRRRRR      EEEEEEE SSSSSSS EEEEEEE NN        NN TTTTTTTT SSSSSSS"<<endl;
cout<<"   PP     P RR     R     EE      SS      EE      NN NN     NN    TT    SS  "<<endl;
cout<<"   PPPPPPP  RRRRRRR      EEEEEE  SSSSSSS EEEEEE  NN   NN   NN    TT    SSSSSSS    "<<endl;
cout<<"   PP       RR     RR    EE           SS EE      NN     NN NN    TT         SS "<<endl;
cout<<"   PP       RR       RR  EEEEEE  SSSSSSS EEEEEE  NN        NN    TT    SSSSSSS    "<<endl;	
Sleep(1500);
	system("CLS");
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 2);
//system("color 88");
	cout<<"\n\n\n\n\n\n            W      W       W  A    TTTTTTTT   EEEEEEEE   RRRRRRR"<<endl;
cout<<"             W     W      W  A A      TT      EE         RR     R"<<endl;        
cout<<"              W    W     W  A   A     TT      EEEEE      RRRRRRR "<<endl;     
cout<<"               W   W    W  AAAAAAA    TT      EE         RR   RR "<<endl;           
cout<<"                WWWWWWWW  A       A   TT      EEEEEEEE   RR    RR"<<endl;      

cout<<"\n                FFFFFFF   IIIIIIIIII   GGGGGG   HH   HH TTTTTTTT  "<<endl;
cout<<"                FF            II       GG       HH   HH    TT  "<<endl;
cout<<"                FFFFFFF       II       GG  GGGG HHHHHHH    TT  "<<endl;
cout<<"                FF            II       GG    GG HH   HH    TT       "<<endl;
cout<<"                FF        IIIIIIIIII   GGGGGGG  HH   HH    TT  "<<endl;

SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 6);
cout<<"\n\n\n\n\n\n _________ll___________ll_______";
cout<<"\n \ O  O  O   O   O  O  O  O  O  /";
cout<<" \n \ O  O   O  O  O  O   O  O   /";
cout<<" \n  \________________________<O";
for(int x=0;x<51;x++)
{
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 2);
cout<<"o";
Sleep(100);
}*/

 system("CLS");
 Sleep(1000);
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 10);
char usu[200],cade[200],clave[10];
cout<<"ingrese usuario"<<endl;
gets(usu);
cout<<"ingrese contraseña"<<endl;
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 0);
gets(clave);
strcpy(cade,usu);
strlwr(clave);
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 10);
if(strcmp(clave,"server9999")==0)
{
cout<<"\n\n\n\n\n\n                             Espere";
for(int x=0;x<24;x++)
{
cout<<".";
Sleep(700);
}
}
    
   //inicializamos
   WSAStartup(MAKEWORD(2,2),&wsa);

   //resolvemos el nombre de dominio localhost, esto se resolverá a 127.0.0.1
   host=gethostbyname("127.0.0.1");

   //creamos el socket
   sock=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
   if (sock==-1)
   {
      cout<<"Error al crear el socket";
      //return -1;
   }
   //Definimos la dirección a conectar que hemos recibido desde el gethostbyname
   //y decimos que el puerto al que deberá conectar es el 9999 con el protocolo ipv4
   direc.sin_family=AF_INET;
   direc.sin_port=htons(9999);
   direc.sin_addr = *((struct in_addr *)host->h_addr);
   memset(direc.sin_zero,0,8);

   //Intentamos establecer la conexión
   conex=connect(sock,(sockaddr *)&direc, sizeof(sockaddr));
  system("CLS");
   if (conex==-1)  //si no se ha podido conectar porque no se ha encontrado el host o no
                  //está el puerto abierto
   {
      cout<<"No se ha podido conectar\n";
      //return -1;
   }
   //system("CLS");
   SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 9);
   /*COORD co3;
	co3.X=0;
	co3.Y=26;

		SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co3);
		cout<<usu;*/
 	for(int x=0;x<20;x++)
{
cout<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<"_|"<<endl;
}
	cout<<endl;
		int barco[20][20];
		int a;
		cout<<"si lo desea en el eje X presione 1 o si lo desea en el eje Y presione 2"<<endl;
		cin>>a;
		if(a==1)
		{
		cout<<"ingrese la cordenada en el eje X"<<endl;
		cin>>x;//barco[x][y];
		//x++;
		cout<<"ingrese la cordenada en el eje y"<<endl;
		cin>>y;//barco[x][y];
		//y++;
		x=x-1;
		x=x*2;

		y=y-1;
		coordenada.X=x;
		coordenada.Y=y;
		SetConsoleCursorPosition (GetStdHandle
		(STD_OUTPUT_HANDLE), coordenada);
		barco[x][y]=0;
		cout<<barco[x][y];
	
		coordenada.X=x+2;
		coordenada.Y=y;
	SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), coordenada);
	barco[x][y]=0;
	cout<<barco[x][y];

	coordenada.X=x+4;
	coordenada.Y=y;
	SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), coordenada);
	barco[x][y]=0;
	cout<<barco[x][y];
		}

		else
		{
		cout<<"ingrese la cordenada en el eje X"<<endl;
		cin>>x;//barco[x][y];
		//x++;
		cout<<"ingrese la cordenada en el eje y"<<endl;
		cin>>y;//barco[x][y];
		//y++;
		x=x-1;
		x=x*2;

		y=y-1;
		coordenada.X=x;
		coordenada.Y=y;
		SetConsoleCursorPosition (GetStdHandle
		(STD_OUTPUT_HANDLE), coordenada);
		barco[x][y]=0;
		cout<<barco[x][y];
	
		coordenada.X=x;
		coordenada.Y=y+1;
	SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), coordenada);
	barco[x][y]=0;
	cout<<barco[x][y];

	coordenada.X=x;
	coordenada.Y=y+2;
	SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), coordenada);
	barco[x][y]=0;
	cout<<barco[x][y];
	}
   while (len!=-1 && strcmp(Buffer,"salir")!=0) //mientras el socket no se haya desconectado
                                               //y no se escriba salir
   {
Y:  
		COORD co2;
	co2.X=0;
	co2.Y=27;

		SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co2);
		  cout<<"Ingrese disparo"<<endl;
      fgets(Buffer,1023,stdin);  //pedir texto a enviar por pantalla
      len=send(sock,Buffer,strlen(Buffer),0); //enviar el texto que se ha introducido
	   
   goto X;
   }

     X:  while (len!=0) //mientras estemos conectados con el otro pc
   {
      len=recv(sock,Buffer,1023,0); //recibimos los datos que envie
	  Buffer[len]=0;
	  /*COORD co6;
	  
	co6.X=0;
	co6.Y=32;

		SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co6);*/
	  d=atoi(Buffer);
		 
		 
		 SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 2);
		 //cout<<d;
		 d=d-1;
		 d=d*2;

     COORD	co7;
		 co7.X=d;
		 co7.Y=d/2;
	SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co7);
		cout<<"x"; 
		 if (d==x)
		 {
		 COORD co6;
	  
	co6.X=0;
	co6.Y=31;

		SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co6);

			 cout<<"YA VALIMOS...NOS HAN DADO!!!";
			 cont++;
			 if (cont==3)
			 {
			 goto E;
			 }
		 }
		 if (len>0)  //si seguimos conectados
      {
    COORD co2;
	co2.X=0;
	co2.Y=29;
	SetConsoleCursorPosition (GetStdHandle
	(STD_OUTPUT_HANDLE), co2);
		  //Buffer[len]=0; //le ponemos el final de cadena
         printf("Nos atacan!!: %s",Buffer); //imprimimos la cadena recibida
		 goto Y;
      }


   //return 0;
	}

E:;
}