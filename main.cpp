#include <iostream>

void GUI_atm(){
    std::cout<< "*****************************Welcome***********************************"<< std::endl;
    std::cout<< "1. Check balance"<<'\n';
    std::cout<< "2. Deposit"<<'\n' ;
    std::cout<< "3. Withdraw"<<'\n';
    std::cout<< "4. Exit"<< '\n';
    std::cout<< "***********************************************************************"<< std::endl;
}

int main() {
    int option;
    do {
        GUI_atm();
        std::cout << "Enter the number you want to choose" << std::endl;
        std::cin >> option;
        switch (option) {
            case 1:
                int balance;
                if (balance != 0) {
                    std::cout << "Your balance is:" << "$" << balance<<std::endl;break;
                } else {
                    std::cout << "You have nothing lol"<<std::endl;break;
                    system("cls");
                }
            case 2:
                int amount;
                std::cout << "Enter the amount you want to add" << std::endl;
                std::cin >> amount;
                balance += amount;
                std::cout << "you have added" << "$" << amount << "successfully!"<< std::endl;break;
                break;
            case 3:
                int w_draw;
                std::cout << "Enter the amount you want to withdraw" << std::endl;
                std::cin >> w_draw;
                if (balance > 0) {
                    balance -= w_draw;
                    std::cout << "You have taken:" << '$' << w_draw <<std::endl;
                } else if (balance == 0) {
                    char answer;
                    std::cerr << "Warning: your balance will be under the minimum range" << std::endl;
                    std::cout << "press Y or N if you still want to withdraw" << std::endl;
                    std::cin >> answer;
                    switch (answer) {
                        case 'Y':
                            balance-=w_draw;
                        std::cerr<<"You now have"<< '$'<< balance<< "!"<< std::endl;break;

                        case 'N':
                            break;
                    }
                }else{
                    std::cerr<< "Your balance is already under the minimumrange"<<'\n';
                    std::cerr<< "Deposit or else RIP"<< std::endl;
                }
        }
    } while (option != 4);
}