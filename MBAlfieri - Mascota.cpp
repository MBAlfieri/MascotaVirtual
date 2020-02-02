#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <conio2.h>
#include <windows.h>
using namespace std;

//--------------------------------------------------------------------------------------Clase Mascota
class Mascota{
	
	protected: //Características de la Mascota
		int Energia; //Es la Energía de la Mascota.
		int Diversion; //Es la Diversión de la Mascota.
		int Satisfaccion; //Es la Satisfacción de la Mascota.
		int Higiene; //Es la Higiene de la Mascota.
		bool Evolucion; //Permite que la Mascota evolucione o muera.

	public://Acciones de la Mascota
		Mascota();//Constructor.
		virtual ~Mascota(){}; //Me permitirá borrar la memoria a futuro.
		virtual void setComer(){}; //La Mascota come.
		virtual void setBanarse(){}; //La Mascota se baña.
		virtual void setJugar(){}; //La Mascota Juega.
		virtual void setContador(){}; //Cronómetro que reducirá los Stats de la Mascota luego de 2 segundos.
		virtual void GraficoMascota(); // Muestra la Mascota.
		virtual void GraficoMascotaJugando(); //Muestra la Mascota Jugando.
		virtual void GraficoMascotaComiendo(); //Muestra la Mascota Comiendo.
		virtual void GraficoMascotaBanandose(); //Muestra la Mascota bañandose
		
		int setEvolucionTrue(); //Permitirá decidir si la mascota puede evolucionar o no.
		int setEvolucionFalse(); //Permitirá decidir si la mascota puede evolucionar o no.
		int getEvolucion(); //Permite verificar si la mascota evolucionó o no.
		void getVerStats(); //Me permite ver los Stats de la mascota.
		void getChequeoStats();	//Revisa si los stats de la Mascota son suficientes como para evolucionar o morir.	
};

Mascota::Mascota(){//Constructor. Al iniciar el juego, nuestra mascota tendrá todos sus atributos en 100.
	Energia = 100;
	Diversion = 100;
	Satisfaccion = 100;
	Higiene = 100;
}

void Mascota::getVerStats(){ //Me permite ver los Stats de la mascota.
	cout << "****************************************************************************************************" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;;
	cout << "|                                                                                                  |" << endl;
	cout << "| ---> Energia: " << Energia << "                                                                                 |"<< endl;
	cout << "| ---> Diversion: " << Diversion << "                                                                               |" << endl;
	cout << "| ---> Higiene: " << Higiene << "                                                                                 |"<< endl;
	cout << "| ---> Satisfaccion: " << Satisfaccion << "                                                                            |"<< endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;;
}

void Mascota::getChequeoStats(){ //Revisa si los stats de la Mascota son suficientes como para evolucionar o morir.
	if((Energia>50)&&(Diversion>50)&&(Satisfaccion>50)&&(Higiene>50)){
			setEvolucionTrue();	
	}
	else{setEvolucionFalse();}
}

int Mascota::setEvolucionTrue(){ //Hará que el Bool se vuelva True en caso de que se cumplan las condiciones.
	Evolucion = true;
	return Evolucion;
}

int Mascota::setEvolucionFalse(){ //Hará que el Bool se vuelva False en caso de que no se cumplan las condiciones.
	Evolucion = false;
	return Evolucion;
}

int Mascota::getEvolucion(){ //Permite verificar el Estado de Evolucion de la Mascota
	return Evolucion;
}

void Mascota::GraficoMascota(){ //Grafico de la Mascota recién nacida.
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|        `                         `           .-~-.                `              `        `      |"<< endl;
	cout << "|       	      `            `         .'     '.    `                                        |"<< endl;
	cout << "|                 `                     ((  /-v-v-v-v-\\                    `           `           |"<< endl;
	cout << "|        `                 `               :   O  .  O ;       `                                `  |"<< endl;
	cout << "|                      `          `        |=     w   =|              `          `                 |"<< endl;
	cout << "|              `              `            :^-^-^-^-^-^:                              `            |" << endl;
	cout << "|         `            `                    \\         / ))               `                         |"<< endl;
	cout << "|	                          `          '.     .'                 `           `          `    |"<< endl;
	cout << "|           	  `      `                     `~~~`              `          `                     |"<< endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
}

void Mascota::GraficoMascotaComiendo(){ //Grafico de la Mascota comiendo.
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                .-~-.                                                             |"<< endl;
	cout << "|                              .'     '.                                                           |"<< endl;
	cout << "|    __________________       /-v-v-v-v-\\                                                          |"<< endl;
	cout << "|   /                  \\     :   n  .  n ;    __                                                   |"<< endl;
	cout << "|   | ¡Estoy comiendo!  >    |=     o   =|    '--`.                                                |"<< endl;
	cout << "|   \\__________________/     :^-^-^-^-^-^:       |,--.                                             |" << endl;
	cout << "|                             \\         /       / `)  \\                                            |"<< endl;
	cout << "|                              '.     .'        \\     |                                            |"<< endl;
	cout << "|                                `~~~`           '.__/                                             |"<< endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl << endl;
}

void Mascota::GraficoMascotaJugando(){ //Grafico de la Mascota jugando.
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                .-~-.                                                             |"<< endl;
	cout << "|                              .'     '.                                                           |"<< endl;
	cout << "|    __________________       /-v-v-v-v-\\                                                          | "<< endl;
	cout << "|   /                  \\     :   ^  .  ^ ;                                                         |"<< endl;
	cout << "|   | ¡Estoy jugando!   >    |=     3   =|                                                         |"<< endl;
	cout << "|   \\__________________/     :^-^-^-^-^-^:     ()=()                                               |" << endl;
	cout << "|                             \\         /      ('Y')                                               |"<< endl;
	cout << "|                              '.     .'       q . p                                               |"<< endl;
	cout << "|                                `~~~`         ()_()                                               | "<< endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl << endl;
}


void Mascota::GraficoMascotaBanandose(){ //Grafico de la Mascota bañandose.
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                            _   .-~-.                                                             |"<< endl;
	cout << "|                           (_).'     '.                                                           |"<< endl;
	cout << "|    __________________       /-v-v-v-v-\\                                                          |"<< endl;
	cout << "|   /                  \\     :   o  .  - ;                                                         |"<< endl;
	cout << "|   |¡Me estoy bañando! >    |=     v   =|                                                         |"<< endl;
	cout << "|   \\__________________/     :^-^-^-^-^-^:_                                                        |" << endl;
	cout << "|                           _ \\         /(_)   _                                                   |"<< endl;
	cout << "|                          (_) '.     .'     _(')=                                                 |"<< endl;
	cout << "|                                `~~~`     (__)                                                    |"<< endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl << endl;
}


//-------------------------------------------------------------------------------------Clase del Estado 1 de la Mascota
class Estado_1 : public Mascota{
	
	private:
		Mascota *Pepito; //Surgde de la Clase Mascota.
	
	public:
		Estado_1(){}; //Constructor.
		void setComer(); //La Mascota comerá.
		void setBanarse(); //La Mascota se bañará.
		void setJugar(); //La Mascota Jugará.
		void setContador(); //Cronómetro que reducirá los Stats de la Mascota luego de 2 segundos.
		void setRestarPuntos(); //Es la cantidad de puntos que se restarán de acuerdo al Cronómetro.
};

void Estado_1::setComer(){ //La Mascota comerá.
	Energia +=2;
	Diversion += 0; 
	Satisfaccion += 10;
	Higiene -= 2;
}

void Estado_1::setBanarse(){ //La Mascota se bañará.
	Energia += 2;
	Diversion -= 2; 
	Satisfaccion += 0;
	Higiene += 10;
}

void Estado_1::setJugar(){ //La Mascota Jugará.
	Energia -= 5;
	Diversion += 10; 
	Satisfaccion -= 2;
	Higiene += 0;
}

void Estado_1::setRestarPuntos(){ //Es la cantidad de puntos que se restarán de acuerdo al Cronómetro.
	Energia -= 2;
	Diversion -= 2; 
	Satisfaccion -= 2;
	Higiene -= 2;
}


void Estado_1::setContador(){ //He implementado el código propuesto en los apuntes para crear el cronómetro en este juego.
							//Este cronómetro es aquel que dura 30 segundos, es decir, un Estado evolutivo de la Mascota
	clock_t tempo; 
	clock_t paso;
	
	int velocidad = 1;
	
	paso=CLOCKS_PER_SEC/velocidad;
	tempo=clock(); 
	
	int contador = 30;
	
	while(contador>-1){//Lo he puesto en -1 para que se cuente hasta el 0 inclusive.
		if(tempo+paso<clock()){
		
			cout<<"  ---> Tiempo restante: "<<contador<<endl; 
			contador--;
			tempo=clock();
		
				if(contador%2 == 0){
					setRestarPuntos();}
				
				if(kbhit()){ //Detecta si se ha presionado una tecla
					
					switch(getch()){ //Detecta cual de todas las teclas se ha presionado.
						
						case 'q': case 'Q': //La Mascota jugará y se verá el gráfico.
							system ("CLS");
							setJugar();
							GraficoMascotaJugando();
							break;
					
						case 'w': case 'W': //La Mascota comerá y se verá el gráfico.
							system ("CLS");
							setComer();
							GraficoMascotaComiendo();
							break;
						
						case 'e': case 'E': //La Mascota se bañará y se verá el gráfico.
							system ("CLS");
							setBanarse();
							GraficoMascotaBanandose();
							break;
				}
				getVerStats();
			}
		}
	}	
}


//-------------------------------------------------------------------------------------Clase del Estado 2 de la Mascota

class Estado_2 : public Mascota{
		
	private:
		Mascota *Pepito; //Surgde de la Clase Mascota.
	
	public:
		Estado_2(){}; //Constructor.
		void setComer(); //La Mascota comerá.
		void setBanarse(); //La Mascota se bañará.
		void setJugar(); //La Mascota Jugará.
		void setContador(); //Cronómetro que reducirá los Stats de la Mascota luego de 2 segundos.
		void setRestarPuntos(); //Es la cantidad de puntos que se restarán de acuerdo al Cronómetro.
		void GraficoMascota(); //Gráfico de la Mascota.
		void GraficoMascotaBanandose(); //Gráfico de la Mascota bañandose.
		void GraficoMascotaComiendo(); //Gráfico de la Mascota comiendo.
		void GraficoMascotaJugando(); //Gráfico de la Mascota jugando.
};

void Estado_2::setComer(){ //La Mascota comerá.
	Energia += ((rand()%3)-0); //Numero al azar del 0 al 2.
	Diversion += ((rand()%3)-1); //Numero al azar del -1 al 1.
	Satisfaccion += ((rand()%6)+0); //Numero al azar del 0 al 5.
	Higiene += ((rand()%5)-2); //Numero al azar del -2 al 2.
}

void Estado_2::setBanarse(){ //La Mascota se bañará.
	Energia += ((rand()%3)-0); //Numero al azar del 0 al 2.
	Diversion += ((rand()%5)-2); //Numero al azar del -2 al 2. 
	Satisfaccion += ((rand()%3)-1); //Numero al azar del -1 al 1.
	Higiene += ((rand()%6)+0); //Numero al azar del 0 al 5.
}

void Estado_2::setJugar(){//La Mascota Jugará.
	Energia += ((rand()%6)-5); //Numero al azar del -5 al 0.
	Diversion += ((rand()%6)+0); //Numero al azar del 0 al 5.
	Satisfaccion += ((rand()%5)-2); //Numero al azar del -2 al 2.
	Higiene += ((rand()%3)-1); //Numero al azar del -1 al 1.
}

void Estado_2::setRestarPuntos(){ //Es la cantidad de puntos que se restarán de acuerdo al Cronómetro
	Energia -= 3;
	Diversion -= 3; 
	Satisfaccion -= 3;
	Higiene -= 3;
}

void Estado_2::setContador(){ //He implementado el código propuesto en los apuntes para crear el cronómetro en este juego.
	//Este cronómetro es aquel que dura 30 segundos, es decir, un estado evolutivo de la Mascota
	clock_t tempo; 
	clock_t paso;
	
	int velocidad = 1;
	
	paso=CLOCKS_PER_SEC/velocidad;
	tempo=clock(); 
	
	int contador = 30;
	
	while(contador>-1){//Lo he puesto en -1 para que se cuente hasta el 0 inclusive.
		if(tempo+paso<clock()){
			
			cout<<"  ---> Tiempo restante: "<<contador<<endl;
			contador--;
			tempo=clock();
			
			if(contador%2 == 0){
				setRestarPuntos();}
			
			if(kbhit()){ //Detecta si se ha presionado una tecla
				
				switch(getch()){ //Detecta cual de todas las teclas se ha presionado.
					
				case 'q': case 'Q': //La Mascota jugará y se verá el gráfico.
					system ("CLS");
					setJugar();
					GraficoMascotaJugando();
					break;
					
				case 'w': case 'W': //La Mascota comerá y se verá el gráfico.
					system ("CLS");
					setComer();
					GraficoMascotaComiendo();
					break;
					
				case 'e': case 'E': //La Mascota se bañará y se verá el gráfico.
					system ("CLS");
					setBanarse();
					GraficoMascotaBanandose();
					break;
				}
				getVerStats();
			}
		}
	}	
}


void Estado_2::GraficoMascota(){//Gráfico de la Mascota.
	
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;	
	cout <<"|             `                                           `                       `                |" << endl;
	cout <<"|  `       `    		     `    ,\\      `                  `         `                   |"<< endl;
	cout <<"|             	`	          `       \\\\\\,_            `                                       |"<< endl;
	cout <<"|          `   		 `                 \\` ,\\  !                              `                 |"<< endl;
	cout <<"|  `           `		      __,.-' =__)                     `                            |"<< endl;
	cout <<"|            `   :V^v^v^v^V: 	    .'        )           `                           `            |"<< endl;
	cout <<"|      `         \\  '    ' /     ,_/   ,    \\/\\_         `     `        `                          |"<< endl;
	cout <<"|           `     '.  '  .'      \\_|    )_-\\ \\_-`    `                 `                           |"<< endl;
	cout <<"|  `            * * `~~~` * *      `-----` `--`             `           `     `            `       |"<< endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
}


void Estado_2::GraficoMascotaBanandose(){ //Gráfico de la Mascota bañandose.
	
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
	cout << "|                                                                                                  |"<< endl;
	cout << "|                                   ,\\                                                             |"<< endl;
	cout << "|    __________________             \\\\\\,_  _                                                       |"<< endl;
	cout << "|   /                  \\      _      \\` -\\(_)                                                      |"<< endl;
	cout << "|   |¡Me estoy bañando! >    (_)__,.-' =__)                                                        |"<< endl;
	cout << "|   \\__________________/      .'        )                                                          |"<< endl;
	cout << "|                          ,_/   ,    \\/\\_      _                                                  |"<< endl;
	cout << "|                          \\_|    )_-\\ \\_-`   _(')=                                                |"<< endl;
	cout << "|                            `-----` `--`    (__)                                                  |"<< endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl << endl;
}

void Estado_2::GraficoMascotaComiendo(){ //Gráfico de la Mascota comiendo.
	
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
	cout << "|                                                                                                  |"<< endl;
	cout << "|                                   ,\\                                                             |"<< endl;
	cout << "|    __________________             \\\\\\,_                                                          |"<< endl;
	cout << "|   /                  \\             \\` n\\   __                                                    |"<< endl;
	cout << "|   | ¡Estoy comiendo!  >       __,.-' =__) '--`.                                                  |"<< endl;
	cout << "|   \\__________________/      .'        )       |,--.                                              |"<< endl;
	cout << "|                          ,_/   ,    \\/\\_     / `)  \\                                             |"<< endl;
	cout << "|                          \\_|    )_-\\ \\_-`    \\     |                                             |"<< endl;
	cout << "|                            `-----` `--`       '.__/                                              |"<< endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl << endl;
}


void Estado_2::GraficoMascotaJugando(){ //Gráfico de la Mascota jugando.
	
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
	cout << "|                                                                                                  |"<< endl;
	cout << "|                                   ,\\                                                             |"<< endl;
	cout << "|    __________________             \\\\\\,_                                                          |"<< endl;
	cout << "|   /                  \\             \\` *\\                                                         |"<< endl;
	cout << "|   | ¡Estoy jugando!   >       __,.-' =__)                                                        |"<< endl;
	cout << "|   \\__________________/      .'        )   ()=()                                                  |"<< endl;
	cout << "|                          ,_/   ,    \\/\\_  ('Y')                                                  |"<< endl;
	cout << "|                          \\_|    )_-\\ \\_-` q . p                                                  |"<< endl;
	cout << "|                            `-----` `--`   ()_()                                                  |"<< endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl << endl;
}




//---------------------------------------------------------------------------------------Clase del Estado 3 de la Mascota

class Estado_3 : public Mascota{
	
	private:
		Mascota *Pepito; //Surgde de la Clase Mascota.
	
	public:
		Estado_3(){}; //Constructor.
		void setComer();//La Mascota comerá.
		void setBanarse();//La Mascota se bañará.
		void setJugar(); //La Mascota jugará.
		void setContador();//Cronómetro que reducirá los Stats de la Mascota luego de 2 segundos.
		void setRestarPuntos();//Es la cantidad de puntos que se restarán de acuerdo al Cronómetro.
		void GraficoMascota();//Gráfico de la Mascota.
		void GraficoMascotaBanandose();//Gráfico de la Mascota bañandose.
		void GraficoMascotaComiendo(); //Gráfico de la Mascota comiendo.
		void GraficoMascotaJugando(); //Gráfico de la Mascota jugando.
};

void Estado_3::setComer(){//La Mascota comerá.
	Energia += ((rand()%4)-2); //Numero al azar del -2 al 1.
	Diversion += ((rand()%5)-2); //Numero al azar del -2 al 2.
	Satisfaccion += ((rand()%3)-0); //Numero al azar del 0 al 2.
	Higiene += ((rand()%3)-3); //Numero al azar del -3 a -1.
}

void Estado_3::setBanarse(){//La Mascota se bañará.
	Energia += ((rand()%13)-2); //Numero al azar del -2 al 10.
	Diversion += ((rand()%5)-2); //Numero al azar del -2 al 2. 
	Satisfaccion += ((rand()%3)-3); //Numero al azar del -3 a -1.
	Higiene += ((rand()%3)-0); //Numero al azar del 0 al 2.
}

void Estado_3::setJugar(){//La Mascota jugará.
	Energia += ((rand()%3)-2); //Numero al azar del -2 al 0
	Diversion += ((rand()%3)-0); //Numero al azar del 0 al 2.
	Satisfaccion += ((rand()%3)-3); //Numero al azar del -3 a -1.
	Higiene += ((rand()%5)-2); //Numero al azar del -2 al 2.
}

void Estado_3::setRestarPuntos(){//Es la cantidad de puntos que se restarán de acuerdo al Cronómetro.
	Energia -= 4;
	Diversion -= 4; 
	Satisfaccion -= 4;
	Higiene -= 4;
}

void Estado_3::setContador(){ 	//He implementado el código propuesto en los apuntes para crear el cronómetro en este juego.
								//Este cronómetro es aquel que dura 30 segundos, es decir, un estado evolutivo de la Mascota
	clock_t tempo; 
	clock_t paso;
	
	int velocidad = 1;
	
	paso=CLOCKS_PER_SEC/velocidad;
	tempo=clock(); 
	
	int contador = 30;
	
	while(contador>-1){//Lo he puesto en -1 para que se cuente hasta el 0 inclusive.
		if(tempo+paso<clock()){
			
			cout<<"  ---> Tiempo restante: "<<contador<<endl;
			contador--;
			tempo=clock();
			
			if(contador%2 == 0){
				setRestarPuntos();}
			
			if(kbhit()){ //Detecta si se ha presionado una tecla
				
				switch(getch()){ //Detecta cual de todas las teclas se ha presionado.
					
				case 'q': case 'Q'://La Mascota jugará y se verá el gráfico.
					system ("CLS");
					setJugar();
					GraficoMascotaJugando();
					break;
					
				case 'w': case 'W'://La Mascota comerá y se verá el gráfico.
					system ("CLS");
					setComer();
					GraficoMascotaComiendo();
					break;
					
				case 'e': case 'E'://La Mascota se bañará y se verá el gráfico.
					system ("CLS");
					setBanarse();
					GraficoMascotaBanandose();
					break;
				}
				getVerStats();
			}
		}
	}	
}

void Estado_3::GraficoMascota(){//Gráfico de la Mascota.
	
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;	
	cout << "|              `         |\\     /|                    `                                       `    |" << endl;
	cout << "|  `                     |\\\\   //|      `                            `            `                |" << endl;
	cout << "|        	         | \\| |/ |         `         `                                           ` |" << endl;
	cout << "|     `  	         \\ || || /                                                                 |" << endl;
	cout << "|        	          \\||_||/        `         `               `                               |" << endl;
	cout << "|                         .'   '.                                                `                 |" << endl;
	cout << "|  `     	  `       |o   o|              `         `                                         |" << endl;
	cout << "|                        /=  Y  =\\      !                            `          `                ` |" << endl;
	cout << "|              `         `'-.^.-'`             `                                                   |" << endl;
	cout << "|      ` 	         /`     `\\     `                          `          `                     |" << endl;
	cout << "|        	    `   |         |                                                                |" << endl;
	cout << "|     `  	        |  (   )  |          `               `                           `         |" << endl;
	cout << "|        	        /\\  \\ /  /\\             `                                                  |" << endl;
	cout << "|        	 `     |  '._)_.'  |                                  `         `                  |" << endl;
	cout << "|  `                   \\           /   `           `                                             ` |" << endl;
	cout << "|       `	        \\ '.___.' /                                                   `            |" << endl;
	cout << "|     `  	     .--'  \\---/  '--.              `                `                             |" << endl;
	cout << "|           `       `-------' '-------`	`                                `           `             |" << endl;
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
}

void Estado_3::GraficoMascotaBanandose(){//Gráfico de la Mascota bañandose.
	
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;	
	cout << "|                           _ |\\     /|                                                            |" << endl;
	cout << "|                          (_)|\\\\   //|                                                            |" << endl;
	cout << "|        	              | \\| |/ |                                                            |" << endl;
	cout << "|        	              \\ || || /                                                            |" << endl;
	cout << "|        	               \\||_||/ _                                                           |" << endl;
	cout << "|   __________________         .'   '.(_)                                                          |" << endl;
	cout << "|  /                  \\        |-   -|                                                             |" << endl;
	cout << "|  |¡Me estoy bañando! >      /=  V  =\\                                                            |" << endl;
	cout << "|  \\__________________/       `'-.^.-'`                                                            |" << endl;
	cout << "|        	              /`     `\\                                                            |" << endl;
	cout << "|        	             |         |                                                           |" << endl;
	cout << "|        	             |  (   )  | _                                                         |" << endl;
	cout << "|        	             /\\  \\ /  /\\(_)                                                        |" << endl;
	cout << "|        	            |  '._)_.'  |                                                          |" << endl;
	cout << "|                           \\           /                                                          |" << endl;
	cout << "|        	             \\ '.___.' /       _                                                   |" << endl;
	cout << "|        	          .--'  \\---/  '--.  _(')=                                                 |" << endl;
	cout << "|                        `-------' '-------`(__)                                                   |" << endl;
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
}

void Estado_3::GraficoMascotaComiendo(){//Gráfico de la Mascota comiendo.
	
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;	
	cout << "|                             |\\     /|                                                            |" << endl;
	cout << "|                             |\\\\   //|                                                            |" << endl;
	cout << "|        	              | \\| |/ |                                                            |" << endl;
	cout << "|        	              \\ || || /                                                            |" << endl;
	cout << "|        	               \\||_||/                                                             |" << endl;
	cout << "|   __________________         .'   '.                                                             |" << endl;
	cout << "|  /                  \\        |n   n|                                                             |" << endl;
	cout << "|  | ¡Estoy comiendo!  >      /=  x  =\\                                                            |" << endl;
	cout << "|  \\__________________/       `'-.^.-'`                                                            |" << endl;
	cout << "|        	              /`     `\\                                                            |" << endl;
	cout << "|        	             |         |                                                           |" << endl;
	cout << "|        	             |  (   )  |                                                           |" << endl;
	cout << "|        	             /\\  \\ /  /\\    __                                                     |" << endl;
	cout << "|        	            |  '._)_.'  |  '--`.                                                   |" << endl;
	cout << "|                           \\           /      |,--.                                               |" << endl;
	cout << "|        	             \\ '.___.' /      / `)  \\                                              |" << endl;
	cout << "|        	          .--'  \\---/  '--.   \\     |                                              |" << endl;
	cout << "|                        `-------' '-------`   '.__/                                               |" << endl;
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
}

void Estado_3::GraficoMascotaJugando(){ //Gráfico de la Mascota jugando.
	
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;	
	cout << "|                             |\\     /|                                                            |" << endl;
	cout << "|                             |\\\\   //|                                                            |" << endl;
	cout << "|        	              | \\| |/ |                                                            |" << endl;
	cout << "|        	              \\ || || /                                                            |" << endl;
	cout << "|        	               \\||_||/                                                             |" << endl;
	cout << "|   __________________         .'   '.                                                             |" << endl;
	cout << "|  /                  \\        |^   ^|                                                             |" << endl;
	cout << "|  | ¡Estoy jugando!   >      /=  w  =\\                                                            |" << endl;
	cout << "|  \\__________________/       `'-.^.-'`                                                            |" << endl;
	cout << "|        	              /`     `\\                                                            |" << endl;
	cout << "|        	             |         |                                                           |" << endl;
	cout << "|        	             |  (   )  |                                                           |" << endl;
	cout << "|        	             /\\  \\ /  /\\                                                           |" << endl;
	cout << "|        	            |  '._)_.'  |                                                          |" << endl;
	cout << "|                           \\                ()=()                                                 |" << endl;
	cout << "|        	             \\ '.___.' /     ('Y')                                                 |" << endl;
	cout << "|        	          .--'  \\---/  '--.  q . p                                                 |" << endl;
	cout << "|                        `-------' '-------` ()_()                                                 |" << endl;
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
}


//-----------------------------------------------------------------------------------Clase Gráficos Varios

class Graficos{ //He creado una clase independiente para los graficos de inicio y misceláneos.
	
	public:
		void Titulo(); //Título del juego.
		void MenuPrincipal(); //Menú Principal.
		void Instrucciones(); //Instrucciones del juego.
		void Creditos(); //Créditos
		void Salir(); //Texto de salida.
		void InicioJuego(); //Texto del inicio del juego.
		void InicioEtapa(); //Texto previo al inicio del cronómetro.
		void FinEtapa(); //Texto posterior a la partida.
		void Evolucion(); //Texto para la evolución de la Mascota.
		void Muerte(); //Texto por si la Mascota muere.
		void Win(); //Texto si el jugador gana.
};


void Graficos::Titulo(){ //Título del juego.

textcolor(6);	
		cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
		cout << "|           __  __                     _         __      _        _               _                |" << endl;
		cout << "|	   |  \\/  |                   | |        \\ \\    / (_)    | |             | |               |" << endl;
		cout << "|	   | \\  / | __ _ ___  ___ ___ | |_ __ _   \\ \\  / / _ _ __| |_ _   _  __ _| |               |" << endl;
		cout << "|	   | |\\/| |/ _` / __|/ __/ _ \\| __/ _` |   \\ \\/ / | | '__| __| | | |/ _` | |               |" << endl;
		cout << "|	   | |  | | (_| \\__ \\ (_| (_) | || (_| |    \\  /  | | |  | |_| |_| | (_| | |               |" << endl;
		cout << "|          |_|  |_|\\__,_|___/\\___\\___/\\__\\ __,_|     \\/   |_|_|   \\__|\\__,_|\\__,_|_|               |" << endl;
		cout << "|                                                                                                  |" << endl;
		cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
		cout << "****************************************************************************************************" << endl;
}	
	
void Graficos::MenuPrincipal(){//Menú Principal.
	
textcolor(6);
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                 ¡Bienvenid@ a la Mascota Virtual!                                |" << endl;
	cout << "|                                        ¿Que desea hacer?                                         |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|            »¡Presione la Tecla -A- para iniciar el juego!                                        |" << endl;
	cout << "|            »¡Presione la tecla -B- para leer las instrucciones!                                  |" << endl;
	cout << "|            »¡Presione la tecla -C- para ver los créditos!                                        |" << endl;
	cout << "|            »¡Presione la tecla -X- para salir!                                                   |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
}

void Graficos::Instrucciones(){ //Instrucciones del juego.
	
textcolor(2);	
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                 _____          _                       _                                         |"<< endl;
	cout << "|                |_   _|        | |                     (_)                                        |"<< endl;
	cout << "|	           | | _ __  ___| |_ _ __ _   _  ___ ___ _  ___  _ __   ___  ___                   |"<< endl;
	cout << "|	           | || '_ \\/ __| __| '__| | | |/ __/ __| |/ _ \\| '_ \\ / _ \\/ __|                  |"<< endl;
	cout << "|                 _| || | | \\__ \\ |_| |  | |_| | (_| (__| | (_) | | | |  __/\\__ \\                  |"<< endl;
	cout << "|                 \\___/_| |_|___/\\__|_|   \\__,_|\\___\\___|_|\\___/|_| |_|\\___||___/                  |"<< endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "****************************************************************************************************" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;;
	cout << "|                                                                                                  |" << endl;
	cout << "|                       ¡Muchas gracias por jugar a la Mascota Virtual!                            |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "| En este título seremos dueños de una simpática Mascota Virtual, encargándonos de alimentarla,    |" << endl;
	cout << "| bañarla y mantenerla entretenida.                                                                |" << endl;
	cout << "| Nuestra Mascota será capaz de evolucionar hasta 2 veces, presentando un total de 3 Estados,      |" << endl;
	cout << "| siempre y cuando mantengamos todas sus Características por encima de los 50 Puntos durante       |" << endl;
	cout << "| 30 segundos. De lo contrario, morirá. 		                                           |" << endl;
	cout << "| Cada 2 segundos la Mascota perderá una cierta cantidad de Puntos en todas sus Características.   |" << endl;
	cout << "| Por eso mismo, deberemos encontrar el balance entre los Puntos ganados y los Puntos que se irán  |" << endl;
	cout << "| descontando gradualmente.                                                                        |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "| Todas las Mascotas tienen las siguiente Características iniciales:                               |" << endl;
	cout <<	"|	--> Energía : 100 Puntos.                                                                  |" << endl;
	cout <<	"|	--> Diversión : 100 Puntos.			                                           |" << endl;
	cout <<	"|	--> Satisfacción : 100 Puntos.						                   |" << endl;
	cout <<	"|	--> Higiene : 100 Puntos.				                                   |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "| Una vez que haya evolucionado, sus Características se reiniciarán y se proseguirá al estado      |" << endl;
	cout << "| siguiente.                                                                                       |" << endl;
	cout << "| Si la Mascota logra sobrevivir en el tercer Estado durante 30 segundos manteniendo más de 50     |" << endl;
	cout << "| Puntos en cada Característica, usted habrá ganado el juego.                                      |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "| Cada Mascota presenta tres (3) acciones que deberán ejecutarse con el teclado:                   |" << endl;
	cout << "| --> Jugar (Tecla 'Q') 	                                                                   |" << endl;
	cout << "| --> Comer (Tecla 'W')                                                                            |" << endl;
	cout << "| --> Bañarse (Tecla 'E') 	                                                                   |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|	                                  ¡Anímese a jugar!                                        |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                   Volvamos al menú principal...                                  |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
}

void Graficos::Creditos(){//Créditos

textcolor(2);
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
	cout << "|                            _____              _ _ _                                              |" << endl;
	cout << "|	                    /  __ \\            | (_) |                                             |" << endl;
	cout << "|	                    | /  \\/_ __ ___  __| |_| |_ ___  ___                                   |" << endl;
	cout << "|	                    | |   | '__/ _ \\/ _` | | __/ _ \\/ __|                                  |" << endl;
	cout << "|	                    | \\__/\\ | |  __/ (_| | | || (_) \\__ \\                                  |" << endl;
	cout << "|		            \\_____/_|  \\___|\\__,_|_|\\__\\___/|___/                                  |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "****************************************************************************************************" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|--> Alumna: Micaela B. Alfieri                                                                    |" << endl;
	cout << "|--> Carrera: TEC en Diseño y Programación de Videojuegos.                                         |" << endl;
	cout << "|--> Materia: Introducción a la Programación.                                                      |" << endl;
	cout << "|--> Institución: Universidad Nacional del Litoral.                                                |" << endl;
	cout << "|--> Año: 2019                                                                                     |" << endl;
	cout << "|--> Agradecimientos especiales: a Alfredo, mi gato. :3                                            |" << endl;
	cout << "|                                                                                                  |" << endl;					  
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                   Volvamos al menú principal...                                  |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
}


void Graficos::Salir(){ //Texto de salida.
	
textcolor(3);
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
	cout << "|            ___  ___           _                 _____                _                           |" << endl;
	cout << "|	     |  \\/  |          | |               |  __ \\              (_)                          |" << endl;
	cout << "|	     | .  . |_   _  ___| |__   __ _ ___  | |  \\/_ __ __ _  ___ _  __ _ ___                 |" << endl;
	cout << "|	     | |\\/| | | | |/ __| '_ \\ / _` / __| | | __| '__/ _` |/ __| |/ _` / __|                |" << endl;
	cout << "|	     | |  | | |_| | (__| | | | (_| \\__ \\ | |_\\ \\ | | (_| | (__| | (_| \\__ \\                |" << endl;
	cout << "|	     \\_|  |_/\\__,_|\\___|_| |_|\\__,_|___/ \\_____/_|  \\__,_|\\___|_|\\__,_|___/                |" << endl;
	cout << "|                                                                                                  |" << endl;		
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;	
	cout << "****************************************************************************************************" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                       ¿Quieres salir?                                            |" << endl;
	cout << "|                    ¡¡¡Muchas gracias por descargar la Mascota Virtual!!!                         |" << endl;
	cout << "|                                      ¡¡¡Hasta pronto!!!                                          |" << endl;
	cout << "|                                           \\(°x°)/                                                |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;																  
}

void Graficos::InicioJuego(){//Texto del inicio del juego.
	
textcolor(3);
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                  ¡Has iniciado el Juego!                                         |" << endl;
	cout << "|                           ¿Estás listo para conocer a tu mascota?                                |" << endl;
	cout << "|                                       ¡Aquí está!                                                |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
}	
	
void Graficos::InicioEtapa(){//Texto previo al inicio del cronómetro.
	
textcolor(3);
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;;
	cout << "|                                                                                                  |" << endl;
	cout << "|                El cronómetro comenzará a andar una vez que presiones cualquier tecla.            |" << endl;
	cout << "|                            ¡Recuerda que sólo tienes 30 segundos!                                |" << endl;
	cout << "|                                       ¡Buena suerte!                                             |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
}	

void Graficos::FinEtapa(){//Texto posterior a la partida.
	
textcolor(3);
	system ("CLS");
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                  ¡Se terminó el tiempo!                                          |" << endl;
	cout << "|                      Los Stats finales de tu Mascota en este Estado son:                         | " << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;	
}


void Graficos::Evolucion(){//Texto para la evolución de la Mascota.
	
textcolor(3);
	system ("CLS");
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                   ¡¡¡Felicidades!!!                                              |" << endl;
	cout << "|                            ¡¡¡Tu Mascota ha evolucionado!!!                                      | " << endl;
	cout << "|                                      ¡Aquí está!                                                 |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
}

void Graficos::Muerte(){//Texto por si la Mascota muere.
textcolor(4);
system ("CLS");
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|		       ___   __   _  _  ____     __   _  _  ____  ____                             |" << endl;
	cout << "|		      / __) / _\\ ( \\/ )(  __)   /  \\ / )( \\(  __)(  _ \\                            |" << endl;
	cout << "|	             ( (_ \\/    \\/ \\/ \\ ) _)   (  O )\\ \\/ / ) _)  )   /                            |" << endl;
	cout << "|		      \\___/\\_/\\_/\\_)(_/(____)   \\__/  \\__/ (____)(__\\_)                            |" << endl;
	cout << "|	                                                                                           |"<< endl;
	cout << "|	                                .                                                          |" << endl;
	cout << "|	                               -|-                                                         |" << endl;
	cout << "|	                                |              ___                                         |" << endl;
	cout << "|	                            .-'~~~`-.        _/ 66\\                                        |" << endl;
	cout << "|	                          .'         `.     ( \\  ^/__                                      |" << endl;
	cout << "|	                          |  R  I  P  |  === \\    \\__)                                     |" << endl;
	cout << "|	                          |           | ==== /     \\                                       |" << endl;
	cout << "|	                          |           |   = /      \\                                       |"  << endl;
	cout << "|                               \\\\|           |//   ````````                                       |" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "****************************************************************************************************" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                      ¡¡¡Oh no!!!                                                 |" << endl;
	cout << "|                            ¡¡¡Tu Mascota Virtual ha muerto!!!                                    | " << endl;
	cout << "|                               ¡Más suerte para la próxima!                                       |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|                               Volvamos al menú principal...                                      |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	system("Pause");	
	system ("CLS");
}

void Graficos::Win(){//Texto si el jugador gana.
	
textcolor(4);
system ("CLS");
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|	        	______   _ _      _ _             _                                        |" << endl;
	cout << "|			|  ___| | (_)    (_) |           (_)                                       |" << endl;
	cout << "|			| |_ ___| |_  ___ _| |_ __ _  ___ _  ___  _ __   ___  ___                  |" << endl;
	cout << "|			|  _/ _ \\ | |/ __| | __/ _` |/ __| |/ _ \\| '_ \\ / _ \\/ __|                 |" << endl;
	cout << "|			| ||  __/ | | (__| | || (_| | (__| | (_) | | | |  __/\\__ \\                 |" << endl;
	cout << "|			\\_| \\___|_|_|\\___|_|\\__\\__,_|\\___|_|\\___/|_| |_|\\___||___/                 |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout <<"«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~»" << endl;
	cout << "****************************************************************************************************" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                                                                                  |" << endl;								   
	cout << "|                                  ¡¡¡Has ganado el juego!!!                                       |" 	<< endl;							   
	cout << "|                       ¡Tu Mascota ha madurado, y ya es hora de dejarla ir!                       |"	<< endl;							   
	cout << "|                            ¿Quieres despedirte antes de que se marche?                           |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	
	system("pause");
	system ("CLS");
	
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;	
	cout << "| 	                    ____     ____                                                          | " << endl;
	cout << "| 		          /'    |   |    \\                                                         | "<< endl;
	cout << "| 		        /    /  |   | \\   \\            ____________________________________        | "  << endl;
	cout << "| 		      /    / |  |   |  \\   \\          /                                    \\       |  " << endl;
	cout << "| 		     :   /   |  ''''   |\\   \\        /     ¡Gracias por cuidar de mi!       \\      | " << endl;
	cout << "| 		     | /   / /^\\    /^\\  \\  _|      /  ¡Te traeré souvenirs de mis viajes!   |     | " << endl;
	cout << "| 	              ~   | |   |  |   | | ~       <            ¡Te quiero!                  |     |" << endl;
	cout << "| 		          | |__O|__|O__| |          \\           ¡¡¡Adios!!!                 /      |"<< endl;
	cout << "| 		        /~~      \\/     ~~\\          \\_____________________________________/       |" << endl;
	cout << "| 		       /   (      |      )  \\                                                      |" << endl;
	cout << "| 		 _--_  /,   `\\___/^\\___/'   \\  _--_                                                |" << endl;
	cout << "| 	       /~    ~\\ / -____-|_|_|-____-\\ /~    ~\\                                              |" << endl;
	cout << "|              /          /~~~~\\-----/~~~~\\           \\                                            |" << endl;
	cout << "| 	                 |     |   |     |                                                         |" << endl;
	cout << "| 	                 `^-^-^'   `^-^-^'                                                         |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;				
	
	system("pause");
	system ("CLS");
	
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                                                                                  |" << endl;								   
	cout << "|                                          ...                                                     |" 	<< endl;							   
	cout << "|                                     Se ha marchado...                                            |"<< endl;							   
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	
	system("pause");
	system ("CLS");
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|	                                 ______ _____ _   _                                        |" << endl;
	cout << "|	 	                         |  ___|_   _| \\ | |                                       |" << endl;
	cout << "|		                         | |_    | | |  \\| |                                       |" << endl;
	cout << "|		                         |  _|   | | | . ` |                                       |" << endl;
	cout << "|		                         | |    _| |_| |\\  |                                       |" << endl;
	cout << "|		                         \\_|    \\___/\\_| \\_/                                       |" << endl;
	cout << "|                                                                                                  |" << endl;	
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "****************************************************************************************************" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "|                                 Volvamos al menú principal...                                    |" << endl;
	cout << "|                                                                                                  |" << endl;
	cout << "«~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~» " << endl;
	system("pause");
	system ("CLS");
}




//----------------------------------------------------------------------------------------------Variables
bool Juego = true; //Define si el juego continúa o no.
/* Los siguientes Bool simplemente permiten que nuestra mascota no desenvolucione. Lo he implementado
aquí para que sea más simple de manejar en lineas generales.*/
bool Estado1Activo = true; 
bool Estado2Activo = false;
bool Estado3Activo = false;

//----------------------------------------------------------------------------------------------Main
int main(int argc, char *argv[]) {
	

srand (time(NULL));	//Permite randomizar los números.
	
Graficos Jugador; //Proviene de la Clase que contiene varios gráficos.
	
Jugador.Titulo(); //Título Principal


while((Juego == true)){ 
		
Jugador.MenuPrincipal(); //Muestra el Menú Principal.

//-----------------------------------------------------------------------------------------Selección de Opciones.	
	switch(getch()){ 
//-----------------------------------------------------------------------------------------Inicio del juego
	case 'a': case 'A':{
//-----------------------------------------------------------------------------------------Estado 1

	Mascota *MascotaVirtual = new Estado_1(); //Se crea la Mascota.

	system ("CLS");
	
	if(Estado1Activo == true){
	
	Jugador.InicioJuego(); //Gráfico para el inicio del juego.
				
	MascotaVirtual->GraficoMascota(); //Muestra a la Mascota actual.
				
	Jugador.InicioEtapa(); //Gráfico para el inicio del la Etapa.
				
	system("pause");
	system ("CLS");
				
	MascotaVirtual->setContador(); // Inicia el cronómetro.
				
	Jugador.FinEtapa(); //Se termina el Cronómetro.
				
	MascotaVirtual->getVerStats(); // Se ven los Stats de la Mascota.
				
	system("Pause");
				
	MascotaVirtual->getChequeoStats(); //Se revisan los Stats, para ver si sobrevivio o no.
	
	if((MascotaVirtual->getEvolucion())){  			
		Estado1Activo = false;			
		Estado2Activo = true; }
	}
	
//-----------------------------------------------------------------------------------------Estado 2

	if(Estado2Activo == true){
	
		if((MascotaVirtual->getEvolucion())){ //Si la Mascota sobrevive, sigue al siguiente Estado.

		
		delete MascotaVirtual; //Elimino la Mascota del Estado 1.
					
		Mascota *MascotaVirtual = new Estado_2(); //Creo la Mascota para el Estado 2.
		
		
		Jugador.Evolucion(); // Gráfico que le dice al Jugador que su mascota ha evolucionado.
	
		MascotaVirtual->GraficoMascota(); //Muestra a la Mascota actual.
					
		Jugador.InicioEtapa(); //Gráfico para el inicio del la Etapa.
					
		system("pause");
		system ("CLS");
					
		MascotaVirtual->setContador(); // Inicia el cronómetro.
					
		Jugador.FinEtapa(); //Se termina el Cronómetro.
					
		MascotaVirtual->getVerStats(); // Se ven los Stats de la Mascota.
					
		system("Pause");
					
		MascotaVirtual->getChequeoStats(); //Se revisan los Stats, para ver si sobrevivio o no.
		
		if((MascotaVirtual->getEvolucion())){  			
			Estado2Activo = false;			
			Estado3Activo = true; }
		
		}
	}
					
//-----------------------------------------------------------------------------------------Estado 3
	
	if(Estado3Activo == true){
	
		
			if((MascotaVirtual->getEvolucion())){ //Si la Mascota sobrevive, sigue al siguiente Estado.	
				
			delete MascotaVirtual; //Elimino la Mascota del Estado 2.
						
			Mascota *MascotaVirtual = new Estado_3(); //Creo la Mascota para el Estado 3.
		
			Jugador.Evolucion(); // Gráfico que le dice al Jugador que su mascota ha evolucionado.
			
			MascotaVirtual->GraficoMascota(); //Muestra a la Mascota actual.
							
			Jugador.InicioEtapa(); //Gráfico para el inicio del la Etapa.
							
			system("pause");
			system ("CLS");
							
			MascotaVirtual->setContador(); // Inicia el cronómetro.
							
			Jugador.FinEtapa(); //Se termina el Cronómetro.
							
			MascotaVirtual->getVerStats(); // Se ven los Stats de la Mascota.
							
			system("Pause");
							
			MascotaVirtual->getChequeoStats(); //Se revisan los Stats, para ver si sobrevivio o no.
			
			
				if((MascotaVirtual->getEvolucion())== true){ Jugador.Win();break;} ////Si la Mascota sobrevive, se ha ganado el juego.
				else{Jugador.Muerte();

				break;}	
					
			}
			else{Jugador.Muerte();
			break;}	
		}
		else{Jugador.Muerte();
		break;}}	
		
//-----------------------------------------------------------------------------------------Instrucciones
	case 'b': case 'B':
	system ("CLS");	
	Jugador.Instrucciones();
	system("pause");
	system ("CLS");	
	break;
	
//-----------------------------------------------------------------------------------------Créditos.
	case 'c': case 'C':
	system ("CLS");		
	Jugador.Creditos();
	system("pause");
	system ("CLS");
	break;
		
//-----------------------------------------------------------------------------------------Salir del juego
	case 'x': case 'X':
	system ("CLS");		
	Jugador.Salir();
	system("pause");
	system ("CLS");
	return 0;

  } //Final del Switch

	
}
	return 0;
}

