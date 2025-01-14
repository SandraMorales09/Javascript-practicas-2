

*Cliente de chat*
```
#include <iostream>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main() {
    int cliente = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in servidor;
    servidor.sin_family = AF_INET;
    servidor.sin_port = htons(8080);
    inet_pton(AF_INET, "127.0.0.1", &servidor.sin_addr);

    connect(cliente, (struct sockaddr*)&servidor, sizeof(servidor));

    std::string mensaje;
    while (true) {
        std::cout << "Cliente: ";
        std::getline(std::cin, mensaje);
        send(cliente, mensaje.c_str(), mensaje.size(), 0);
        char buffer[256];
        recv(cliente, buffer, 256, 0);
        std::cout << "Servidor: " << buffer << std::endl;
    }

    return 0;
}
```

*Servidor de chat*
```
#include <iostream>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main() {
    int servidor = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in servidor_info;
    servidor_info.sin_family = AF_INET;
    servidor_info.sin_port = htons(8080);
    inet_pton(AF_INET, "127.0.0.1", &servidor_info.sin_addr);

    bind(servidor, (struct sockaddr*)&servidor_info, sizeof(servidor_info));
    listen(servidor, 1);

    struct sockaddr_in cliente_info;
    socklen_t cliente_len = sizeof(cliente_info);
    int cliente = accept(servidor, (struct sockaddr*)&cliente_info, &cliente_len);

    std::string mensaje;
    while (true) {
        char buffer[256];
        recv(cliente, buffer, 256, 0);
        std::cout << "Cliente: " << buffer << std::endl;
        std::cout << "Servidor: ";
        std::getline(std::cin, mensaje);
        send(cliente, mensaje.c_str(), mensaje.size(), 0);
    }

    return 0;
}
```
