g++ -std=c++17 -Wall -I./include -c ./src/Article.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Customer.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Employee.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Order.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp


g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Article.o Customer.o Employee.o Order.o main.o -o app.exe


DEL .\*.o 


app.exe