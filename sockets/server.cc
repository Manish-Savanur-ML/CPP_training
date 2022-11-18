#include<iostream>
#include <netinet/in.h>
#include <unistd.h>
#include<sys/socket.h>
#define PORT 9000
using namespace std;

main()
{
    struct sockaddr_in srv;
    int new_socket;
    int addrlen = sizeof(sockaddr);
    char buffer[1024] = { 0 };
    // Initialize socket
    int nSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (nSocket < 0)
        cout << "socket not opened" << endl;
    else
        cout << "Socket opened successfully " << nSocket << endl;
    // Initialize environment variable for sockaddr stucture
    srv.sin_family = AF_INET;
    srv.sin_port = htons(PORT); // Host to network stop. Specify network byte order
    srv.sin_addr.s_addr = INADDR_ANY; // Assign address of local machine
    //memset(&(srv.sin_zero), 0, 8);
    
    // Bind to local port
    int nRet = bind(nSocket, (sockaddr*)&srv, sizeof(sockaddr));
    if (nRet < 0)
        cout << "Failed to bind to loacl port" << endl;
    else
        cout << "Bind to loacal port successfull" << endl;

    // Listen teh request from client (queue the requests)
    int lRet = listen(nSocket, 2);
    if (lRet < 0)
        cout << "Failed to listen to port" << endl;
    else
        cout << "Start listening to local port" << endl;
    int count = 1;
    //cout << "sleep" << endl;
    //sleep(60);
    //cout << "sleep end" << endl;
    while(count < 6)
    {    
        new_socket = accept(nSocket, (sockaddr*)&srv, (socklen_t*)&addrlen);
        if (new_socket < 0)
            cout << "Accept failed" << endl;
        else
            cout << "Accept success" << endl;

        read(new_socket, buffer, 1024);
        cout << buffer << endl;
	count++;
    }
    close(new_socket);
}
