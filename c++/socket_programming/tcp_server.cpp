    #include <array>
    #include <iostream>
    #include <netinet/in.h>
    #include <ostream>
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <netdb.h>
    #include <string.h>
    #include <unistd.h>
    #include <arpa/inet.h>
    #include <string>

    int main() {

        //create a socket
        int listening = socket(AF_INET, SOCK_STREAM, 0);

        if (listening <0)
        {
            std::cerr<<"Can't create a socket! ";
            return -1;        
        }

        //Bind the Socket to IP / port
        sockaddr_in hint ;
        hint.sin_family = AF_INET;
        hint.sin_port = htons(54000);
        inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr);

        if (bind(listening , (sockaddr*) &hint , sizeof(hint)) < 0)
        {
            std::cerr<< "Can't bind to IP/port!";
            return -2;
        }

        //Make the socket for listening in
        if (listen(listening, SOMAXCONN))
        {
            std::cerr<<"Can't listen! ";
            return -3;
        }

        //Accept the call
        sockaddr_in client;
        socklen_t clientSize = sizeof(client);
        // std::array<char, NI_MAXHOST> host;
        // std::array<char, NI_MAXSERV> svr;
        char host[NI_MAXHOST];
        char svr[NI_MAXSERV];

        int clientSocket = accept(listening,
                                (sockaddr*) &client,
                                &clientSize);

        if (clientSocket <0)
        {
            std::cerr<<"Problem with client connecting! ";
            return -4;
        }

        //close the listening socket 
        close(listening);

        memset(host, 0 , NI_MAXHOST);
        memset(svr, 0, NI_MAXSERV);

        int result = getnameinfo((sockaddr*)&client,
                                sizeof(client),
                                host,
                                NI_MAXHOST,
                                svr,
                                NI_MAXSERV,
                                0);

        if (result)
        {
            std::cout << host << "Connected On "<< svr << std::endl;
        }
        else {
            inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
            std::cout << host << "Connected on " << ntohs(client.sin_port) << std::endl;
        }

        //while receiving- display message, echo message
        char buf[4096];
        while (true)    
        {
            //Clear the buffer
            memset(buf, 0, 4096);
            //Wait for a message
            int bytesRecv = recv(clientSocket, buf, 4096, 0);
            if (bytesRecv == -1 )
            {
                std::cerr << "There was a connection issue" <<std::endl;
                break;
            }
            if (bytesRecv == 0 )
            {
                std::cerr << "The client disconnected" <<std::endl;
                break;
            }

            //Display message
            std::cout << "Reccived: " << std::string(buf, 0 , bytesRecv) << std::endl;

            //Resend message
            send(clientSocket, buf, bytesRecv+1 , 0);
            
        }
        
        //close socket
        close(clientSocket);


        return 0;
    }
