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
    }


    void displayInfo() const {
        std::cout << "Имя: " << name << ", ХП: " << health
                  << ", Атака: " << attack << ", Защита: " << defense << std::endl;
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
        std::cout << "Оружие " << name << " создано!\n";
    }


    void displayInfo() const {
        std::cout << "Оружие: " << name
                  << ", Урон: " << damage
                  << ", Вес: " << weight << "кг." << std::endl;
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
        std::cout << "Враг " << name << " появился!\n";
    }


    void displayInfo() const {
        std::cout << "Имя: " << name
                  << ", ХП: " << health
                  << ", Атака: " << attack
                  << ", Защита: " << defense << std::endl;
    }
};

int main() {
    Character hero("Рыцарь", 100, 20, 10);
    hero.displayInfo();  

    Monster skelet("Скелет", 50, 15, 5);
    skelet.displayInfo();  

    Weapon sword("Меч", 30, 1.5f);
    Weapon bow("Лук", 20, 3.5f);

    sword.displayInfo();
    bow.displayInfo();

    return 0;
}
