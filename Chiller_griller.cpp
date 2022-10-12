//
// Created by Женя on 27.09.2022.
//

#include "Chiller_griller.hpp"

void Chiller_griller::set_num_of_gals(int a) {
    this->num_of_gals = a;
}

void Chiller_griller::take_a_leap_year() {
    cout << "-woaahhhh im gonna go chill" << endl;
}

int Chiller_griller::get_num_of_gals(){
    return this->num_of_gals;
}

/*
int main() {
    Chiller_griller Jenya(19, "Jenya");
    Jenya.set_num_of_gals(0);
    cout << "Even though he is from class of chillers-grillers, " << Jenya.get_name() << " got " << Jenya.get_num_of_gals() <<
            " gals! Such a looser" << endl;
}
*/