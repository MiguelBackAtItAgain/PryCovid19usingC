/******************************************************************************

Datos de entrada: 

char nombre[10],apellido[10],correo[50];
int reset,convencional, eleccion 1,2 y 3,sino,a;
long telefono,cedula;


Funciones

void datospersonales (int);
void menu (int);
void juego (int);

Proceso

Main

mostrar en pantalla "Bienvenido a ¡Sálvate del COVID!\n"
llamar a datospersonales con edad.



Datos personales

    int telefono=0,cedula=0,edad=0,reset=1
    strcpy(nombre,""),strcpy(apellido,""),strcpy(correo,"")
    pantalla "Ingrese su nombre y apellido"
    leer nombre
    leer apellido
    pantalla "Ingrese su edad"
    leer edad
    mientras (edad<0  || edad>100)
    {
        pantalla "Ingresa una edad válida por favor: "
        leer edad)
    }
    printf("Ingrese su número de cédula: ");
    scanf("%ld",&cedula);
    while (cedula>9999999999 || cedula<1000000000)
    {
        cedula=0;
        pantalla "Ingresa una cédula correcta por favor: "
        leer cedula
    }
    pantalla "Ingrese su número de celular: "
    leer telefono
    while (telefono<100000000 || telefono>999999999)
    {
        telefono=0;
        pantalla "ingresa un número de celular correcto por favor: "
        leer telefono
    }
    pantalla "Ingrese su número convencional: "
    leer convencional
    while (convencional<1000000 || convencional>9999999)
    {
        convencional=0;
        pantalla "Ingresa un número convencional correcto por favor: ",nombre);
        leer convencional
    }
    pantalla"Ingrese su correo: "
    leer correo
    system("clear");
    pantalla "Nombre:%s %s
    Edad:%i
    Cédula:%ld
    Celular:%ld
    Convencional:%i
    Correo:%s
    ¿Correcto?
    0.Sí
    1.No
    (nombre,apellido,edad,cedula,telefono,convencional,correo);
    leer reset
    while (reset<0 || reset>1)
    {
        pantalls "Por favor %s,ingresa una opción válida :"
        leer reset
    }
    system("clear");
    }




Main 

system("clear");
pantalla "Un gusto en conocerte"
pantalla "A continuación, se te proporcionará información acerca del coronavirus y luego trendrás acceso a un juego que evaluará tu conocimiento."
pantalla "¿Estás listo? Ingrese 0.Si 1.No"
leer sino
while (sino<0 || sino>1)
{
    sino=0;
    pantalla "Ingrese una opción correcta por favor: "
    leer sino
}
system("clear");
llamar a menu.


Menu

while (choice==0)
    {
choice=0;
pantalla "¿Qué te gustaría abrir? 1.Información del COVID-19 2.Juego 3.Salir del programa"
leer choice2
while (choice2<0 || choice2>3)
        {
            choice2=0;
            pantalla "Ingresa una opción válida: "
            leer choice2
        }
system("clear")
while (choice2==1)
        {
            pantalla "¿Qué te gustaría revisar?: 1.Origen y síntomas del COVID-19.2.Impacto del COVID-19. 3.¿Cómo prevengo los contagios? 4.Vuelve al menú principal.\n");
            leer choice3
            switch (choice3)
            {
                caso 1:
                system("clear")
                pantalla "info"
                choice2=1
                break
                
                caso 2:
                system("clear")
                psntalla "info"
                choice2=1
                break
                
                caso 3:
                system("clear")
                pantalla "info"
                choice2=1
                break
                
                caso 4:
                system("clear")
                llamar a menu para regresar y acceder al juego
                
                break
                
                default:
                
                while (choice3<=0 || choice3>4)
                {
                    choice3=0
                    pantalla "Ingrese una opción válida: "
                    leer choice3
                }
                break
            }
        }
        while (choice2==2)
        {
            llamar a juego
        }
        while (choice2==3)
        {
            pantalla "Muchas gracias por usar."
            exit(0)
        }
    while (choice==1)
    {
        pantalla "Muchas gracias por usar."
        exit(0)
    }
}

Juego 

Estructura básica de las preguntas con while 

  int p1,a,cont=0;
  pantalla "pregunta"
  pantalla "opciones de respuesta"
  pantalla "Respuesta:"
  leer a
  while (p1!=a)
    {
      si (a==2)
	{
	  pantalla "RESPUESTA CORRECTA\n"
	  p1=a
	  cont++
	}
      sino  (a==1)
	{
	  pantalla "RESPUESTA INCORRECTA "
	  leer a
	  cont--
	}

redefinción de variable a responder
Datos de salida

Mensajes de error, correcto, incorrecto, datos personales del usuario, información del COVID-19 y ordenes del programa.


*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#define lim 50
void datospersonales (int,int []);///Def. de funciones.
void menu (int);//Def. de funciones.
void juego (int);//Def. de funciones.
int main()
{
    int datospernum [lim],cont=0;
    int choice,sino;//Def. de variables
    printf("Bienvenido a ¡Sálvate del COVID!\n");//inicio
    datospersonales(cont,datospernum);//llamar a datos personales
    system("clear");//limpieza de pantalla
    printf("Un gusto en conocerte :D");//Mensaje de bienvenida
    printf("\nA continuación, se te proporcionará información acerca del coronavirus y luego trendrás acceso\na un juego que evaluará tu conocimiento.");//explicación
    printf("\n\n");
    printf("¿Estás listo? Ingrese\n0.Si\n1.No\n");//opciones
    scanf("%i",&sino);//leer sino
    while (sino<0 || sino>1)//condicion
    {
        sino=0;//limpieza de variable
        printf("Ingrese una opción correcta por favor: ");//pedir sino
        scanf("%i",&sino);//leer sino
    }
    system("clear");//limpiar pantalla
    menu(sino);//llamar menú
}

void datospersonales (int y, int pernum [y])//
{
    char nombre[10],apellido[10],correo[50];//Def. de variables
    int reset,convencional,x,cont,limite3=100000000,limite4=999999999;//Def. de variables
    long telefono,cedula,limite=9999999999,limite2=100000000;//Def. de variables
    
    while (reset!=0)//
    {
    
    telefono=0;//limpieza de variables
    cedula=0;//limpieza de variables
    reset=1;//limpieza de variables
    strcpy(nombre,"");//limpieza de variables
    strcpy(apellido,"");//limpieza de variables
    strcpy(correo,"");//limpieza de variables
    printf("Ingrese su nombre y apellido: ");//pedir nombre y apellido
    scanf("%s",nombre);//leer nombre
    scanf("%s",apellido);//leer apellido
    printf("Ingrese su edad: ");//pedir edad
    scanf("%i",&pernum[y]);//leer edad
    while (pernum[y]<0  || pernum[y]>100)//condición
    {
        printf("%s, ingresa una edad válida por favor: ",nombre);//pedir edad correcta
        scanf("%i",&pernum[y]);//leer edad
    }
    printf("Ingrese su número de cédula: ");//pedir cedula
    scanf("%ld",&cedula);//leer cedula
    while (cedula>limite || cedula<limite2)//condición
    {
        cedula=0;//limpieza de variable
        printf("%s, ingresa una cédula correcta por favor: ",nombre);//pedir cedula correcta
        scanf("%ld",&cedula);//leer cedula
    }
    printf("Ingrese su número de celular: ");//pedir celular
    scanf("%ld",&telefono);//leer celular
    while (telefono<limite3 || telefono>limite4)//condición
    {
        telefono=0;//limpieza de variable
        printf("%s, ingresa un número de celular correcto por favor: ",nombre);//pedir telefono correcto
        scanf("%ld",&telefono);//leer telefono
    }
    printf("Ingrese su número convencional: ");//pedir convencional
    scanf("%i",&pernum[y]);//leer convencional
    while (pernum[y]<1000000 || pernum[y]>9999999)//condición
    {
        convencional=0;//limpieza de variable
        printf("%s, ingresa un número convencional correcto por favor: ",nombre);//pedir convencional correcto
        scanf("%i",&pernum[y]);//leer concencional
    }
    printf("Ingrese su correo: ");//pedir correo
    scanf("%s",correo);//leer correo
    system("clear");//limpiar pantalla
    printf("Nombre:%s %s\n\nEdad:%i\n\nCédula:%ld\n\nCelular:0%ld\n\nConvencional:%i\n\nCorreo:%s\n\n¿Correcto?\n0.Sí\n1.No\n",nombre,apellido, cedula, telefono, convencional, correo);//datos personales (comprobar).
    scanf("%i",&reset);//leer reset
    while (reset<0 || reset>1)//condición
    {
        printf("Por favor %s,ingresa una opción válida :",nombre);//pedir reset correcto
        scanf("%i",&reset);//leer reset
    }
    system("clear");//limpiar pantalla
    }
}

void menu (int choice)
{
    int choice2=0,choice3=0;//Def. de variables
    choice=0;//Def. de variables
    while (choice==0)//Condición
    {
        choice=0;//limpieza de variable
        printf("¿Qué te gustaría abrir?\n1.Información del COVID-19\n2.Juego\n3.Salir del programa\n");//
        scanf("%i",&choice2);//leer choice2
        while (choice2<0 || choice2>3)//condición
        {
            choice2=0;//limpieza de variable
            printf("Ingresa una opción válida: ");//pedir choice2 valida
            scanf("%i",&choice2);//leer choice2
        }
        system("clear");//limpieza de pantalla
        while (choice2==1)//condición
        {
            printf("\n¿Qué te gustaría revisar?: \n1.Origen y síntomas del COVID-19.\n2.Impacto del COVID-19.\n3.¿Cómo prevengo los contagios?\n4.Vuelve al menú principal.\n");//opciones de menú
            scanf("%i",&choice3);//leer choice3
            switch (choice3)//sentencia switch
            {
                case 1://opción 1
                system("clear");//limpiar pantalla
                printf("El coronavirus o COVID-19 es un virus que ha existido desde el siglo IX a.C.\nEste ya se ha manifestado en diferentes puntos de la historia, pero su impacto ha sidoo más visible durante el año 2020.\n");//información
                printf("\nEl coronavirus que conocemos hoy por hoy se originó en Wuhan, China en 2019,\n");//información
                printf("los síntomas son muy parecidos a los del resfriado común, pero en su versión más\nagresiva puede provocar MERS (Síndrome respiratorio de Oriente\n Medio (MERS) y el síndrome respiratorio agudo severo (SRAS).\n\n");//información
                choice2=1;//definición de variable.
                break;//fin de opción 1
                case 2://opcion 2
                system("clear");//limpiar pantalla
                printf("El coronavirus ha sido respponsable de la muerte de más de 315.000 personas y ac-\ntualmente existen más de 3 millones de personas contagiadas a\nnivel mundial.\n");//información
                printf("Su expansión tan exorbitante es el resutlado del contagio de personas a través de\nlas gotículas respiratorias expelidas por un contagiado que \ntose o que tiene otros síntomas como fiebre o cansancio.\n");//información
                printf("Lo poco que conocemos del coronavirus al día de hoy es que no existe cura conocida,\nlas mascotas no pueden transmitirlo y que las personas que no\n presentan síntomas pueden transmitir el virus.\n\n");//información
                choice2=1;//definición de variable
                break;//fin de opción 2
                case 3:
                system("clear");//limpiar pantalla
                printf("Los contagios se pueden ver reducidos si se toman las medidas de higiene y aisla-\nmiento necesarias. Lavarse las manos con jabón (el COVID-19 puede\nsobrevivir hasta 72 horas en superficies de plástico y acero, menos de 4 horas en superficies de cobre y menos de\n");//información
                printf("24 horas en superficies de cartón),utilizando mascarilla y manteniendo una distancia\n de un metro de otras personas. Si una persona llega a presentar\nsíntomas leves debe mantener la calma y recurrir al centro de salud más cercano.\n\n");//información
                choice2=1;//definición de variable
                break;//fin de opción 3
                case 4:
                system("clear");//limpiar pantalla
                menu (choice);
                break;//fin de opción 4
                default://Por defecto
                while (choice3<=0 || choice3>4)//Condicion
                {
                    choice3=0;//limpieza de variable
                    printf("Ingrese una opción válida: ");//pedir choice3
                    scanf("%i",&choice3);//leer choice3
                }
                break;//fin de por defecto
            }
        }
        while (choice2==2)//condicion
        {
            juego (choice);//llamar a juego
        }
        while (choice2==3)//condicion
        {
            printf("Muchas gracias por usar.");//Mensaje de despedida
            exit(0);//Salir
        }
    while (choice==1)//condicion 
    {
        printf("Muchas gracias por usar.");//Mensaje de despedida
        exit(0);//Salir
    }
}
}

void juego (int x)
{
  int p1,a,cont=0;//definicion de variables
  printf ("\na) ¿En dónde se originó el coronavirus?\n");//pregunta
  printf (" 1.Japón \n 2.China \n 3.Corea del Norte \n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &a);//leer respuesta
  while (p1!=a)//condicion while
    {
      if (a==2)//condicion if
	{
	  printf ("RESPUESTA CORRECTA\n");//mensaje de aprobación
	  p1=a;//definicion de variable
	  cont++;//aumento cont
	}
      else if (a==1)//condicion else if
	{
	  printf ("RESPUESTA INCORRECTA \n");//mensaje de negacion
	  printf ("Vuelve a intentarlo:");//solicitud
	  scanf ("%d", &a);//leer a
	  cont--;//reduccion cont
	}
      else//condicion else 
	{
	  printf ("RESPUESTA INCORRECTA \n");//mensaje de negacion
	  printf ("Vuelve a intentarlo:");//solicitud
	  scanf ("%d", &a);//leer a
	  cont--;//reduccion cont
	}
    }

  int p2, b;//redefinción de variable a responder

  printf ("\nb) ¿Con qué otro nombre se le conoce al coronavirus?\n");//pregunta
  printf (" 1.COVID-29 \n 2.CAVID-19 \n 3.COVID-19 \n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &b);//leer b
  while (p2!=b)//condicion while
    {
      if (b==3)//condicion if
	{
	  printf ("RESPUESTA CORRECTA\n");//mensaje de aprobacion
	  p2=b;//definicion de variable
	  cont++;//aumento cont
	}
      else if (b == 1)//condicion else if
	{
	  printf ("RESPUESTA INCORRECTA \n");//mensaje de negacion
	  printf ("Vuelve a intentarlo:");//solicitud
	  scanf ("%d", &b);//leer b
	  cont--;
	}
      else//condicion else 
	{
	  printf ("RESPUESTA INCORRECTA \n");//mensaje de negacion
	  printf ("Vuelve a intentarlo:");//solicitud
	  scanf ("%d", &b);//leer b
	  cont--;
	}
    }

  int p3, c;//redefinción de variable a responder

  printf ("\nc) ¿Cuáles son los síntomas más habituales del Covid-19?\n");//pregunta
  printf("1.Fiebre,tos seca y cansancio \n 2.Fiebre,dolor de garganta y cabeza \n 3.Tos y dolor de cabeza \n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &c);//leer c
  while(p3!=c){//condicion while
   if(c==1){//condicion if
       printf("RESPUESTA CORRECTA\n");
       p3=c;//definicion de variable
       cont++;//aumento cont
   }
   else if(c==2){//condicion else if
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&c);//leer c
       cont--;
   }
   else{//condicion else 
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&c);//leer c
       cont--;
   }
   }

    int p4,d;//redefinción de variable a responder
    
  printf ("\nd) ¿Cómo se propaga el Covid-19?\n");//pregunta
  printf ("1.Una persona puede contraer COVID‑19 si toca la mano de una persona contagiada.\n");//opciones
  printf("2. Una persona puede contraer COVID‑19 si inhala las gotículas procedentes de una persona infectada por el virus.\n");//opciones
  printf("3.Una persona puede contraer COVID‑19 si esta a un metro de distancia de una persona\n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &d);//leer d
while(p4!=d){//condicion while
   if(d==2){//condicion if
       printf("RESPUESTA CORRECTA\n");
       p4=d;//definicion de variable
       cont++;//aumento cont
   }
   else if(d==1){//condicion else if
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&d);//leer d
       cont--;//reduccion cont
   }
   else{//condicion else
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&d);//leer d
       cont--;//reduccion cont
   }
   }
    int p5,e;//redefinción de variable a responder
    
  printf ("\ne) ¿Qué puedo hacer para protegerme y prevenir la propagación de la enfermedad?\n");//pregunta
  printf ("1.Usar ropa abrigada como bufanda y chaqueta.\n");//opciones
  printf("2.Tomar vitaminas y hacer ejercicio.\n");//opciones
  printf("3.Lavarse las manos,mantener 1 metro de distancia con las personas,usar mascarilla.\n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &e);//leer e
while(p5!=e){//condicion while
   if(e==3){//condicion if
       printf("RESPUESTA CORRECTA\n");
       p5=e;//definicion de variable
       cont++;//aumento cont
   }
   else if(e==1){//condicion else if
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&e);//leer e
       cont--;//reduccion cont
   }
   else{//condicion else
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&e);//leer e
       cont--;//reduccion cont
   }
   }

int p6,f;//redefinción de variable a responder
    
  printf ("\nf) ¿Cuánto tiempo sobrevive el virus en las superficies?\n");//pregunta
  printf ("1.El virus puede sobrevivir hasta 48 horas en superficies de plástico y acero,más de 4 horas en superficies de cobre \ny menos de 72 horas en superficies de cartón.\n");//opciones
  printf("2.El virus puede sobrevivir hasta 24 horas en superficies de plástico y acero,menos de 3 horas en superficies de cobre \ny menos de 48 horas en superficies de cartón.\n");//opciones
  printf("3.El virus puede sobrevivir hasta 72 horas en superficies de plástico y acero,menos de 4 horas en superficies de cobre \ny menos de 24 horas en superficies de cartón.\n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &f);//leer f
while(p6!=f){//condicion while
   if(f==3){//condicion if
       printf("RESPUESTA CORRECTA\n");
       p6=f;//definicion de variable
       cont++;//aumento cont
   }
   else if(f==1){//condicion else if
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&f);//leer f
       cont--;//reduccion cont
   }
   else{//condicion else
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&f);//leer f
       cont--;//reduccion cont
   }
   }

int p7,g;//redefinción de variable a responder
    
  printf ("\ng)¿Qué debo hacer si tengo síntomas de COVID-19 y cuándo he de buscar atención médica?\n");//pregunta
  printf ("1.Si tiene síntomas leves no es necesario que busque atención médica,si los síntomas empeoran ahí si es necesario que busque atención médica.\n");//opciones
  printf("2.No es necesario la atención médica, tome antibióticos. \n");//opciones
  printf("3.Si tiene síntomas tómese un agua de hierbas. \n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &g);//leer g
while(p7!=g){//condicion while
   if(g==1){//condicion if
       printf("RESPUESTA CORRECTA\n");
       p7=g;//definicion de variable
       cont++;//aumento cont
   }
   else if(g==2){//condicion else if
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&g);//leer g
       cont--;//reduccion cont
   }
   else{//condicion else 
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&g);//leer g
       cont--;//reduccion cont
   }
   }

int p8,h;//redefinción de variable a responder
    
  printf ("\nh)¿Cuánto tiempo transcurre entre la exposición al COVID‑19 y el desarrollo de síntomas?\n");//pregunta
  printf ("1.Puede variar entre 1 y 30 días.\n");//opciones
  printf("2.Puede variar entre 1 y 14 días.\n");//opciones
  printf("3.Puede variar entre 1 y 10 días. \n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &h);//leer h
while(p8!=h){//condicion while
   if(h==2){//condicion if
       printf("RESPUESTA CORRECTA\n");
       p8=h;//definicion de variable
       cont++;//aumento cont
   }
   else if(h==1){//condicion else if
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&h);//leer h
       cont--;//reduccion cont
   }
   else{//condicion else 
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&h);//leer h
       cont--;//reduccion cont
   }
   }

int p9,i;//redefinción de variable a responder
    
  printf ("\ni)¿Puede mi mascota contagiarme COVID‑19? \n");//pregunta
  printf ("1.Solo los perros.\n");//opciones
  printf("2.Solo los gatos.\n");//opciones
  printf("3.Las mascotas no transmiten el virus a humanos.\n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &i);//leer i
while(p9!=i){//condicion while
   if(i==3){//condicion if
       printf("RESPUESTA CORRECTA\n");
       p9=i;//definicion de variable
       cont++;//aumento cont
   }
   else if(i==1){//condicion else if
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&i);//leer i
       cont--;//reduccion cont
   }
   else{//condicion else 
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&i);//leer i
       cont--;//reduccion cont
   }
   }

int p10,j;//redefinción de variable a responder
    
  printf ("\nj)¿Existe vacunas u otros productos médicos que previene el COVID-19? \n");//pregunta
  printf ("1.En este momento, no existe una vacuna para prevenir la enfermedad. \n");//opciones
  printf("2.Si, los antibióticos son eficientes.\n");//opciones
  printf("3.Los remedios naturales son eficientes.\n");//opciones
  printf ("Respuesta:");//Solicitar respuesta
  scanf ("%d", &j);//leer j
while(p10!=j){//condicion while
   if(j==1){//condicion if
       printf("RESPUESTA CORRECTA\n");
       p10=j;//definicion de variable
       cont++;//aumento cont
       x=0;//limpieza de la variable
       system("clear");//limpiar pantalla
       printf("¡Felicitaciones! Has obtenido %i puntos.\n",cont);//Mostrar cont como puntos
       printf("Gracias por usar ¡Sálvate del COVID-19!.\nSe enviará información adicional acerca de prevención a su correo.\nUn agradecimiento especial a la OMS, quién proveyó la información\npara este aplicativo.\n\nVisiten:\n https://www.who.int/es/emergencies/diseases/novel-corona\nvirus-2019/advice-for-public/q-a-coronaviruses\npara más información.");//Agraddecimiento
       exit(0);//Salir
   }
   else if(j==2){
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&j);//leer j
       cont--;//reduccion cont
   }
   else{
       printf("RESPUESTA INCORRECTA \n");//mensaje de negacion
       printf("Vuelve a intentarlo:");//solicitud
       scanf("%d",&j);//leer j
       cont--;//reduccion cont
   }
   }
}


