g++ -std=c++17 -Wall -I./include -c ./src/Customer.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Employee.cpp
g++ -std=c++17 -Wall -I./include -c ./src/MeatProduct.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Chicken.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Cow.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Pork.cpp
g++ -std=c++17 -Wall -I./include -c ./src/OrderDetails.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Order.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp


g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Customer.o Employee.o MeatProduct.o Chicken.o Cow.o Pork.o OrderDetails.o Order.o main.o -o app.exe


DEL .\*.o 


app.exe