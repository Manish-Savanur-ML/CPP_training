#include<iostream>
#include<cstring>
#include <netinet/in.h>
#include <unistd.h>
#include<sys/socket.h>
#define PORT 9000
using namespace std;

main()
{
    struct sockaddr_in crv;
    char buffer[1024] = { 0 };
    char* hello = "Hello from client";
    // Initialize socket
    int cSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (cSocket < 0)
        cout << "socket not opened" << endl;
    else
        cout << "Socket opened successfully " << cSocket << endl;
    // Initialize environment variable for sockaddr stucture
    crv.sin_family = AF_INET;
    crv.sin_port = htons(PORT); // Host to network stop. Specify network byte order
    crv.sin_addr.s_addr = INADDR_ANY; // Assign address of local machine
    //memset(&(srv.sin_zero), 0, 8);
    int client_fd = connect(cSocket, (struct sockaddr*)&crv, sizeof(crv));
    if (client_fd < 0)
        cout << "Connection failed" << endl;
    else
        cout << "Connection successfull" << endl;
    send(cSocket, hello, strlen(hello), 0);
    close(client_fd);
    cout << "Hello message sent" << endl;
}
