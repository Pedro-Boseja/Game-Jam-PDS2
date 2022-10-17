#ifndef ENTIDADE_H
#define ENTIDADE_H

#include <iostream>
#include <list>
#include "attack.hpp"
#include "effect.hpp"

    class Entity{

        private:

        std::string _name;
        int _life;
        int _defense;
        std::list<Attack> _hit;
        std::list<Effect> _effect;

        public:

            Entity( std::string name,
                    int life,
                    int defense,
                    std::list<Attack>& hit,
                    std::list<Effect>& effect);
            
            
            int getLife();

            std::string getName();

            Attack* getHit(int id);

            Effect* getEffect(int id);

            void doHit(Entity& enemy);


    };

#endif