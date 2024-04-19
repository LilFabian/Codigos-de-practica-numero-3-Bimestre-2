/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Catalogo de Productos
   Dev Alvaro Angel Gabriel Estrada Morales
   Fecha: 19 de abril de 2024
*/
int menu = 1;

struct Dulces{
  char nombre_dulce[25];
  byte cantidad_chocolate;
};
Dulces Tipicos_1 = {"Higo",25};
Dulces Tipicos_2 = {"Masapan",25};
Dulces Tipicos_3 = {"canillitas de leche",25};
Dulces Tipicos_4 = {"Quiebra muelas",25};




void setup() {
  Serial.begin(9600); 
  Serial.println ("Maquina de dulces Tipicos de Guatemala");
  Serial.println ("Presiona cualquier boton para navegar");
  pinMode(2, INPUT);     
  pinMode(3, INPUT);     
}
void loop(){
  if (digitalRead(2)==HIGH){
    delay(1000);
    menu = menu+1;
}else if(digitalRead(3)==HIGH){
     delay(1000);
    menu = menu-1;
  }else {}
  if (menu==1){
  Serial.println(Tipicos_1.nombre_dulce);
  Serial.println(Tipicos_1.cantidad_chocolate);
  }else if (menu==2){
  Serial.println(Tipicos_2.nombre_dulce);
  Serial.println(Tipicos_2.cantidad_chocolate);
  } else if (menu==3){
  Serial.println(Tipicos_3.nombre_dulce);
  Serial.println(Tipicos_3.cantidad_chocolate);
  }else if (menu==4){
  Serial.println(Tipicos_4.nombre_dulce);
  Serial.println(Tipicos_4.cantidad_chocolate);
  } else if (menu>4){
  menu = 1;
  } else {
  menu = 4;
  }
}
