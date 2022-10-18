#ifndef ATTACK_H
#define ATTACK_H

#include <iostream>
#include <vector>
#include "effect.hpp"
#include "lifeeffect.hpp"
#include "damageeffect.hpp"
#include "defenseeffect.hpp"

    class Attack{

        private:

            int _damage;
            std::string _name;
            std::string _description;
            std::vector<Effect*> _effects;

        public:

            Attack( int damage,
                    std::string name,
                    std::string description,
                    std::vector<Effect*>& effects 
                  );
                  
            ~Attack();

            std::string getDescription();

            std::string getName();

            int getDamage();
            
            //seleciona qual efeito do ataque será utilizado.
            Effect* getEffect(int id = 0);
            
    };
#endif