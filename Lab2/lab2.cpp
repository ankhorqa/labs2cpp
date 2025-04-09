#include <iostream>  
#include <string>    


class Character {
private:
    std::string name;  
    int health;       
    int attack;        
    int defense;       

public:
    Character(const std::string& n, int h, int a, int d)
        : name(n), health(h), attack(a), defense(d) {
        std::cout << "Character " << name << " created!\n";
    }

    ~Character() {
        std::cout << "Character " << name << " destroyed!\n";
    }

    void displayInfo() const {
        std::cout << "Name: " << name
                  << ", HP: " << health
                  << ", Attack: " << attack
                  << ", Defense: " << defense << std::endl;
    }
};

class Weapon {
private:
    std::string name;  
    int damage;        
    float weight;      
public:
    Weapon(const std::string& n, int dmg, float w)
        : name(n), damage(dmg), weight(w) {
        std::cout << "Weapon " << name << " created!\n";
    }

    ~Weapon() {
        std::cout << "Weapon " << name << " destroyed!\n";
    }

    void displayInfo() const {
        std::cout << "Weapon Name: " << name
                  << ", Damage: " << damage
                  << ", Weight: " << weight << "kg" << std::endl;
    }
};

class Monster {
private:
    std::string name;  
    int health;        
    int attack;       
    int defense;       

public:
    Monster(const std::string& n, int h, int a, int d)
        : name(n), health(h), attack(a), defense(d) {
        std::cout << "Monster " << name << " created!\n";
    }

    ~Monster() {
        std::cout << "Monster " << name << " destroyed!\n";
    }

    void displayInfo() const {
        std::cout << "Name: " << name
                  << ", HP: " << health
                  << ", Attack: " << attack
                  << ", Defense: " << defense << std::endl;
    }
};

int main() {
    Character hero("Knight", 100, 20, 10);
    hero.displayInfo();  

    Monster goblin("Goblin", 50, 15, 5);
    goblin.displayInfo();  

    Weapon sword("Sword", 30, 1.5f);
    Weapon bow("Longbow", 20, 3.5f);

    sword.displayInfo();
    bow.displayInfo();

    return 0;
}