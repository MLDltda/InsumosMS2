#ifndef MENU_H
#define MENU_H

#include "Controler.h"

class Menu : public Controler
{
    public:
        Menu();
        void exibeMenu1();
        void exibeMenu2();
        virtual ~Menu();

    protected:

    private:
};

#endif // MENU_H
