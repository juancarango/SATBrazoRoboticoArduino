/*Nombre del programa: Código para brazo robótico controlado por Arduino.
  Versión: 2.3.
  Creado por: Nicolas Garcia Vega, Juan Camilo Arango.
  Modificado por: Nicolas Garcia, Juan Camilo Arango.
  Fecha modificacion: Mayo 04 de 2018.
  */

/*Codigo GitHub https://github.com/juancarango/Brazo-Robotico/blob/master/brazo/brazo.ino */

#include <Servo.h>

#define pinBas 12
#define pinIzq 11
#define pinDer 10
#define pinGar 9

#define De 90
#define Ga 100
#define Iz 170
#define Ba 90

/*La garra cierra con +30*/

Servo Bas;
Servo Izq;
Servo Der;
Servo Gar;

void setup ()
{
  Bas.attach(pinBas);
  Izq.attach(pinIzq);
  Der.attach(pinDer);
  Gar.attach(pinGar);
  Bas.write(Ba);
  Gar.write(Ga);
  Izq.write(Iz);
  Der.write(De);
}

void loop()
{
  Bas.write(Ba-20);
  Der.write(De+30);
  Gar.write(Ga+10);
  delay(500);
  Bas.write(Ba-40);
  Der.write(De+50);
  Gar.write(Ga+20);
  delay(500);
  
  /*BASE*/

  Bas.write(Ba-80);
  delay(150);
  Bas.write(Ba-78);
  delay(150);
  Bas.write(Ba-76);
  delay(150);
  Bas.write(Ba-74);
  delay(150);
  Bas.write(Ba-72);
  delay(150);
  Der.write(De+72);
  Bas.write(Ba-70);
  Gar.write(Ga+30);
  delay(150);
  Der.write(De+68);
  Bas.write(Ba-68);
  Gar.write(Ga+25);
  delay(150);
  Der.write(De+66);
  Bas.write(Ba-66);
  Gar.write(Ga+20);
  delay(150);
  Der.write(De+64);
  Bas.write(Ba-64);
  Gar.write(Ga+15);
  delay(150);
  Der.write(De+62);
  Bas.write(Ba-62);
  Gar.write(Ga+10);
  delay(150);
  Der.write(De+60);
  Bas.write(Ba-60);
  Gar.write(Ga+5);
  delay(150);
  Der.write(De+58);
  Bas.write(Ba-58);
  Gar.write(Ga+0);
  delay(150);
  Der.write(De+56);
  Bas.write(Ba-56);
  Gar.write(Ga+5);
  delay(150);
  Der.write(De+54);
  Bas.write(Ba-54);
  Gar.write(Ga+10);
  delay(150);
  Der.write(De+52);
  Bas.write(Ba-52);
  Gar.write(Ga+15);
  delay(150);
  Der.write(De+50);
  Bas.write(Ba-50);
  Gar.write(Ga+20);
  delay(150);
  Der.write(De+48);
  Bas.write(Ba-48);
  Gar.write(Ga+25);
  delay(150);
  Der.write(De+46);
  Bas.write(Ba-46);
  Gar.write(Ga+30);
  delay(150);
  Der.write(De+44);
  Bas.write(Ba-44);
  Gar.write(Ga+25);
  delay(150);
  Der.write(De+42);
  Bas.write(Ba-42);
  Gar.write(Ga+20);
  delay(150);
  Der.write(De+40);
  Bas.write(Ba-40);
  Gar.write(Ga+15);
  delay(150);
  Der.write(De+38);
  Bas.write(Ba-38);
  Gar.write(Ga+10);
  delay(150);
  Der.write(De+36);
  Bas.write(Ba-36);
  Gar.write(Ga+5);
  delay(150);
  Der.write(De+34);
  Bas.write(Ba-34);
  Gar.write(Ga+0);
  delay(150);
  Der.write(De+32);
  Bas.write(Ba-32);
  Gar.write(Ga+5);
  delay(150);
  Der.write(De+30);
  Bas.write(Ba-30);
  Gar.write(Ga+10);
  delay(150);
  Der.write(De+28);
  Bas.write(Ba-28);
  Gar.write(Ga+15);
  delay(150);
  Der.write(De+26);
  Bas.write(Ba-26);
  Gar.write(Ga+20);
  delay(150);
  Der.write(De+24);
  Bas.write(Ba-24);
  Gar.write(Ga+25);
  delay(150);
  Der.write(De+22);
  Bas.write(Ba-22);
  Gar.write(Ga+30);
  delay(150);
  Der.write(De+20);
  Bas.write(Ba-20);
  Gar.write(Ga+25);
  delay(150);
  Der.write(De+18);
  Bas.write(Ba-18);
  Gar.write(Ga+20);
  delay(150);
  Der.write(De+16);
  Bas.write(Ba-16);
  Gar.write(Ga+15);
  delay(150);
  Der.write(De+14);
  Bas.write(Ba-14);
  Gar.write(Ga+10);
  delay(150);
  Der.write(De+12);
  Bas.write(Ba-12);
  Gar.write(Ga+5);
  delay(150);
  Der.write(De+10);
  Bas.write(Ba-10);
  Gar.write(Ga+0);
  delay(150);
  Der.write(De+8);
  Bas.write(Ba-8);
  Gar.write(Ga+10);
  delay(150);
  Der.write(De+6);
  Bas.write(Ba-6);
  Gar.write(Ga+20);
  delay(150);
  Der.write(De+4);
  Bas.write(Ba-4);
  Gar.write(Ga+30);
  delay(150);
  Der.write(De+2);
  Bas.write(Ba-2);
  Gar.write(Ga+15);
  delay(150);
  Der.write(De+0);
  Bas.write(Ba+0);
  Gar.write(Ga+0);
  delay(1000);
  
  
  /*   C   A   M   B   I   O   PASOS*/
  
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(500);
  Bas.write(Ba-8);
  Gar.write(Ga-20);
  delay(500);
  Bas.write(Ba+8);
  Gar.write(Ga+20);
  delay(1300);
  
  /*Cambio*/
  
  Bas.write(Ba-30);
  delay(300);
  Der.write(De-30);
  Gar.write(Ga+30);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+10);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+0);
  delay(300);
  Bas.write(Ba-30);
  delay(300);
  Der.write(De-30);
  Gar.write(Ga+30);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+10);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+0);
  delay(300);
  
  /*Cambio*/
  
  Bas.write(Ba+30);
  delay(300);
  Der.write(De-30);
  Gar.write(Ga+30);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+10);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+0);
  delay(300);
  Bas.write(Ba+30);
  delay(300);
  Der.write(De-30);
  Gar.write(Ga+30);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+10);
  delay(300);
  Izq.write(Iz-30);
  delay(300);
  Izq.write(Iz+30);
  Gar.write(Ga+0);
  delay(300);
  
  /*Cambio*/

  Gar.write(Ga+30);
  Bas.write(Ba+0);
  delay(1000);
  Izq.write(Iz+10);
  delay(300);
  Der.write(De+20);
  Gar.write(Ga+0);
  delay(300);
  Der.write(De-40);
  Gar.write(Ga+30);
  delay(200);
  Izq.write(Iz-5);
  delay(300);
  Gar.write(Ga+30);
  Bas.write(Ba+0);
  delay(300);
  Izq.write(Iz+10);
  delay(300);
  Der.write(De+20);
  Gar.write(Ga+0);
  delay(300);
  Der.write(De-40);
  Gar.write(Ga+30);
  delay(200);
  Izq.write(Iz-5);
  delay(1000);
  Izq.write(Iz-30);
  delay(500);
  Der.write(De-20);
  delay(100);
  Gar.write(Ga+40);
  delay(200);
  Gar.write(Ga+10);
  delay(500);

  /*GIRO 180*/
  
  Bas.write(Ba+90);
  Gar.write(Ga+40);
  delay(500);
  Bas.write(Ba+0);
  Gar.write(Ga+20);
  delay(100);
  Bas.write(Ba-90);
  Gar.write(Ga+0);
  delay(1000);
  
  /*Volver a la posicion*/
  
  Bas.write(Ba-10);
  Der.write(De+20);
  delay(300);
  Bas.write(Ba-20);
  Der.write(De+40);
  delay(300);
  Bas.write(Ba-30);
  delay(300);
  Bas.write(Ba-40);
  delay(1000);
}
