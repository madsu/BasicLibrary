#include "EchoServer.h"

EchoServer::EchoServer(EventLoop* loop, int port)
	:server_(loop, port)
{
	server_.SetConectionCallback(
		std::bind(&EchoServer::onConnection, this, std::placeholders::_1));

	server_.SetMessageCallback(
		std::bind(&EchoServer::onMessage, this, std::placeholders::_1, std::placeholders::_2));
}

EchoServer::~EchoServer()
{

}

void EchoServer::Start()
{
	server_.Start();
}

void EchoServer::onConnection(const TcpConnectionPtr& conn)
{

}

void EchoServer::onMessage(const TcpConnectionPtr& conn, char* buf)
{

}