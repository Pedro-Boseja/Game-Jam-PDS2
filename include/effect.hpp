#ifndef EFFECT_H
#define EFFECT_H

#include <iostream>

    class Effect{

        private:

            int _value;
            std::string _name;
            std::string _description;

        public:

            Effect( int value, std::string name, std::string  description);

            int getValue();
                
            std::string getName();

            std::string getDescription();
            
            // polimorfismo da classe: serão utilizadas apeanas as 
            // subclasses que alteram seus respectivos atributos da entidade.
            virtual void addEffect();

    };
#endif