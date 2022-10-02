//
//  make.cpp
//  testgame
//
//  Created by 徐晨 on 10/1/22.
//

#include "make.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>
class enemy {
 
public:
    CircleShape e;
    enemy(){
        CircleShape e;
    }
    enemy(const enemy& a){
        e=a.e;
    }
    CircleShape radius (CircleShape e){
        e.setRadius(50.f);
        e.setFillColor(Color::White);
        e.setOutlineThickness(2);
        e.setOutlineColor(Color::Blue);
        return e;
    }
    
};

    
    
    

