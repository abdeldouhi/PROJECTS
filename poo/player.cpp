#include<iostream>
#include<string>
using namespace std;
class Player {
	public:
				void heal (int amount) { life = life + amount;
											}


				bool isAlive(){
		if(life>0) {
		
			return true;
		}else {
		
			return false;
		} 	}
			
				
		void takeDamage (int damages) {
				 life = life - damages ;
				}
				
				
		void attack (Player &target) {
				target.takeDamage(weaponDamage);
				}
	// Getters			
	int getweaponDamage()  { return weaponDamage; }
	int getlife()  { return life; }
	string getname()  { return name; }

	// Setters
	void setweaponDamage(int w) { weaponDamage = w; }
	void setlife(int m) { life = m; }
	void setname(string n) { name = n; }
	
	
								
		
			
			private:
				int life;
				int weaponDamage ;
				string name ;
					};



int main () {
	
	
Player A,B;

A.setname ("chika");
B.setname ("l7aj" );

A.setlife ( 750 );
B.setlife ( 1000) ;

A.setweaponDamage ( 75) ;
B.setweaponDamage ( 10);



printf("A attacking B \n ");
A.attack(B);

printf("B heals by 20 points \n ");
B.heal(20);

printf("B attacking A \n ");
B.attack(A);

printf("B attacking A  \n");
B.attack(A);

printf("A attacking B \n ");
A.attack(B);

cout << "player 1 name is " << A.getname() << " and his life is " << A.getlife() << endl;
cout << "player 2 name is " << B.getname() << " and his life is " << B.getlife() << endl;







	
}
